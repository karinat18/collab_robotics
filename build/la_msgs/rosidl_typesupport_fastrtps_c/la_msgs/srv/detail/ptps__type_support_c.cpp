// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice
#include "la_msgs/srv/detail/ptps__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "la_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "la_msgs/srv/detail/ptps__struct.h"
#include "la_msgs/srv/detail/ptps__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // desired_frame
#include "rosidl_runtime_c/string_functions.h"  // desired_frame

// forward declare type support functions


using _Ptps_Request__ros_msg_type = la_msgs__srv__Ptps_Request;

static bool _Ptps_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ptps_Request__ros_msg_type * ros_message = static_cast<const _Ptps_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: desired_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->desired_frame;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Ptps_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ptps_Request__ros_msg_type * ros_message = static_cast<_Ptps_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: desired_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->desired_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->desired_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->desired_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'desired_frame'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_la_msgs
size_t get_serialized_size_la_msgs__srv__Ptps_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ptps_Request__ros_msg_type * ros_message = static_cast<const _Ptps_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name desired_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->desired_frame.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Ptps_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_la_msgs__srv__Ptps_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_la_msgs
size_t max_serialized_size_la_msgs__srv__Ptps_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: desired_frame
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

static size_t _Ptps_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_la_msgs__srv__Ptps_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Ptps_Request = {
  "la_msgs::srv",
  "Ptps_Request",
  _Ptps_Request__cdr_serialize,
  _Ptps_Request__cdr_deserialize,
  _Ptps_Request__get_serialized_size,
  _Ptps_Request__max_serialized_size
};

static rosidl_message_type_support_t _Ptps_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ptps_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, la_msgs, srv, Ptps_Request)() {
  return &_Ptps_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "la_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "la_msgs/srv/detail/ptps__struct.h"
// already included above
// #include "la_msgs/srv/detail/ptps__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point_stamped__functions.h"  // blue_points, green_points, red_points, yellow_points

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_la_msgs
size_t get_serialized_size_geometry_msgs__msg__PointStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_la_msgs
size_t max_serialized_size_geometry_msgs__msg__PointStamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_la_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped)();


using _Ptps_Response__ros_msg_type = la_msgs__srv__Ptps_Response;

static bool _Ptps_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ptps_Response__ros_msg_type * ros_message = static_cast<const _Ptps_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: red_present
  {
    cdr << (ros_message->red_present ? true : false);
  }

  // Field name: blue_present
  {
    cdr << (ros_message->blue_present ? true : false);
  }

  // Field name: yellow_present
  {
    cdr << (ros_message->yellow_present ? true : false);
  }

  // Field name: green_present
  {
    cdr << (ros_message->green_present ? true : false);
  }

  // Field name: red_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped
      )()->data);
    size_t size = ros_message->red_points.size;
    auto array_ptr = ros_message->red_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: blue_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped
      )()->data);
    size_t size = ros_message->blue_points.size;
    auto array_ptr = ros_message->blue_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: yellow_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped
      )()->data);
    size_t size = ros_message->yellow_points.size;
    auto array_ptr = ros_message->yellow_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: green_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped
      )()->data);
    size_t size = ros_message->green_points.size;
    auto array_ptr = ros_message->green_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Ptps_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ptps_Response__ros_msg_type * ros_message = static_cast<_Ptps_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: red_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->red_present = tmp ? true : false;
  }

  // Field name: blue_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->blue_present = tmp ? true : false;
  }

  // Field name: yellow_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->yellow_present = tmp ? true : false;
  }

  // Field name: green_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->green_present = tmp ? true : false;
  }

  // Field name: red_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->red_points.data) {
      geometry_msgs__msg__PointStamped__Sequence__fini(&ros_message->red_points);
    }
    if (!geometry_msgs__msg__PointStamped__Sequence__init(&ros_message->red_points, size)) {
      fprintf(stderr, "failed to create array for field 'red_points'");
      return false;
    }
    auto array_ptr = ros_message->red_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: blue_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->blue_points.data) {
      geometry_msgs__msg__PointStamped__Sequence__fini(&ros_message->blue_points);
    }
    if (!geometry_msgs__msg__PointStamped__Sequence__init(&ros_message->blue_points, size)) {
      fprintf(stderr, "failed to create array for field 'blue_points'");
      return false;
    }
    auto array_ptr = ros_message->blue_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: yellow_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->yellow_points.data) {
      geometry_msgs__msg__PointStamped__Sequence__fini(&ros_message->yellow_points);
    }
    if (!geometry_msgs__msg__PointStamped__Sequence__init(&ros_message->yellow_points, size)) {
      fprintf(stderr, "failed to create array for field 'yellow_points'");
      return false;
    }
    auto array_ptr = ros_message->yellow_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: green_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PointStamped
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->green_points.data) {
      geometry_msgs__msg__PointStamped__Sequence__fini(&ros_message->green_points);
    }
    if (!geometry_msgs__msg__PointStamped__Sequence__init(&ros_message->green_points, size)) {
      fprintf(stderr, "failed to create array for field 'green_points'");
      return false;
    }
    auto array_ptr = ros_message->green_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_la_msgs
size_t get_serialized_size_la_msgs__srv__Ptps_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ptps_Response__ros_msg_type * ros_message = static_cast<const _Ptps_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name red_present
  {
    size_t item_size = sizeof(ros_message->red_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_present
  {
    size_t item_size = sizeof(ros_message->blue_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yellow_present
  {
    size_t item_size = sizeof(ros_message->yellow_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name green_present
  {
    size_t item_size = sizeof(ros_message->green_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_points
  {
    size_t array_size = ros_message->red_points.size;
    auto array_ptr = ros_message->red_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__PointStamped(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name blue_points
  {
    size_t array_size = ros_message->blue_points.size;
    auto array_ptr = ros_message->blue_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__PointStamped(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name yellow_points
  {
    size_t array_size = ros_message->yellow_points.size;
    auto array_ptr = ros_message->yellow_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__PointStamped(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name green_points
  {
    size_t array_size = ros_message->green_points.size;
    auto array_ptr = ros_message->green_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__PointStamped(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ptps_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_la_msgs__srv__Ptps_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_la_msgs
size_t max_serialized_size_la_msgs__srv__Ptps_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: red_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blue_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yellow_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: green_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: red_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PointStamped(
        full_bounded, current_alignment);
    }
  }
  // member: blue_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PointStamped(
        full_bounded, current_alignment);
    }
  }
  // member: yellow_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PointStamped(
        full_bounded, current_alignment);
    }
  }
  // member: green_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PointStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Ptps_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_la_msgs__srv__Ptps_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Ptps_Response = {
  "la_msgs::srv",
  "Ptps_Response",
  _Ptps_Response__cdr_serialize,
  _Ptps_Response__cdr_deserialize,
  _Ptps_Response__get_serialized_size,
  _Ptps_Response__max_serialized_size
};

static rosidl_message_type_support_t _Ptps_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ptps_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, la_msgs, srv, Ptps_Response)() {
  return &_Ptps_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "la_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "la_msgs/srv/ptps.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Ptps__callbacks = {
  "la_msgs::srv",
  "Ptps",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, la_msgs, srv, Ptps_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, la_msgs, srv, Ptps_Response)(),
};

static rosidl_service_type_support_t Ptps__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Ptps__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, la_msgs, srv, Ptps)() {
  return &Ptps__handle;
}

#if defined(__cplusplus)
}
#endif
