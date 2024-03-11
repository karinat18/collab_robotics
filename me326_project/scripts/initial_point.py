#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped

class PublishGoalNode(Node):
    def __init__(self):
        super().__init__('publish_goal')
        self.publisher_ = self.create_publisher(PoseStamped, '/goal_point', 10)
        self.timer = self.create_timer(1, self.publish_goal)

    def publish_goal(self):
        goal_msg = PoseStamped()
        goal_msg.pose.position.x = 1.0
        goal_msg.pose.position.y = 2.0
        goal_msg.pose.position.z = 0.0
        goal_msg.pose.orientation.x = 0.0
        goal_msg.pose.orientation.y = 0.0
        goal_msg.pose.orientation.z = 0.0
        goal_msg.pose.orientation.w = 1.0
        self.publisher_.publish(goal_msg)
        self.get_logger().info('Published goal point.')

def main(args=None):
    rclpy.init(args=args)
    publish_goal_node = PublishGoalNode()
    rclpy.spin_once(publish_goal_node)
    publish_goal_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
