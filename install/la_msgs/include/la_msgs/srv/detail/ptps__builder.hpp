// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice

#ifndef LA_MSGS__SRV__DETAIL__PTPS__BUILDER_HPP_
#define LA_MSGS__SRV__DETAIL__PTPS__BUILDER_HPP_

#include "la_msgs/srv/detail/ptps__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace la_msgs
{

namespace srv
{

namespace builder
{

class Init_Ptps_Request_desired_frame
{
public:
  Init_Ptps_Request_desired_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::la_msgs::srv::Ptps_Request desired_frame(::la_msgs::srv::Ptps_Request::_desired_frame_type arg)
  {
    msg_.desired_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::la_msgs::srv::Ptps_Request>()
{
  return la_msgs::srv::builder::Init_Ptps_Request_desired_frame();
}

}  // namespace la_msgs


namespace la_msgs
{

namespace srv
{

namespace builder
{

class Init_Ptps_Response_green_points
{
public:
  explicit Init_Ptps_Response_green_points(::la_msgs::srv::Ptps_Response & msg)
  : msg_(msg)
  {}
  ::la_msgs::srv::Ptps_Response green_points(::la_msgs::srv::Ptps_Response::_green_points_type arg)
  {
    msg_.green_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Response msg_;
};

class Init_Ptps_Response_yellow_points
{
public:
  explicit Init_Ptps_Response_yellow_points(::la_msgs::srv::Ptps_Response & msg)
  : msg_(msg)
  {}
  Init_Ptps_Response_green_points yellow_points(::la_msgs::srv::Ptps_Response::_yellow_points_type arg)
  {
    msg_.yellow_points = std::move(arg);
    return Init_Ptps_Response_green_points(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Response msg_;
};

class Init_Ptps_Response_blue_points
{
public:
  explicit Init_Ptps_Response_blue_points(::la_msgs::srv::Ptps_Response & msg)
  : msg_(msg)
  {}
  Init_Ptps_Response_yellow_points blue_points(::la_msgs::srv::Ptps_Response::_blue_points_type arg)
  {
    msg_.blue_points = std::move(arg);
    return Init_Ptps_Response_yellow_points(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Response msg_;
};

class Init_Ptps_Response_red_points
{
public:
  explicit Init_Ptps_Response_red_points(::la_msgs::srv::Ptps_Response & msg)
  : msg_(msg)
  {}
  Init_Ptps_Response_blue_points red_points(::la_msgs::srv::Ptps_Response::_red_points_type arg)
  {
    msg_.red_points = std::move(arg);
    return Init_Ptps_Response_blue_points(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Response msg_;
};

class Init_Ptps_Response_green_present
{
public:
  explicit Init_Ptps_Response_green_present(::la_msgs::srv::Ptps_Response & msg)
  : msg_(msg)
  {}
  Init_Ptps_Response_red_points green_present(::la_msgs::srv::Ptps_Response::_green_present_type arg)
  {
    msg_.green_present = std::move(arg);
    return Init_Ptps_Response_red_points(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Response msg_;
};

class Init_Ptps_Response_yellow_present
{
public:
  explicit Init_Ptps_Response_yellow_present(::la_msgs::srv::Ptps_Response & msg)
  : msg_(msg)
  {}
  Init_Ptps_Response_green_present yellow_present(::la_msgs::srv::Ptps_Response::_yellow_present_type arg)
  {
    msg_.yellow_present = std::move(arg);
    return Init_Ptps_Response_green_present(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Response msg_;
};

class Init_Ptps_Response_blue_present
{
public:
  explicit Init_Ptps_Response_blue_present(::la_msgs::srv::Ptps_Response & msg)
  : msg_(msg)
  {}
  Init_Ptps_Response_yellow_present blue_present(::la_msgs::srv::Ptps_Response::_blue_present_type arg)
  {
    msg_.blue_present = std::move(arg);
    return Init_Ptps_Response_yellow_present(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Response msg_;
};

class Init_Ptps_Response_red_present
{
public:
  Init_Ptps_Response_red_present()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ptps_Response_blue_present red_present(::la_msgs::srv::Ptps_Response::_red_present_type arg)
  {
    msg_.red_present = std::move(arg);
    return Init_Ptps_Response_blue_present(msg_);
  }

private:
  ::la_msgs::srv::Ptps_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::la_msgs::srv::Ptps_Response>()
{
  return la_msgs::srv::builder::Init_Ptps_Response_red_present();
}

}  // namespace la_msgs

#endif  // LA_MSGS__SRV__DETAIL__PTPS__BUILDER_HPP_
