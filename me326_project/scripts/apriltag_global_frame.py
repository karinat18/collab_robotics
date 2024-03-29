#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from tf2_ros import StaticTransformBroadcaster
from geometry_msgs.msg import TransformStamped
import tf2_ros
import tf2_geometry_msgs
from tf2_msgs.msg import TFMessage
import tf_transformations
import numpy as np

class AprilTagStaticTransformPublisher(Node):
    def __init__(self):
        super().__init__('april_tag_static_tf2_broadcaster')
        self._broadcaster = StaticTransformBroadcaster(self)
        self.detected = False
        self._goal_pose_subscription = self.create_subscription(
            TFMessage,
            '/tf',
            self.get_tag_pose,
            10
        )
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

    def get_tag_pose(self, msg):
        for trans in msg.transforms:
            # Check if this transform is the one we're interested in
            if trans.header.frame_id == 'camera_fixed':
                try:
                    # Attempt to transform to the 'locobot/base_link' frame
                    # self.get_logger().info('Starting try')
                    trans_base_link = self.transform_to_base_link(trans)
                    
                    transform_stamped_msg = TransformStamped()
                    transform_stamped_msg.header.stamp = self.get_clock().now().to_msg()
                    transform_stamped_msg.header.frame_id = 'locobot/base_link'
                    transform_stamped_msg.child_frame_id = trans.child_frame_id + '_global'
                    
                    
                    # Set the translation and rotation from the transformed pose
                    transform_stamped_msg.transform.translation = trans_base_link.transform.translation
                    transform_stamped_msg.transform.rotation = trans_base_link.transform.rotation

                    # Rotation by -90 degrees about z-axis
                    quaternion_rotate = tf_transformations.quaternion_from_euler(0, 0, np.pi / 2)

                    # Current rotation quaternion
                    quaternion_current = [
                        transform_stamped_msg.transform.rotation.x,
                        transform_stamped_msg.transform.rotation.y,
                        transform_stamped_msg.transform.rotation.z,
                        transform_stamped_msg.transform.rotation.w
                    ]

                    # Combine the rotations
                    quaternion_new = tf_transformations.quaternion_multiply(quaternion_rotate, quaternion_current)

                    # Assign the new rotation back to the transform
                    # transform_stamped_msg.transform.rotation.x = quaternion_new[0]
                    # transform_stamped_msg.transform.rotation.y = quaternion_new[1]
                    # transform_stamped_msg.transform.rotation.z = quaternion_new[2]
                    # transform_stamped_msg.transform.rotation.w = quaternion_new[3]
                    transform_stamped_msg.transform.rotation.x = 0.0
                    transform_stamped_msg.transform.rotation.y = 0.0
                    transform_stamped_msg.transform.rotation.z = 0.0
                    transform_stamped_msg.transform.rotation.w = 1.0


                    translation_current = [
                        transform_stamped_msg.transform.translation.x,
                        transform_stamped_msg.transform.translation.y,
                        transform_stamped_msg.transform.translation.z
                    ]

                    # Convert quaternion_rotate to a rotation matrix
                    rotation_matrix = tf_transformations.quaternion_matrix(quaternion_rotate)

                    # Apply the rotation matrix to the translation
                    translation_new = np.dot(rotation_matrix[:3, :3], translation_current)

                    # Update the translation
                    transform_stamped_msg.transform.translation.x = translation_new[0]
                    transform_stamped_msg.transform.translation.y = translation_new[1]
                    transform_stamped_msg.transform.translation.z = translation_new[2]

                    # self.get_logger().info('TransformStamped Created!')

                    # Broadcast the static transform
                    self._broadcaster.sendTransform(transform_stamped_msg)
                    # self.get_logger().info('Broadcast Transform!')
                    
                except Exception as e:
                    self.get_logger().error(f'Failed to process transform: {e}')
                    break  # Stop processing further if we found and processed our target


    def transform_to_base_link(self, transform):
        try:
            # Ensure the transform is available
            # self.get_logger().info({transform})
            trans = self.tf_buffer.lookup_transform(transform.child_frame_id, 'locobot/base_link', rclpy.time.Time(),  # get the latest available
                rclpy.duration.Duration(seconds=0.10) )
            # self.get_logger().info('Transform Successful!')
            
            return trans

            
        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
            self.get_logger().error('Failed to transform pose: {0}'.format(str(e)))

def main(args=None):
    rclpy.init(args=args)
    node = AprilTagStaticTransformPublisher()
    
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
