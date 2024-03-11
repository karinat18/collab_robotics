#!/usr/bin/env python3

import rosbag2_py
from rosbags.rosbag2 import Reader
from rosbags.serde import deserialize_cdr
import numpy as np
import matplotlib.pyplot as plt

def read_bag(dir, topic):
    duration = 30.0  #sec
    t_init = 0.0
    with Reader(dir) as ros2_reader:
        ros2_conns = [x for x in ros2_reader.connections]
        ros2_messages = ros2_reader.messages(connections=ros2_conns)
        t = []
        x = []
        y = []
        for m, msg in enumerate(ros2_messages):
            (connection, timestamp, rawdata) = msg
            if (connection.topic == topic):
                data = deserialize_cdr(rawdata, connection.msgtype)
                if m == 0:
                    t_init = timestamp
                    # print(t_init)
                time = (timestamp - t_init)*1e-9
                if (time <= duration):
                    t.append(time)
                    x.append(data.pose.pose.position.x)
                    y.append(data.pose.pose.position.y)
    return t,x,y


def main():
    topic = '/odom'
    dir1 = 'rosbag2_k1'
    dir2 = 'rosbag2_k2'
    dir3 = 'rosbag2_k.5'

    t1, x1, y1 = read_bag(dir1, topic)
    t2, x2, y2 = read_bag(dir2, topic)
    t3, x3, y3 = read_bag(dir3, topic)

    t = np.array(t1)
    xref = 0.5*np.cos(t*np.pi/5)
    yref = 0.5*np.sin(t*np.pi/5)

    plt.figure(1)
    plt.subplot(211)
    plt.plot(t1, xref, label = "reference") 
    plt.plot(t3, x3, label = "$K_{p}=0.5$")
    plt.plot(t1, x1, label = "$K_{p}=1$") 
    plt.plot(t2, x2, label = "$K_{p}=2$")
    plt.xlabel("time")
    plt.ylabel("x position")
    plt.legend(loc='lower right')

    plt.subplot(212)
    plt.plot(t1, yref, label = "reference") 
    plt.plot(t3, y3, label = "$K_{p}=0.5$")
    plt.plot(t1, y1, label = "$K_{p}=1$") 
    plt.plot(t2, y2, label = "$K_{p}=2$") 
    plt.xlabel("time")
    plt.ylabel("y position")
    plt.legend(loc='lower right')

    plt.show()

if __name__ == '__main__':
    #this is where the script begins, calls the main function
    main()

        