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
import tf2_geometry_msgs
import tf2_ros


class MatchingPixToPtcld(Node):

    def __init__(self):
        super().__init__('pix_to_point_client')
        # client to return block position
        self.vision_client = self.create_client(Ptps, '/pix_to_point_cpp')

        self.response_data = None
        self.search_object = None

        self.block_color_subscription = self.create_subscription(String , '/goal_object', self.goal_object_callback, 1)
        self.tilt_cam_subscriber = self.create_subscription(Float64MultiArray, "locobot/camera_controller/commands", self.cam_tilt_callback, 10)
        self.tilt_cam_publisher = self.create_publisher(Float64MultiArray, "/locobot/camera_controller/commands", 10)
        self.goal_pose = self.create_publisher(PoseStamped, "/goal_pose", 10)

        while not self.vision_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req_pos = Ptps.Request()
        self.req_pos.desired_frame = 'locobot/base_link'

    def goal_object_callback(self, data):
        if data.data:
            self.search_object = data.data[0]
        else:
            self.get_logger().warn('Received empty or None data')


            
    def cam_tilt_callback(self, data):
        if data.data:
            # Assuming the Float64MultiArray has only one value (the tilt angle)
            self.cam_angle = data.data[0]
            self.get_logger().info(f"Received camera tilt angle: {self.cam_angle}")
        else:
            self.get_logger().warn("Received empty or None data for camera tilt angle")


    def call_pix_to_point_service(self):
        self.future = self.vision_client.call_async(self.req_pos)
        while rclpy.ok():
            rclpy.spin_once(self)
            if self.future.done():
                try:
                    response = self.future.result()
                except Exception as e:
                    self.get_logger().error(f'Service call failed: {str(e)}')
                else:
                    for i in range(3):
                        self.get_logger().info('Service call successful!')
                        response = self.future.result()
                        
                        # self.get_logger().info(f'Response: {response}')
                        if self.search_object == None:
                            self.get_logger().info(f'There is no object to look for, give an object to /goal_object')
                            break
                        elif self.search_object == 'R':
                            points = response.red_points
                        elif self.search_object == 'Y':
                            points = response.yellow_points
                        elif self.search_object == 'G':
                            points = response.green_points
                        elif self.search_object == 'B':
                            points = response.blue_points
                        if len(points) == 0:
                            self.get_logger().info(f'No points of the given color are found, trying to tilt camera')
                            points_pub = False
                            response = self.camera_tilt(i)
                        else:
                            # time.sleep(2)
                            for p in points:
                                pose = PoseStamped()
                                pose.header = p.header
                                pose.pose.position.x = p.point.z
                                pose.pose.position.y = -p.point.x
                                pose.pose.position.z = -p.point.y
                                pose.pose.orientation.x = 0.0
                                pose.pose.orientation.y = 0.0
                                pose.pose.orientation.z = 0.0
                                pose.pose.orientation.w = 1.0
                                self.goal_pose.publish(pose)
                            points_pub = True
                            
                    if not points_pub:
                        self.get_logger().info(f'could not find a block of the given color after 3 attempts. reposition please')
                    break
                break

    def camera_tilt(self, i):
        # while rclpy.ok():
            rclpy.spin_once(self)
            ang = [0, 0.25, 0.5]
            
            self.get_logger().info(f'Angle: {ang[i]}')
            
            msg = Float64MultiArray()
            msg.data = [0.0,(ang[i]*0.25)]
            self.tilt_cam_publisher.publish(msg)

            future = self.vision_client.call_async(self.req_pos)
                
            while rclpy.ok():
                rclpy.spin_once(self)
                if future.done():
                    try:
                        response = future.result()
                    except Exception as e:
                        self.get_logger().error(f'Service call failed: {str(e)}')
                        return None  # Or handle the error accordingly
                    else:
                        # Do something with the response if needed
                        # self.get_logger().info(f'Response from tilt_camera: {response}')
                        return response  # Return the response to the caller
                    
                time.sleep(2)

            time.sleep(1)


def main(args=None):
    rclpy.init(args=args)
    pix_to_point_client = MatchingPixToPtcld()
    
    # Create a timer to delay the call to pix_to_point_service
    time_sec = 1
    time.sleep(time_sec)

    pix_to_point_client.call_pix_to_point_service()

    rclpy.shutdown()    

if __name__ == '__main__':
    main()