// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "la_msgs/srv/detail/ptps__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace la_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Ptps_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) la_msgs::srv::Ptps_Request(_init);
}

void Ptps_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<la_msgs::srv::Ptps_Request *>(message_memory);
  typed_message->~Ptps_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Ptps_Request_message_member_array[1] = {
  {
    "desired_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Request, desired_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Ptps_Request_message_members = {
  "la_msgs::srv",  // message namespace
  "Ptps_Request",  // message name
  1,  // number of fields
  sizeof(la_msgs::srv::Ptps_Request),
  Ptps_Request_message_member_array,  // message members
  Ptps_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Ptps_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Ptps_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Ptps_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace la_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<la_msgs::srv::Ptps_Request>()
{
  return &::la_msgs::srv::rosidl_typesupport_introspection_cpp::Ptps_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, la_msgs, srv, Ptps_Request)() {
  return &::la_msgs::srv::rosidl_typesupport_introspection_cpp::Ptps_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "la_msgs/srv/detail/ptps__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace la_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Ptps_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) la_msgs::srv::Ptps_Response(_init);
}

void Ptps_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<la_msgs::srv::Ptps_Response *>(message_memory);
  typed_message->~Ptps_Response();
}

size_t size_function__Ptps_Response__red_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Ptps_Response__red_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__Ptps_Response__red_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__Ptps_Response__red_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Ptps_Response__blue_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Ptps_Response__blue_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__Ptps_Response__blue_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__Ptps_Response__blue_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Ptps_Response__yellow_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Ptps_Response__yellow_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__Ptps_Response__yellow_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__Ptps_Response__yellow_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Ptps_Response__green_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Ptps_Response__green_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__Ptps_Response__green_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__Ptps_Response__green_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Ptps_Response_message_member_array[8] = {
  {
    "red_present",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Response, red_present),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "blue_present",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Response, blue_present),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellow_present",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Response, yellow_present),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "green_present",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Response, green_present),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "red_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PointStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Response, red_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Ptps_Response__red_points,  // size() function pointer
    get_const_function__Ptps_Response__red_points,  // get_const(index) function pointer
    get_function__Ptps_Response__red_points,  // get(index) function pointer
    resize_function__Ptps_Response__red_points  // resize(index) function pointer
  },
  {
    "blue_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PointStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Response, blue_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Ptps_Response__blue_points,  // size() function pointer
    get_const_function__Ptps_Response__blue_points,  // get_const(index) function pointer
    get_function__Ptps_Response__blue_points,  // get(index) function pointer
    resize_function__Ptps_Response__blue_points  // resize(index) function pointer
  },
  {
    "yellow_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PointStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Response, yellow_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Ptps_Response__yellow_points,  // size() function pointer
    get_const_function__Ptps_Response__yellow_points,  // get_const(index) function pointer
    get_function__Ptps_Response__yellow_points,  // get(index) function pointer
    resize_function__Ptps_Response__yellow_points  // resize(index) function pointer
  },
  {
    "green_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PointStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs::srv::Ptps_Response, green_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Ptps_Response__green_points,  // size() function pointer
    get_const_function__Ptps_Response__green_points,  // get_const(index) function pointer
    get_function__Ptps_Response__green_points,  // get(index) function pointer
    resize_function__Ptps_Response__green_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Ptps_Response_message_members = {
  "la_msgs::srv",  // message namespace
  "Ptps_Response",  // message name
  8,  // number of fields
  sizeof(la_msgs::srv::Ptps_Response),
  Ptps_Response_message_member_array,  // message members
  Ptps_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Ptps_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Ptps_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Ptps_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace la_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<la_msgs::srv::Ptps_Response>()
{
  return &::la_msgs::srv::rosidl_typesupport_introspection_cpp::Ptps_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, la_msgs, srv, Ptps_Response)() {
  return &::la_msgs::srv::rosidl_typesupport_introspection_cpp::Ptps_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "la_msgs/srv/detail/ptps__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace la_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Ptps_service_members = {
  "la_msgs::srv",  // service namespace
  "Ptps",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<la_msgs::srv::Ptps>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Ptps_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Ptps_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace la_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<la_msgs::srv::Ptps>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::la_msgs::srv::rosidl_typesupport_introspection_cpp::Ptps_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::la_msgs::srv::Ptps_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::la_msgs::srv::Ptps_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, la_msgs, srv, Ptps)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<la_msgs::srv::Ptps>();
}

#ifdef __cplusplus
}
#endif
