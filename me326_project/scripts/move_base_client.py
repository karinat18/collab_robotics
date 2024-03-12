#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from locobot_interfaces.action import MoveBase
from geometry_msgs.msg import PoseStamped
from rclpy.action import ActionClient
import tf2_ros
import tf2_geometry_msgs

from geometry_msgs.msg import Quaternion
import math

from locobot_interfaces.srv import SetPose

class MoveBaseClient(Node):

    def __init__(self):
        super().__init__('movebase_client')
        self._action_client = ActionClient(self, MoveBase, 'movebase')
        # self._goal_pose_subscription = self.create_subscription(
        #     PoseStamped,
        #     '/goal_pose',
        #     self.goal_pose_callback,
        #     10
        # )

        self._set_pose_service = self.create_service(
            SetPose,
            'set_goal_pose',
            self.set_goal_pose_callback
        )

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

    
    def set_goal_pose_callback(self, request, response):
        # Process the incoming request as you would have processed the message in the subscription callback
        self.process_goal_pose(request.pose)
        response.success = True  # Assuming your service response has a success field
        return response


    def process_goal_pose(self, msg):

        def quaternion_to_euler(q):
            """
            Convert a quaternion into euler angles (roll, pitch, yaw)
            roll is rotation around x in radians (counterclockwise)
            pitch is rotation around y in radians (counterclockwise)
            yaw is rotation around z in radians (counterclockwise)
            """
            
            t3 = +2.0 * (q.w * q.z + q.x * q.y)
            t4 = +1.0 - 2.0 * (q.y * q.y + q.z * q.z)
            yaw = math.atan2(t3, t4)
            
            return  yaw

        def adjust_pose(pose, distance):
            """
            Adjusts the pose so the robot stops 'distance' meters behind the target pose.
            """
            # Convert quaternion to euler to get yaw
            yaw = quaternion_to_euler(pose.orientation)
            
            # Calculate backward offset
            dx = distance * math.cos(yaw + math.pi)
            dy = distance * math.sin(yaw + math.pi)
            
            # Adjust position
            pose.position.x += dx
            pose.position.y += dy
            
            return pose

        self.get_logger().info('Goal Received!')
        # self.get_logger().info(msg.pose.position.x,)
        # Transform the pose to the locobot/base_link frame
        try:
            # Ensure the transform is available
            trans = self.tf_buffer.lookup_transform(
                'locobot/base_link',  # target frame
                msg.header.frame_id,  # source frame
                rclpy.time.Time(),  # get the latest available
                rclpy.duration.Duration(seconds=1.0)  # timeout
            )
            transformed_pose = tf2_geometry_msgs.do_transform_pose(msg.pose, trans)

            adjusted_pose = adjust_pose(transformed_pose, 0.1)

            # Set the transformed pose as the goal
            goal_msg = MoveBase.Goal()
            goal_msg.target_pose = adjusted_pose
            goal_msg.control_base_angle_bool = True 
            self.send_goal(goal_msg)
        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
            self.get_logger().error('Failed to transform pose: {0}'.format(str(e)))

    def send_goal(self, goal_msg):
        self.get_logger().info('Sending goal...')
        self._action_client.wait_for_server()
        self._action_client.send_goal_async(goal_msg)
        self.get_logger().info('Goal Sent!')

def main(args=None):
    rclpy.init(args=args)
    movebase_client = MoveBaseClient()
    rclpy.spin(movebase_client)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
