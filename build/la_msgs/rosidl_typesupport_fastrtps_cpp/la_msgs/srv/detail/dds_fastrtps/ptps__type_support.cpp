// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice
#include "la_msgs/srv/detail/ptps__rosidl_typesupport_fastrtps_cpp.hpp"
#include "la_msgs/srv/detail/ptps__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace la_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_la_msgs
cdr_serialize(
  const la_msgs::srv::Ptps_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: desired_frame
  cdr << ros_message.desired_frame;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_la_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  la_msgs::srv::Ptps_Request & ros_message)
{
  // Member: desired_frame
  cdr >> ros_message.desired_frame;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_la_msgs
get_serialized_size(
  const la_msgs::srv::Ptps_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: desired_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.desired_frame.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_la_msgs
max_serialized_size_Ptps_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: desired_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Ptps_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const la_msgs::srv::Ptps_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Ptps_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<la_msgs::srv::Ptps_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Ptps_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const la_msgs::srv::Ptps_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Ptps_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Ptps_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Ptps_Request__callbacks = {
  "la_msgs::srv",
  "Ptps_Request",
  _Ptps_Request__cdr_serialize,
  _Ptps_Request__cdr_deserialize,
  _Ptps_Request__get_serialized_size,
  _Ptps_Request__max_serialized_size
};

static rosidl_message_type_support_t _Ptps_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Ptps_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace la_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_la_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<la_msgs::srv::Ptps_Request>()
{
  return &la_msgs::srv::typesupport_fastrtps_cpp::_Ptps_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, la_msgs, srv, Ptps_Request)() {
  return &la_msgs::srv::typesupport_fastrtps_cpp::_Ptps_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PointStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PointStamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::PointStamped &,
  size_t current_alignment);
size_t
max_serialized_size_PointStamped(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PointStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PointStamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::PointStamped &,
  size_t current_alignment);
size_t
max_serialized_size_PointStamped(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PointStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PointStamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::PointStamped &,
  size_t current_alignment);
size_t
max_serialized_size_PointStamped(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PointStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PointStamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::PointStamped &,
  size_t current_alignment);
size_t
max_serialized_size_PointStamped(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace la_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_la_msgs
cdr_serialize(
  const la_msgs::srv::Ptps_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: red_present
  cdr << (ros_message.red_present ? true : false);
  // Member: blue_present
  cdr << (ros_message.blue_present ? true : false);
  // Member: yellow_present
  cdr << (ros_message.yellow_present ? true : false);
  // Member: green_present
  cdr << (ros_message.green_present ? true : false);
  // Member: red_points
  {
    size_t size = ros_message.red_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.red_points[i],
        cdr);
    }
  }
  // Member: blue_points
  {
    size_t size = ros_message.blue_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.blue_points[i],
        cdr);
    }
  }
  // Member: yellow_points
  {
    size_t size = ros_message.yellow_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.yellow_points[i],
        cdr);
    }
  }
  // Member: green_points
  {
    size_t size = ros_message.green_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.green_points[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_la_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  la_msgs::srv::Ptps_Response & ros_message)
{
  // Member: red_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.red_present = tmp ? true : false;
  }

  // Member: blue_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.blue_present = tmp ? true : false;
  }

  // Member: yellow_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.yellow_present = tmp ? true : false;
  }

  // Member: green_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.green_present = tmp ? true : false;
  }

  // Member: red_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.red_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.red_points[i]);
    }
  }

  // Member: blue_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.blue_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.blue_points[i]);
    }
  }

  // Member: yellow_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.yellow_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.yellow_points[i]);
    }
  }

  // Member: green_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.green_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.green_points[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_la_msgs
get_serialized_size(
  const la_msgs::srv::Ptps_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: red_present
  {
    size_t item_size = sizeof(ros_message.red_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_present
  {
    size_t item_size = sizeof(ros_message.blue_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yellow_present
  {
    size_t item_size = sizeof(ros_message.yellow_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: green_present
  {
    size_t item_size = sizeof(ros_message.green_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_points
  {
    size_t array_size = ros_message.red_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.red_points[index], current_alignment);
    }
  }
  // Member: blue_points
  {
    size_t array_size = ros_message.blue_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.blue_points[index], current_alignment);
    }
  }
  // Member: yellow_points
  {
    size_t array_size = ros_message.yellow_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.yellow_points[index], current_alignment);
    }
  }
  // Member: green_points
  {
    size_t array_size = ros_message.green_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.green_points[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_la_msgs
max_serialized_size_Ptps_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: red_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blue_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: yellow_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: green_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: red_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointStamped(
        full_bounded, current_alignment);
    }
  }

  // Member: blue_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointStamped(
        full_bounded, current_alignment);
    }
  }

  // Member: yellow_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointStamped(
        full_bounded, current_alignment);
    }
  }

  // Member: green_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Ptps_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const la_msgs::srv::Ptps_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Ptps_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<la_msgs::srv::Ptps_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Ptps_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const la_msgs::srv::Ptps_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Ptps_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Ptps_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Ptps_Response__callbacks = {
  "la_msgs::srv",
  "Ptps_Response",
  _Ptps_Response__cdr_serialize,
  _Ptps_Response__cdr_deserialize,
  _Ptps_Response__get_serialized_size,
  _Ptps_Response__max_serialized_size
};

static rosidl_message_type_support_t _Ptps_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Ptps_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace la_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_la_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<la_msgs::srv::Ptps_Response>()
{
  return &la_msgs::srv::typesupport_fastrtps_cpp::_Ptps_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, la_msgs, srv, Ptps_Response)() {
  return &la_msgs::srv::typesupport_fastrtps_cpp::_Ptps_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace la_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Ptps__callbacks = {
  "la_msgs::srv",
  "Ptps",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, la_msgs, srv, Ptps_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, la_msgs, srv, Ptps_Response)(),
};

static rosidl_service_type_support_t _Ptps__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Ptps__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace la_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_la_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<la_msgs::srv::Ptps>()
{
  return &la_msgs::srv::typesupport_fastrtps_cpp::_Ptps__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, la_msgs, srv, Ptps)() {
  return &la_msgs::srv::typesupport_fastrtps_cpp::_Ptps__handle;
}

#ifdef __cplusplus
}
#endif
