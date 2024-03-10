#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import os
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    show_lidar = LaunchConfiguration('show_lidar')
    use_trajectory_controllers = LaunchConfiguration('use_trajectory_controllers')
    robot_model = LaunchConfiguration('robot_model')
    models_path = os.path.expanduser('~/.gazebo/models')
    apriltag_ros_share_dir = get_package_share_directory('apriltag_ros')

    return LaunchDescription(
        [
            DeclareLaunchArgument("show_lidar", default_value="true"),
            DeclareLaunchArgument("use_trajectory_controllers", default_value="true"),
            DeclareLaunchArgument("robot_model", default_value="locobot_wx250s"),
            
            IncludeLaunchDescription(
                PathJoinSubstitution(
                    [FindPackageShare("interbotix_xslocobot_sim"), "launch", "xslocobot_gz_classic.launch.py"]
                ),
                launch_arguments={
                    "show_lidar": show_lidar,
                    "use_trajectory_controllers": use_trajectory_controllers,
                    "robot_model": robot_model,
                }.items(),
            ),

            Node(
                executable="move_locobot_base_action_server.py",
                package="me326_project",
                parameters=[
                    {"respawn": "true"},
                ],
            ),

            Node(
                executable="move_base_client.py",
                package="me326_project",
                parameters=[
                    {"respawn": "true"},
                ],
            ),


            Node(
                executable="camera_frame_broadcaster.py",
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

            Node(
            package='apriltag_ros',  # Name of the package where the node is implemented
            executable='apriltag_node',  # Corrected name of the executable to run
            name='apriltag',  # Name of the node
            #namespace='apriltag',  # Namespace of the node
            remappings=[
                ('image_rect', '/locobot/camera_frame_sensor/image_raw'),
                ('camera_info', '/locobot/camera_frame_sensor/camera_info'),
            ],
            parameters=[
                os.path.join(apriltag_ros_share_dir, 'cfg', 'tags_36h11.yaml'),  # Parameter file
            ],
            #arguments=['--ros-args', '--log-level', 'info'],  # Extra arguments
            ),


            

            # Node(
            #     executable="record_rosbag.py",
            #     package="me326_locobot_example",
            #     parameters=[
            #         {"respawn": "true"},
            #     ],
            # ),

            # Node(
            #     package='rviz2',
            #     executable='rviz2',
            #     name='rviz2',
            #     arguments=[
            #         '-d', 
            #         PathJoinSubstitution([
            #             FindPackageShare("me326_locobot_example"), "rviz", "rviz_example_env.rviz"]
            #         )
            #     ],
            # ),
        ]
    )