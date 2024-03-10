#!/usr/bin/env python3
'''
Written by: Joshua Lee, Date: 3/7/24


'''

import rclpy
from rclpy.node import Node
from la_msgs.srv import Ptps
# from la_msgs.srv import CamTilt
from std_msgs.msg import Float64MultiArray
from visualization_msgs import msg


class MatchingPixToPtcld(Node):

    def __init__(self):
        super().__init__('pix_to_point_client')
        # client to return block position
        self.vision_client = self.create_client(Ptps, '/pix_to_point_cpp')

        # self.create_subscription()
        # self.create_subscription(msg, '/locobot/camera_cube_locator', self.block_positions, 10)
        self.tilt_cam_publisher = self.create_publisher(Float64MultiArray, "/locobot/camera_controller/commands", 10)

        self.response_data = None


        while not self.vision_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req_pos = Ptps.Request()
        self.req_pos.desired_frame = 'locobot/base_link'

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
                    self.get_logger().info('Service call successful!')
                    # Handle your response here
                    self.get_logger().info(f'Response: {response}')
                    self.get_logger().info(f'Response: {response.red_points}')
                break
    
    def camera_tilt(self):
        self.future = self.vision_client.call_async(self.req_pos)
        response = self.future.result()
        while rclpy.ok():
            rclpy.spin_once(self)
            if self.future.done():
                try:
                    response = self.future.result()
                    if response is not None:
                        if response.red_points:
                            for point in response.red_points:
                                x = point.point.x
                                y = point.point.y
                                z = point.point.z
                                self.get_logger().info(f"Red Point: ({x}, {y}, {z})")
                        else:
                            self.get_logger().info("No Red points in the picture")
                    else:
                        self.get_logger().info("Response is None")
                except Exception as e:
                    self.get_logger().error(f'Service call failed: {str(e)}')
                break




def main(args=None):
    rclpy.init(args=args)
    pix_to_point_client = MatchingPixToPtcld()
    pix_to_point_client.call_pix_to_point_service()
    print("HAHA")
    # print()
    pix_to_point_client.camera_tilt()
    rclpy.shutdown()


if __name__ == '__main__':
    main()