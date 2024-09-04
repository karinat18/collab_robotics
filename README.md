# Collaborative Robotics for Resource Gathering

## Project Overview

This project initially aimed to have two robots collaborate on a resource gathering task. Each robot would start with a configuration specifying the number and color of blocks needed, collect blocks from a shared resource area, and build piles designated by AprilTags. Due to challenges with converting to ROS 2, the scope was reduced to a single robot simulation focusing on block collection and pile-building.

## Problem Statement

- **Initial Goal**: Two robots collaborate to gather resources, build individual piles, and mimic each other’s piles.
- **Reduced Scope**: A single robot gathers blocks to build a pile based on a given configuration, implemented in simulation using ROS 2.

![Screenshot_3](https://github.com/user-attachments/assets/a06b66d7-edcb-49b5-9b4e-8fbedd26262f)


## Approach

### 1. Navigation Stack
- Relied on AprilTags for localization; used PI control for navigation.
- No obstacles required complex path planning, and SLAM was not needed due to accurate odometry data in simulation.

### 2. Block Detection Stack
- Implemented as a C++ action server returning block positions, regardless of color.
- A client filters block positions based on color and coordinates navigation and arm movement.

### 3. Arm Movement Stack
- Utilized MoveIt for arm trajectory planning.
- An action server in C++ was used to control arm movements due to ROS 2 Galactic’s limitations with MoveIt in Python.

### 4. State Machine
- The state machine was implemented using YASMIN, coordinating node communication and task transitions.

![unnamed](https://github.com/user-attachments/assets/02590cab-6394-4e2e-a89d-2363cbc6575d)


## Code Architecture

YASMIN was used to implement a state machine with service and action calls to manage navigation, block detection, and arm movement. Key services and action servers include:

| Name          | Request                       | Result                                |
|---------------|-------------------------------|---------------------------------------|
| **Services**  |                               |                                       |
| GetBasePose   | geometry_msgs/PoseStamped     | Pose in Locobot base frame            |
| GetBlockPos   | string color, string frame    | Pose of a specified color block       |
| AttachDetach  | string command                | bool success                          |
| **Action Servers** |                         |                                       |
| MoveBase      | geometry_msgs/Pose            | bool done                             |
| MoveArm       | float32[] pose                | bool success                          |
| MoveGripper   | string command                | bool success                          |
| TiltCamera    | float64 theta                 | bool success                          |
| SpinBase      | float64 theta                 | bool success                          |

### Navigation, Vision, and Arm Movement

- **Navigation**: Controlled via PI control; localization with AprilTags.
- **Vision**: Service-based detection of colored blocks; positions filtered and returned for navigation.
- **Arm Movement**: MoveIt used for trajectory planning; challenges with grasping simulated with a Gazebo plugin.

![Screenshot_4](https://github.com/user-attachments/assets/26b9da59-ebae-4fe8-b2ea-71b3864178dc)


## Results

- **Video Demonstration**: [Watch on YouTube](https://youtu.be/qUpccgG2eTA)

The video demonstrates the robot picking up blocks in sequence, navigating using AprilTags, and dropping blocks at designated locations. The system faced challenges with control gains and grasping simulations.

## Future Steps

- **Improve Simulation**: Tune PI control gains and improve arm movement to accurately grasp blocks.
- **Hardware Implementation**: Transition the algorithm to physical robots, incorporating robust failure handling.
- **Collaborative Strategy**: Develop methods for robots to work together, checking and mimicking piles iteratively.
