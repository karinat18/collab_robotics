#!/usr/bin/env python3

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():

    blue_urdf = os.path.join(get_package_share_directory('me326_project'), 'model/blue_cube.urdf')
    red_urdf = os.path.join(get_package_share_directory('me326_project'), 'model/red_cube.urdf')
    green_urdf = os.path.join(get_package_share_directory('me326_project'), 'model/green_cube.urdf')
    yellow_urdf = os.path.join(get_package_share_directory('me326_project'), 'model/yellow_cube.urdf')

    blue_cube_x = '0.5'
    blue_cube_y = '0.0'
    blue_cube_z = '0.1'
    blue_cube_R = '0.0'
    blue_cube_P = '0.0'
    blue_cube_Y = '0.0'

    red_cube_x = '0.5'
    red_cube_y = '0.3'
    red_cube_z = '0.1'
    red_cube_R = '0.0'
    red_cube_P = '0.0'
    red_cube_Y = '0.0'

    green_cube_x = '0.5'
    green_cube_y = '-0.3'
    green_cube_z = '0.1'
    green_cube_R = '0.0'
    green_cube_P = '0.0'
    green_cube_Y = '0.0'

    yellow_cube_x = '0.8'
    yellow_cube_y = '0.0'
    yellow_cube_z = '0.1'
    yellow_cube_R = '0.0'
    yellow_cube_P = '0.0'
    yellow_cube_Y = '0.0'


    return LaunchDescription([
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_blue_cube',
            output='screen',
            arguments=['-file', blue_urdf,
                        '-entity', 'blue_cube',
                        '-x', blue_cube_x,
                        '-y', blue_cube_y,
                        '-z', blue_cube_z,
                        '-R', blue_cube_R,
                        '-P', blue_cube_P,
                        '-Y', blue_cube_Y,],
        ),
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_red_cube',
            output='screen',
            arguments=['-file', red_urdf,
                        '-entity', 'red_cube',
                        '-x', red_cube_x,
                        '-y', red_cube_y,
                        '-z', red_cube_z,
                        '-R', red_cube_R,
                        '-P', red_cube_P,
                        '-Y', red_cube_Y,],
        ),
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_green_cube',
            output='screen',
            arguments=['-file', green_urdf,
                        '-entity', 'green_cube',
                        '-x', green_cube_x,
                        '-y', green_cube_y,
                        '-z', green_cube_z,
                        '-R', green_cube_R,
                        '-P', green_cube_P,
                        '-Y', green_cube_Y,],
        ),
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_yellow_cube',
            output='screen',
            arguments=['-file', yellow_urdf,
                        '-entity', 'yellow_cube',
                        '-x', yellow_cube_x,
                        '-y', yellow_cube_y,
                        '-z', yellow_cube_z,
                        '-R', yellow_cube_R,
                        '-P', yellow_cube_P,
                        '-Y', yellow_cube_Y,],
        )
    ])