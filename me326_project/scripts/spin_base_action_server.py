#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.duration import Duration
from geometry_msgs.msg import Twist
from locobot_interfaces.action import SpinBase 

class LocobotSpinBase(Node):
    def __init__(self):
        super().__init__('locobot_spin_base')

        self.get_logger().info("Spin Base Action Server started")
        self.base_vel_publisher = self.create_publisher(Twist, '/locobot/diffdrive_controller/cmd_vel_unstamped', 1)

        # Action Server
        self._action_server = ActionServer(
            self,
            SpinBase,
            'spinbase',
            self.execute_callback
        )

    def execute_callback(self, goal_handle):
        goal = goal_handle.request
        start_time = self.get_clock().now()

        spin_msg = Twist()
        spin_msg.angular.z = 3.14159/3
        while True:
            self.base_vel_publisher.publish(spin_msg)
            elapsed_time = (self.get_clock().now().nanoseconds - start_time.nanoseconds)*1e-9
            if elapsed_time > 2*goal.theta*(3.14159/180)/(3.14159/3):
                self.get_logger().info("Elapsed Time: {0}".format(elapsed_time))
                self.base_vel_publisher.publish(Twist())
                goal_handle.succeed()
                return SpinBase.Result(success=True)
        


def main(args=None):
    rclpy.init(args=args)
    spin_base = LocobotSpinBase()
    rclpy.spin(spin_base)
    spin_base.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()