#!/usr/bin/env python3

from geometry_msgs.msg import Pose, Point, PoseStamped
from nav_msgs.msg import Path
from nav_msgs.msg import Odometry
from std_msgs.msg import Float32
from rclpy.node import Node
import rclpy
import random
import math

class GraphNode:
    def __init__(self, position, parent=None):
        self.position = position
        self.parent = parent

class RRTStarNode(Node):
    def __init__(self):
        super().__init__('rrt_star_node')
        self.start = None
        self.goal = None
        self.step_size = 0.5
        self.max_iter = 500
        self.min_dist_to_goal = 0.1
        self.tree = []
        self.path = Path()

        self.odom_subscriber = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.goal_subscriber = self.create_subscription(PoseStamped, '/goal_point', self.goal_callback, 10)
        self.path_publisher = self.create_publisher(Path, 'rrt_star_path', 10)
        self.timer = self.create_timer(0.1, self.compute_path)

    def odom_callback(self, msg):
        # self.start = GraphNode(msg.pose.pose.position)
        self.start = msg.pose.pose.position

    def goal_callback(self, msg):
        # self.goal = GraphNode(msg)
        self.goal = msg.pose.position
    def compute_path(self):
        # self.get_logger().info(self.start)
        # self.get_logger().info(self.goal)
        if not self.start or not self.goal:
            return
        self.get_logger().info("Actually computing path (yay!)")
        self.tree = [self.start]

        for _ in range(self.max_iter):
            rand_point = Point()
            if random.random() < 0.5:
                rand_point.x = random.uniform(0, 10)
                rand_point.y = random.uniform(0, 10)
            else:
                rand_point.x = self.goal.position.x
                rand_point.y = self.goal.position.y

            nearest_node = self.nearest_node(rand_point)
            new_node = self.steer(nearest_node, rand_point)

            if self.obstacle_free(nearest_node.position, new_node):
                near_nodes = self.near(new_node)
                new_node = self.choose_parent(new_node, near_nodes)
                self.tree.append(new_node)
                self.rewire(new_node, near_nodes)

                if self.distance(new_node.position, self.goal.position) <= self.min_dist_to_goal:
                    if self.obstacle_free(new_node.position, self.goal.position):
                        self.path = self.construct_path(new_node)
                        self.path_publisher.publish(self.path)
                        return

    def nearest_node(self, point):
        min_dist = float('inf')
        nearest = None
        for node in self.tree:
            dist = self.distance(node.position, point)
            if dist < min_dist:
                min_dist = dist
                nearest = node
        return nearest

    def steer(self, from_node, to_point):
        if self.distance(from_node.position, to_point) < self.step_size:
            return GraphNode(to_point, from_node)
        else:
            theta = math.atan2(to_point.y - from_node.position.y, to_point.x - from_node.position.x)
            return GraphNode(Point(from_node.position.x + self.step_size * math.cos(theta),
                              from_node.position.y + self.step_size * math.sin(theta), 0), from_node)

    def obstacle_free(self, from_position, to_point):
        # Check if the path between from_node and to_node is obstacle-free
        return True  # Placeholder, you need to implement this

    def near(self, new_node):
        # Find nodes in the tree that are within a certain radius of new_node
        return []  # Placeholder, you need to implement this

    def choose_parent(self, new_node, near_nodes):
        # Choose the best parent for new_node among the near_nodes
        return new_node  # Placeholder, you need to implement this

    def rewire(self, new_node, near_nodes):
        # Rewire the tree to improve the paths
        pass  # Placeholder, you need to implement this

    def distance(self, point1, point2):
        return math.sqrt((point1.x - point2.x) ** 2 + (point1.y - point2.y) ** 2)

    def construct_path(self, goal_node):
        path = Path()
        path.header.frame_id = "map"
        path.poses = []
        while goal_node:
            pose = PoseStamped()
            pose.pose.position.x = goal_node.position.x
            pose.pose.position.y = goal_node.position.y
            path.poses.insert(0, pose)
            goal_node = goal_node.parent
        return path

def main(args=None):
    rclpy.init(args=args)
    node = RRTStarNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
