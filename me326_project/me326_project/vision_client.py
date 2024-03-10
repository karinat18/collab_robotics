#!/usr/bin/env python3
'''
Written by: Joshua Lee, Date: 3/7/24


'''

import rclpy
from rclpy.node import Node
from la_msgs.srv import Ptps


class MatchingPixToPtcld(Node):

    def __init__(self):
        super().__init__('pix_to_point_client')
        self.vision_client = self.create_client(Ptps, '/pix_to_point_cpp')
        while not self.vision_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req = Ptps.Request()
        self.req.desired_frame = 'locobot/base_link'

    def call_pix_to_point_service(self):
        self.future = self.vision_client.call_async(self.req)
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
                break


def main(args=None):
    rclpy.init(args=args)
    pix_to_point_client = MatchingPixToPtcld()
    pix_to_point_client.call_pix_to_point_service()
    rclpy.shutdown()


if __name__ == '__main__':
    main()