#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import os


def generate_launch_description():
    # Path to ~/.gazebo/models
    models_path = os.path.expanduser('~/.gazebo/models')
    
    return LaunchDescription([
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'apriltag_0', 
                '-file', f'{models_path}/Apriltag36_11_00000/model.sdf',
                '-x', '1.0', 
                '-y', '0.0', 
                '-z', '0.0',
                '-R', '0.0',
                '-P', '0.0',
                '-Y', '0.0'],
            output='screen'
        )
    ])