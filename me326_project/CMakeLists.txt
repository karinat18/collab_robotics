cmake_minimum_required(VERSION 3.8)
project(me326_project)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(rclpy REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(locobot_interfaces REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

find_package(action_msgs REQUIRED)

find_package(Eigen3 REQUIRED)
find_package(pcl_ros REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(image_geometry REQUIRED)
find_package(image_transport REQUIRED)
find_package(cv_bridge REQUIRED)

find_package(la_msgs REQUIRED)


install(PROGRAMS
    scripts/locobot1_example_motion.py
    scripts/locobot_example_motion.py
    scripts/locobot_motion_example.py
    scripts/matching_ptcld.py
    scripts/circle_motion_tracking.py
    scripts/record_rosbag.py
    scripts/locobot_moveitpy.py
    scripts/RRTstar.py
    scripts/go_to_point.py
    scripts/initial_point.py
    scripts/move_locobot_base_action_server.py
    scripts/move_base_client.py
    scripts/camera_frame_broadcaster.py
    scripts/move_gripper_action_server.py
    scripts/locobot_state_machine.py
    scripts/vision_client.py
    scripts/apriltag_global_frame.py
    scripts/tilt_camera_action_server.py
    scripts/spin_base_action_server.py
    scripts/get_base_pose.py
    scripts/block_attach_detach.py
    DESTINATION lib/${PROJECT_NAME}
)

add_executable(move_arm_action_server src/move_arm_action_server.cpp)
add_executable(visual_block_perception_srv src/visual_block_perception_srv.cpp)
ament_target_dependencies(visual_block_perception_srv rclcpp Eigen geometry_msgs tf2_eigen tf2_ros tf2 tf2_geometry_msgs OpenCV image_transport cv_bridge image_geometry visualization_msgs std_msgs la_msgs)

target_include_directories(move_arm_action_server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(move_arm_action_server PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  move_arm_action_server
  "locobot_interfaces"
  "moveit_ros_planning_interface"
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components"
  "tf2_geometry_msgs"
  "tf2"
)

install(TARGETS
  move_arm_action_server
  visual_block_perception_srv
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch rviz model
        DESTINATION share/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
ament_package()
