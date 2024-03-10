#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    show_lidar = LaunchConfiguration('show_lidar')
    use_trajectory_controllers = LaunchConfiguration('use_trajectory_controllers')
    robot_model = LaunchConfiguration('robot_model')

    return LaunchDescription(
        [
            DeclareLaunchArgument("use_lidar", default_value="true"),
            DeclareLaunchArgument("robot_model", default_value="locobot_wx250s"),
            DeclareLaunchArgument("hardware_type", default_value="gz_classic"),
            
            IncludeLaunchDescription(
                PathJoinSubstitution(
                    [FindPackageShare("interbotix_xslocobot_moveit"), "launch", "xslocobot_moveit.launch.py"]
                ),
                launch_arguments={
                    "use_lidar": "true",
                    "robot_model": "locobot_wx250s",
                    "hardware_type": "gz_classic",
                }.items(),
            ),

            IncludeLaunchDescription(
                PathJoinSubstitution(
                    [FindPackageShare("me326_locobot_example"), "launch", "spawn_cube_prof.launch.py"]
                ),
            ),

            Node(
                executable="move_arm_action_server",
                package="me326_locobot_example",
                parameters=[
                    {"respawn": "true"},
                ],
            ),

            Node(
                executable="move_gripper_action_server.py",
                package="me326_locobot_example",
                parameters=[
                    {"respawn": "true"},
                ],
            ),

            Node(
                executable="move_locobot_base_action_server.py",
                package="me326_locobot_example",
                parameters=[
                    {"respawn": "true"},
                ],
            ),
        ]
    )