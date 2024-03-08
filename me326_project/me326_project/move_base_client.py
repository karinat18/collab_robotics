#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from me326_project.action import MoveBase
from geometry_msgs.msg import PoseStamped
from rclpy.action import ActionClient


class MoveBaseClient(Node):

    def __init__(self):
        super().__init__('movebase_client')
        self._action_client = ActionClient(self, MoveBase,'movebase')
        self._goal_pose_subscription = self.create_subscription(
            PoseStamped,
            '/goal_pose',
            self.goal_pose_callback,
            10
        )

    def goal_pose_callback(self, msg):
        self.get_logger().info('Goal Received!')
        goal_msg = MoveBase.Goal()
        goal_msg.target_pose = msg.pose
        self.send_goal(goal_msg)

    def send_goal(self, goal_msg):
        self.get_logger().info('Sending goal...')
        self._action_client.wait_for_server()
        self._action_client.send_goal_async(goal_msg)
        self.get_logger().info('Goal Sent!')

def main(args=None):
    rclpy.init(args=args)
    movebase_client = MoveBaseClient()
    rclpy.spin(movebase_client)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
