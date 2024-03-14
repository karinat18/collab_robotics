#!/usr/bin/env python3
'''
Written by: Joshua Lee, Date: 3/7/24

'''

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from la_msgs.srv import Ptps
from std_msgs.msg import Float64MultiArray
from std_msgs.msg import String
from visualization_msgs import msg
from geometry_msgs.msg import PoseStamped, PoseWithCovariance
from nav_msgs.msg import Odometry
import time
from threading import Event

from locobot_interfaces.srv import BlockColor

class MatchingPixToPtcld(Node):

    def __init__(self):
        super().__init__('pix_to_point_client')
        # client to return block position
        self.vision_client = self.create_client(Ptps, '/pix_to_point_cpp')
        self.callback_group = ReentrantCallbackGroup()

        # self.block_color_subscription = self.create_subscription(String , '/goal_object', self.goal_object_callback, 1)
        self.tilt_cam_subscriber = self.create_subscription(Float64MultiArray, "locobot/camera_controller/commands", self.cam_tilt_callback, 10)
        self.tilt_cam_publisher = self.create_publisher(Float64MultiArray, "/locobot/camera_controller/commands", 10)
        # self.goal_pose = self.create_publisher(PoseStamped, "/goal_pose", 10)
        self.set_block_service = self.create_service(
            BlockColor,
            'set_block_color',
            self.set_block_color_callback,
            callback_group = self.callback_group
        )
        self.vision_client = self.create_client(
            Ptps,
            'pix_to_point_cpp',
            callback_group = self.callback_group
        )

        self.odom = self.create_subscription(Odometry,'/odom',self.odom_callback, 10)

        self.cur_pos = PoseWithCovariance()

        while not self.vision_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req_pos = Ptps.Request()
        # self.req_pos.desired_frame = 'locobot/base_link'
        # self.req_pos.desired_frame = 

    def odom_callback(self, msg):
        # time.sleep(3)
        self.cur_pos = msg.pose

    def set_block_color_callback(self, request, response):
        self.get_logger().info(f'Received, starting callback: {request.color}')
        self.get_logger().info(f'Received, starting callback: {request.frame}')
        # self.call_ptp_service(request.colorf)
        # Update the response with the correct pose
        # response.pose = self.pose
        self.req_pos.desired_frame = request.frame
        future = self.vision_client.call_async(self.req_pos)
        event = Event()

        def done_callback(future):
            nonlocal event
            event.set()

        # future.add_done_callback(lambda future: self.everything(future, request.color))
        future.add_done_callback(done_callback)
        event.wait()
        try:
            vision_response = future
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}')
            return response
        
        resp = self.everything(vision_response, request.color, request.frame)
        response.pose = resp
        self.get_logger().info(f"Pose : {response}")
        return response
  
    def cam_tilt_callback(self, data):
        if data.data:
            # Assuming the Float64MultiArray has only one value (the tilt angle)
            self.cam_angle = data.data[0]
            self.get_logger().info(f"Received camera tilt angle: {self.cam_angle}")
        else:
            self.get_logger().warn("Received empty or None data for camera tilt angle")

    def everything(self, future, color, frame):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error(f'Service call failed: {str(e)}')
        else:
            for i in range(3):
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

                        if frame == 'locobot/base_link':
                            pose.pose.position.x += self.cur_pos.pose.position.x
                            pose.pose.position.y += self.cur_pos.pose.position.y
                            pose.pose.position.z += self.cur_pos.pose.position.z
                            pose.pose.orientation.x = self.cur_pos.pose.orientation.x
                            pose.pose.orientation.y = self.cur_pos.pose.orientation.y
                            pose.pose.orientation.z = self.cur_pos.pose.orientation.z
                            pose.pose.orientation.w = self.cur_pos.pose.orientation.w

                        self.pose = pose  # Update self.pose with the received pose
                        self.pose_updated = True
                        # self.get_logger().info(f"Pose: {self.pose}")  # Log the updated pose here
                        break
                if not self.pose_updated:
                    self.get_logger().info(f'Could not find a block of the given color after 3 attempts. Reposition please')
                break
            # self.get_logger().info(f"Pose 2: {self.pose}")
            return self.pose

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
    node = MatchingPixToPtcld()
    executor = MultiThreadedExecutor()    
    rclpy.spin(node, executor)
    rclpy.shutdown()

if __name__ == '__main__':
    main()