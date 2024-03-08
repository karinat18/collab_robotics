// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice

#ifndef LA_MSGS__SRV__DETAIL__PTPS__STRUCT_HPP_
#define LA_MSGS__SRV__DETAIL__PTPS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__la_msgs__srv__Ptps_Request __attribute__((deprecated))
#else
# define DEPRECATED__la_msgs__srv__Ptps_Request __declspec(deprecated)
#endif

namespace la_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ptps_Request_
{
  using Type = Ptps_Request_<ContainerAllocator>;

  explicit Ptps_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_frame = "";
    }
  }

  explicit Ptps_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desired_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_frame = "";
    }
  }

  // field types and members
  using _desired_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _desired_frame_type desired_frame;

  // setters for named parameter idiom
  Type & set__desired_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->desired_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    la_msgs::srv::Ptps_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const la_msgs::srv::Ptps_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<la_msgs::srv::Ptps_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<la_msgs::srv::Ptps_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      la_msgs::srv::Ptps_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<la_msgs::srv::Ptps_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      la_msgs::srv::Ptps_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<la_msgs::srv::Ptps_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<la_msgs::srv::Ptps_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<la_msgs::srv::Ptps_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__la_msgs__srv__Ptps_Request
    std::shared_ptr<la_msgs::srv::Ptps_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__la_msgs__srv__Ptps_Request
    std::shared_ptr<la_msgs::srv::Ptps_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ptps_Request_ & other) const
  {
    if (this->desired_frame != other.desired_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ptps_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ptps_Request_

// alias to use template instance with default allocator
using Ptps_Request =
  la_msgs::srv::Ptps_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace la_msgs


// Include directives for member types
// Member 'red_points'
// Member 'blue_points'
// Member 'yellow_points'
// Member 'green_points'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__la_msgs__srv__Ptps_Response __attribute__((deprecated))
#else
# define DEPRECATED__la_msgs__srv__Ptps_Response __declspec(deprecated)
#endif

namespace la_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ptps_Response_
{
  using Type = Ptps_Response_<ContainerAllocator>;

  explicit Ptps_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_present = false;
      this->blue_present = false;
      this->yellow_present = false;
      this->green_present = false;
    }
  }

  explicit Ptps_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_present = false;
      this->blue_present = false;
      this->yellow_present = false;
      this->green_present = false;
    }
  }

  // field types and members
  using _red_present_type =
    bool;
  _red_present_type red_present;
  using _blue_present_type =
    bool;
  _blue_present_type blue_present;
  using _yellow_present_type =
    bool;
  _yellow_present_type yellow_present;
  using _green_present_type =
    bool;
  _green_present_type green_present;
  using _red_points_type =
    std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>>;
  _red_points_type red_points;
  using _blue_points_type =
    std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>>;
  _blue_points_type blue_points;
  using _yellow_points_type =
    std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>>;
  _yellow_points_type yellow_points;
  using _green_points_type =
    std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>>;
  _green_points_type green_points;

  // setters for named parameter idiom
  Type & set__red_present(
    const bool & _arg)
  {
    this->red_present = _arg;
    return *this;
  }
  Type & set__blue_present(
    const bool & _arg)
  {
    this->blue_present = _arg;
    return *this;
  }
  Type & set__yellow_present(
    const bool & _arg)
  {
    this->yellow_present = _arg;
    return *this;
  }
  Type & set__green_present(
    const bool & _arg)
  {
    this->green_present = _arg;
    return *this;
  }
  Type & set__red_points(
    const std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>> & _arg)
  {
    this->red_points = _arg;
    return *this;
  }
  Type & set__blue_points(
    const std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>> & _arg)
  {
    this->blue_points = _arg;
    return *this;
  }
  Type & set__yellow_points(
    const std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>> & _arg)
  {
    this->yellow_points = _arg;
    return *this;
  }
  Type & set__green_points(
    const std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>> & _arg)
  {
    this->green_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    la_msgs::srv::Ptps_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const la_msgs::srv::Ptps_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<la_msgs::srv::Ptps_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<la_msgs::srv::Ptps_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      la_msgs::srv::Ptps_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<la_msgs::srv::Ptps_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      la_msgs::srv::Ptps_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<la_msgs::srv::Ptps_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<la_msgs::srv::Ptps_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<la_msgs::srv::Ptps_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__la_msgs__srv__Ptps_Response
    std::shared_ptr<la_msgs::srv::Ptps_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__la_msgs__srv__Ptps_Response
    std::shared_ptr<la_msgs::srv::Ptps_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ptps_Response_ & other) const
  {
    if (this->red_present != other.red_present) {
      return false;
    }
    if (this->blue_present != other.blue_present) {
      return false;
    }
    if (this->yellow_present != other.yellow_present) {
      return false;
    }
    if (this->green_present != other.green_present) {
      return false;
    }
    if (this->red_points != other.red_points) {
      return false;
    }
    if (this->blue_points != other.blue_points) {
      return false;
    }
    if (this->yellow_points != other.yellow_points) {
      return false;
    }
    if (this->green_points != other.green_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ptps_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ptps_Response_

// alias to use template instance with default allocator
using Ptps_Response =
  la_msgs::srv::Ptps_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace la_msgs

namespace la_msgs
{

namespace srv
{

struct Ptps
{
  using Request = la_msgs::srv::Ptps_Request;
  using Response = la_msgs::srv::Ptps_Response;
};

}  // namespace srv

}  // namespace la_msgs

#endif  // LA_MSGS__SRV__DETAIL__PTPS__STRUCT_HPP_
