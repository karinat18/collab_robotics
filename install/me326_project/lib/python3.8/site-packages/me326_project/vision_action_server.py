#!/usr/bin/env python3
'''
Written by: Joshua Lee, Date: 3/7/24


'''
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from me326_project import MoveBase

import geometry_msgs
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry
from visualization_msgs.msg import Marker

from std_msgs.msg import Float64MultiArray
from me326_project import Ptps

#odom from gazebo is "best effort", so this is needed for the subscriber
from rclpy.qos import qos_profile_sensor_data, QoSProfile 

import numpy as np

#we need this since we have an action server and subscriber together
from rclpy.executors import MultiThreadedExecutor

import time
# Just set up so far. Nothing crazy
# class Locobot_Vision(Node):
#     def __init__(self):
#         super().__init__('locobot vision')
#         self.colors = []
#         self.target_pose = None

#         # Create Subscriber to the colors that need to be found from the center pile
#         # THINK OF DATA STRUCTURE TO PASS IN THE BLOCK COLORS.
#         self.create_subscription(Odometry, "/odom", self.mobile_base_callback, 10) 
#         self.create_subscription(Image, "/locobot/camera_frame_sensor/image_raw", self.image_callback, 10)
#         # Create Publisher to send goal poses to 
#         self.target_pose_visual = self.create_publisher(Odometry, "/locobot/mobile_base/target_pose_visual", 10)
#         self.camera_tilt = self.create_publisher(Float64MultiArray, "/locobot/camera_controller/commands", 10)

#     def pub_closest_block(self):
#         pose = Odometry()
#         # stuff in between
#         self.target_pose_visual.publish(pose)

#     def image_callback(self, image):
#         """
#         This function is the callback function that analyzes images as they come to the camera
#         """
#         # with the image that we have, need to do the hsv mask so that the colors are visible. 
#         # use the robot pose too so that we have the right basis to go off of. 
#         return


#     def image_mask(self):
#         # subscribe to stuff, get the image and then find position. 

#         # if image can't be found, we need to change orientation
#         command = [0.0, 0.25]
#         self.camera_tilt.publish(command)
#         return
#     def find_blocks(self):
#         self.target_pose_visual.publish
#         return


# def main(args=None):
#     rclpy.init(args=args)
#     node = Locobot_Vision()
#     node.find_blocks()
#     rclpy.spin(node)

#     node.destroy_node()
#     rclpy.shutdown()


# if __name__ == '__main__':
#     #this is where the script begins, calls the main function
#     main()
