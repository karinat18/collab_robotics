#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from std_msgs.msg import Float64MultiArray
from locobot_interfaces.action import TiltCamera 

class LocobotCameraTilt(Node):
    def __init__(self):
        super().__init__('locobot_camera_tilt')

        self.get_logger().info("Tilt Camera Action Server started")
        self.tilt_publisher = self.create_publisher(Float64MultiArray, '/locobot/camera_controller/commands', 10)

        # Action Server
        self._action_server = ActionServer(
            self,
            TiltCamera,
            'tiltcamera',
            self.execute_callback
        )

    def execute_callback(self, goal_handle):
        goal = goal_handle.request

        tilt_msg = Float64MultiArray()
        tilt_msg.data = [0.0, goal.angle]
        self.tilt_publisher.publish(tilt_msg)

        goal_handle.succeed()        
        return TiltCamera.Result(success=True)


def main(args=None):
    rclpy.init(args=args)
    camera_tilt = LocobotCameraTilt()
    rclpy.spin(camera_tilt)
    camera_tilt.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()