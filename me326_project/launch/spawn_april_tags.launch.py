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
    models_path = os.path.expanduser('~/.gazebo/models')
    apriltag_ros_share_dir = get_package_share_directory('apriltag_ros')
    
    return LaunchDescription([
        Node(
            executable="apriltag_global_frame.py",
            package="me326_project",
            parameters=[
                {"respawn": "true"},
                {"use_sim_time": True}
            ],
        ),

        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'apriltag_0', 
                '-file', f'{models_path}/Apriltag36_11_00000/model.sdf',
                '-x', '1.0', 
                '-y', '0.1', 
                '-z', '0.0',
                '-R', '0.0',
                '-P', '0.0',
                '-Y', '0.0'],
            output='screen'
        ),

        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'apriltag_1', 
                '-file', f'{models_path}/Apriltag36_11_00001/model.sdf',
                '-x', '-1.0', 
                '-y', '0.1', 
                '-z', '0.0',
                '-R', '0.0',
                '-P', '0.0',
                '-Y', '0.0'],
            output='screen'
        ),

        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'apriltag_2', 
                '-file', f'{models_path}/Apriltag36_11_00002/model.sdf',
                '-x', '0.5', 
                '-y', '1.0', 
                '-z', '0.0',
                '-R', '0.0',
                '-P', '0.0',
                '-Y', '0.0'],
            output='screen'
        ),

        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'apriltag_3', 
                '-file', f'{models_path}/Apriltag36_11_00003/model.sdf',
                '-x', '-0.5', 
                '-y', '1.0', 
                '-z', '0.0',
                '-R', '0.0',
                '-P', '0.0',
                '-Y', '0.0'],
            output='screen'
        ),
    ])