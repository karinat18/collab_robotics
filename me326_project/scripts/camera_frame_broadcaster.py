#!/usr/bin/env python3

from geometry_msgs.msg import TransformStamped

import rclpy
from rclpy.node import Node

from tf2_ros import TransformBroadcaster


class FixedFrameBroadcaster(Node):

   def __init__(self):
        super().__init__('fixed_frame_tf2_broadcaster')
        self.tf_broadcaster = TransformBroadcaster(self,10)
        self.timer = self.create_timer(0.01, self.broadcast_timer_callback)
        # self.get_logger().info("Init finished")

   def broadcast_timer_callback(self):
        # self.get_logger().info('Starting callback')
        t = TransformStamped()

        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'camera_locobot_link'
        t.child_frame_id = 'camera_fixed'
        t.transform.translation.x = 0.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.0
        t.transform.rotation.x = -0.5
        t.transform.rotation.y = 0.5
        t.transform.rotation.z = -0.5
        t.transform.rotation.w = 0.5

        self.tf_broadcaster.sendTransform(t)
        # self.get_logger().info('Transform sent')


def main(args=None):
    rclpy.init(args=args)
    node = FixedFrameBroadcaster()
    rclpy.spin(node)

    rclpy.shutdown()

if __name__ == "__main__":
    main()