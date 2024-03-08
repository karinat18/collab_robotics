#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.serialization import serialize_message
from nav_msgs.msg import Odometry
import rosbag2_py
import os
from datetime import datetime

class SimpleBagRecorder(Node):
    def __init__(self):
        super().__init__('rosbag_recorder')
        self.save_dir = os.getcwd() + '/' + datetime.now().strftime("%Y%m%d_%I%M_%S")
        if not os.path.exists(self.save_dir):
            os.makedirs(self.save_dir)

        # Writer for recording data in rosbag
        self._writer = rosbag2_py.SequentialWriter()
        storage_options = rosbag2_py._storage.StorageOptions(uri = self.save_dir + '/my_bag',
                                                             storage_id='sqlite3')
        converter_options = rosbag2_py._storage.ConverterOptions('', '')
        self._writer.open(storage_options, converter_options)
        topic_info = rosbag2_py._storage.TopicMetadata(name='/odom',
                                                       type='nav_msgs/msg/Odometry',
                                                       serialization_format='cdr')
        self._writer.create_topic(topic_info)

        self.create_subscription(Odometry, '/odom', self.mobile_base_callback, 10) 


    def topic_callback(self, msg):
        self.writer.write(
            '/odom',
            serialize_message(msg),
            self.get_clock().now().nanoseconds)


def main(args=None):
    rclpy.init(args=args)
    sbr = SimpleBagRecorder()
    rclpy.spin(sbr)
    rclpy.shutdown()


if __name__ == '__main__':
    main()