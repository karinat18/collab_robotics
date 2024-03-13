#!/usr/bin/env python3
'''
Written by: Joshua Lee, Date: 3/7/24


'''

import rclpy
from rclpy.node import Node
from la_msgs.srv import Ptps
from std_msgs.msg import Float64MultiArray
from std_msgs.msg import String
from visualization_msgs import msg
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import PointStamped
import time

from locobot_interfaces.srv import BlockColor

class MatchingPixToPtcld(Node):

    def __init__(self):
        super().__init__('pix_to_point_client')
        # client to return block position
        self.vision_client = self.create_client(Ptps, '/pix_to_point_cpp')

        self.response_data = None
        self.search_object = None

        # self.block_color_subscription = self.create_subscription(String , '/goal_object', self.goal_object_callback, 1)
        self.tilt_cam_subscriber = self.create_subscription(Float64MultiArray, "locobot/camera_controller/commands", self.cam_tilt_callback, 10)
        self.tilt_cam_publisher = self.create_publisher(Float64MultiArray, "/locobot/camera_controller/commands", 10)
        # self.goal_pose = self.create_publisher(PoseStamped, "/goal_pose", 10)
        self.set_block_service = self.create_service(
            BlockColor,
            'set_block_color',
            self.set_block_color_callback
        )
        while not self.vision_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req_pos = Ptps.Request()
        self.req_pos.desired_frame = 'locobot/base_link'

    def set_block_color_callback(self, request, response):
        self.get_logger().info(f'Received, starting callback: {request.color}')
        self.call_ptp_service(request.color)
        # response.success = True
        return response


    # def goal_object_callback(self, data):
    #     if data.data:
    #         self.search_object = data.data[0]
    #     else:
    #         self.get_logger().warn('Received empty or None data')


            
    def cam_tilt_callback(self, data):
        if data.data:
            # Assuming the Float64MultiArray has only one value (the tilt angle)
            self.cam_angle = data.data[0]
            self.get_logger().info(f"Received camera tilt angle: {self.cam_angle}")
        else:
            self.get_logger().warn("Received empty or None data for camera tilt angle")

    def call_ptp_service(self, color):
        future = self.vision_client.call_async(self.req_pos)
        future.add_done_callback(lambda future: self.everything(future, color))



    def everything(self, future, color):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error(f'Service call failed: {str(e)}')
        else:
            points_pub = False
            for i in range(3):
                # Handle your response here
                if color.data[0] == None:
                    self.get_logger().info(f'There is no object to look for, give an object to /goal_object')
                    break
                elif color.data[0] == 'R':
                    points = response.red_points
                elif color.data[0] == 'Y':
                    points = response.yellow_points
                elif color.data[0] == 'G':
                    points = response.green_points
                elif color.data[0] == 'B':
                    points = response.blue_points
                if len(points) == 0:
                    self.get_logger().info(f'No points of the given color are found, trying to tilt camera')
                    self.camera_tilt(i)
                else:
                    for p in points:
                        pose = PoseStamped()
                        pose.header = p.header  
                        pose.pose.position.x = p.point.x
                        pose.pose.position.y = p.point.y
                        pose.pose.position.z = p.point.z
                        pose.pose.orientation.x = 0.0
                        pose.pose.orientation.y = 0.0
                        pose.pose.orientation.z = 0.0
                        pose.pose.orientation.w = 1.0
                        # self.goal_pose.publish(pose) 
                        return pose
                    points_pub = True
                    break
                if not points_pub:
                    self.get_logger().info(f'could not find a block of the given color after 3 attempts. reposition please')
                break


    def call_pix_to_point_service(self, color):
        future = self.vision_client.call_async(self.req_pos)
        self.get_logger().info(f"Received camera tilt angle: {future}")
        while rclpy.ok():
            # rclpy.spin_once(self)
            self.get_logger().info(f"Received camera tilt angle: {future.done()}")
            if future.done():
                self.get_logger().info('Future is done!')
                try:
                    response = future.result()
                except Exception as e:
                    self.get_logger().error(f'Service call failed: {str(e)}')
                else:
                    for i in range(3):
                        self.get_logger().info('Service call successful!')
                        # Handle your response here
                        self.get_logger().info(f'Response: {response}')
                        if color == None:
                            self.get_logger().info(f'There is no object to look for, give an object to /goal_object')
                            break
                        elif color == 'R':
                            points = response.red_points
                        elif color == 'Y':
                            points = response.yellow_points
                        elif color == 'G':
                            points = response.green_points
                        elif color == 'B':
                            points = response.blue_points
                        if len(points) == 0:
                            self.get_logger().info(f'No points of the given color are found, trying to tilt camera')
                            self.camera_tilt(i)
                        else:
                            for p in points:
                                pose = PoseStamped()
                                pose.header = p.header  
                                pose.pose.position.x = p.point.x
                                pose.pose.position.y = p.point.y
                                pose.pose.position.z = p.point.z
                                pose.pose.orientation.x = 0.0
                                pose.pose.orientation.y = 0.0
                                pose.pose.orientation.z = 0.0
                                pose.pose.orientation.w = 1.0
                                return pose
                            points_pub = True
                            break
                    if not points_pub:
                        self.get_logger().info(f'could not find a block of the given color after 3 attempts. reposition please')
                

    def camera_tilt(self, i):
        # while rclpy.ok():
            rclpy.spin_once(self)
            ang = [0, 0.25, 0.5]
            
            self.get_logger().info(f'Angle: {ang[i]}')
            
            msg = Float64MultiArray()
            msg.data = [0.0,(ang[i]*0.25)]
            self.tilt_cam_publisher.publish(msg)

            time.sleep(3)


def main(args=None):
    rclpy.init(args=args)
    pix_to_point_client = MatchingPixToPtcld()
    
    # Create a timer to delay the call to pix_to_point_service
    rclpy.spin(pix_to_point_client)

    rclpy.shutdown()    

if __name__ == '__main__':
    main()