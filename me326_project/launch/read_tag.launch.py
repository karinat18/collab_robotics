#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Path to ~/.gazebo/models
    # models_path = os.path.expanduser('~/.gazebo/models')
    apriltag_ros_share_dir = get_package_share_directory('apriltag_ros')
    
    return LaunchDescription([
        Node(
            package='apriltag_ros',  # Name of the package where the node is implemented
            executable='apriltag_node',  # Corrected name of the executable to run
            name='apriltag',  # Name of the node
            namespace='apriltag',  # Namespace of the node
            remappings=[
                ('image_rect', '/locobot/camera_frame_sensor/image_raw'),
                ('camera_info', '/locobot/camera_frame_sensor/camera_info'),
            ],
            parameters=[
                os.path.join(apriltag_ros_share_dir, 'cfg', 'tags_36h11.yaml'),  # Parameter file
            ],
            arguments=['--ros-args', '--log-level', 'info'],  # Extra arguments
        )

    ])