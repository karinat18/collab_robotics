#!/usr/bin/env python3

import sys
import rclpy
from gazebo_ros_link_attacher.srv import Attach
from locobot_interfaces.srv import AttachDetach
import numpy as np
from gazebo_msgs.msg import ModelStates
from gazebo_msgs.msg import LinkStates
from geometry_msgs.msg import Pose
import rclpy
from rclpy.node import Node
from gazebo_msgs.srv import GetModelList


class NearestBlockGrabber(Node):
    def __init__(self):
        super().__init__('nearest_model_service')
        self.model_states_subscriber = self.create_subscription(
            ModelStates,
            '/gazebo/model_states',
            self.model_states_callback,
            10)
        self.link_states_subscriber = self.create_subscription(
            LinkStates,
            '/gazebo/link_states',
            self.link_states_callback,
            10)
        self.model_states_client = self.create_client(GetModelList, '/get_model_list')
        self.model_states = ModelStates()
        self.link_states = LinkStates()
        self.create_service(AttachDetach, 'attach_detach_service', self.attach_detach_callback)
        self.attach = self.create_client(Attach, '/attach')
        self.detach = self.create_client(Attach, '/detach')
        self.attached_block = None

    def model_states_callback(self, msg):
        self.model_states = msg
        # self.get_logger().info('Model States received')

    def link_states_callback(self, msg):
        self.link_states = msg
        # self.get_logger().info('Link States Received')

    def calculate_distance(self, pose1: Pose, pose2: Pose) -> float:
        return np.sqrt((pose1.position.x - pose2.position.x) ** 2 +
                       (pose1.position.y - pose2.position.y) ** 2 +
                       (pose1.position.z - pose2.position.z) ** 2)
    
    def attach_detach_callback(self, request, response):
        self.get_logger().info('Starting Attach/Detach Callback')
        for name, pose in zip(self.link_states.name, self.link_states.pose):
            if name == 'robot_description::locobot/right_finger_link':
                gripper_pose = pose
        self.get_logger().info('Finished finding gripper pose!')
        min_distance = float('inf')
        nearest_model_name = ""

        for name, pose in zip(self.model_states.name, self.model_states.pose):
            if name != 'robot_description' and name != 'ground_plane' and name != 'TrossenRoboticsOfficeBuilding' and not 'apriltag' in name:  # Replace 'gripper_model_name' with your gripper's model name
                distance = self.calculate_distance(gripper_pose, pose)
                if distance < min_distance:
                    min_distance = distance
                    nearest_model_name = name
        self.get_logger().info('Nearest model: ' + nearest_model_name)
        req = Attach.Request()
        req.model_name_1 = "robot_description"
        req.link_name_1 = 'robot_description::locobot/right_finger_link'
        req.model_name_2 = nearest_model_name
        req.link_name_2 = "my_box"  # Make sure this is the correct link name for the model

        if request.command == 'open':
            req.model_name_2 = self.attached_block
            future = self.detach.call_async(req)
            self.get_logger().info('Sent Detach!')
            self.attached_block = None
        elif request.command == 'close':
            future = self.attach.call_async(req)
            self.get_logger().info('Sent Attach')
            self.attached_block = req.model_name_2
        else:
            self.get_logger().info('Incorrect command sent')
            response.success = False
            return response

        # Wait for the service to complete
        future.add_done_callback(self.handle_service_response)
        response.success = True

        return response
    def handle_service_response(self, future):
        
        service_response = future.result()
        resp = service_response
        print(resp)
        
        
def main(args=None):
    rclpy.init(args=args)
    gripper = NearestBlockGrabber()
    rclpy.spin(gripper)
    rclpy.shutdown()

if __name__ == '__main__':
    main()