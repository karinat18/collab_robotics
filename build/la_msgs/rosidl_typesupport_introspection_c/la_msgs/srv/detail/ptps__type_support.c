// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "la_msgs/srv/detail/ptps__rosidl_typesupport_introspection_c.h"
#include "la_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "la_msgs/srv/detail/ptps__functions.h"
#include "la_msgs/srv/detail/ptps__struct.h"


// Include directives for member types
// Member `desired_frame`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  la_msgs__srv__Ptps_Request__init(message_memory);
}

void Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_fini_function(void * message_memory)
{
  la_msgs__srv__Ptps_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_message_member_array[1] = {
  {
    "desired_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Request, desired_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_message_members = {
  "la_msgs__srv",  // message namespace
  "Ptps_Request",  // message name
  1,  // number of fields
  sizeof(la_msgs__srv__Ptps_Request),
  Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_message_member_array,  // message members
  Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_message_type_support_handle = {
  0,
  &Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_la_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, la_msgs, srv, Ptps_Request)() {
  if (!Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_message_type_support_handle.typesupport_identifier) {
    Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Ptps_Request__rosidl_typesupport_introspection_c__Ptps_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "la_msgs/srv/detail/ptps__rosidl_typesupport_introspection_c.h"
// already included above
// #include "la_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "la_msgs/srv/detail/ptps__functions.h"
// already included above
// #include "la_msgs/srv/detail/ptps__struct.h"


// Include directives for member types
// Member `red_points`
// Member `blue_points`
// Member `yellow_points`
// Member `green_points`
#include "geometry_msgs/msg/point_stamped.h"
// Member `red_points`
// Member `blue_points`
// Member `yellow_points`
// Member `green_points`
#include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  la_msgs__srv__Ptps_Response__init(message_memory);
}

void Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_fini_function(void * message_memory)
{
  la_msgs__srv__Ptps_Response__fini(message_memory);
}

size_t Ptps_Response__rosidl_typesupport_introspection_c__size_function__PointStamped__red_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * Ptps_Response__rosidl_typesupport_introspection_c__get_const_function__PointStamped__red_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Ptps_Response__rosidl_typesupport_introspection_c__get_function__PointStamped__red_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Ptps_Response__rosidl_typesupport_introspection_c__resize_function__PointStamped__red_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PointStamped__Sequence__fini(member);
  return geometry_msgs__msg__PointStamped__Sequence__init(member, size);
}

size_t Ptps_Response__rosidl_typesupport_introspection_c__size_function__PointStamped__blue_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * Ptps_Response__rosidl_typesupport_introspection_c__get_const_function__PointStamped__blue_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Ptps_Response__rosidl_typesupport_introspection_c__get_function__PointStamped__blue_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Ptps_Response__rosidl_typesupport_introspection_c__resize_function__PointStamped__blue_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PointStamped__Sequence__fini(member);
  return geometry_msgs__msg__PointStamped__Sequence__init(member, size);
}

size_t Ptps_Response__rosidl_typesupport_introspection_c__size_function__PointStamped__yellow_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * Ptps_Response__rosidl_typesupport_introspection_c__get_const_function__PointStamped__yellow_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Ptps_Response__rosidl_typesupport_introspection_c__get_function__PointStamped__yellow_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Ptps_Response__rosidl_typesupport_introspection_c__resize_function__PointStamped__yellow_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PointStamped__Sequence__fini(member);
  return geometry_msgs__msg__PointStamped__Sequence__init(member, size);
}

size_t Ptps_Response__rosidl_typesupport_introspection_c__size_function__PointStamped__green_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * Ptps_Response__rosidl_typesupport_introspection_c__get_const_function__PointStamped__green_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Ptps_Response__rosidl_typesupport_introspection_c__get_function__PointStamped__green_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Ptps_Response__rosidl_typesupport_introspection_c__resize_function__PointStamped__green_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PointStamped__Sequence__fini(member);
  return geometry_msgs__msg__PointStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_member_array[8] = {
  {
    "red_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Response, red_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blue_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Response, blue_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Response, yellow_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Response, green_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "red_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Response, red_points),  // bytes offset in struct
    NULL,  // default value
    Ptps_Response__rosidl_typesupport_introspection_c__size_function__PointStamped__red_points,  // size() function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__get_const_function__PointStamped__red_points,  // get_const(index) function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__get_function__PointStamped__red_points,  // get(index) function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__resize_function__PointStamped__red_points  // resize(index) function pointer
  },
  {
    "blue_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Response, blue_points),  // bytes offset in struct
    NULL,  // default value
    Ptps_Response__rosidl_typesupport_introspection_c__size_function__PointStamped__blue_points,  // size() function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__get_const_function__PointStamped__blue_points,  // get_const(index) function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__get_function__PointStamped__blue_points,  // get(index) function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__resize_function__PointStamped__blue_points  // resize(index) function pointer
  },
  {
    "yellow_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Response, yellow_points),  // bytes offset in struct
    NULL,  // default value
    Ptps_Response__rosidl_typesupport_introspection_c__size_function__PointStamped__yellow_points,  // size() function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__get_const_function__PointStamped__yellow_points,  // get_const(index) function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__get_function__PointStamped__yellow_points,  // get(index) function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__resize_function__PointStamped__yellow_points  // resize(index) function pointer
  },
  {
    "green_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(la_msgs__srv__Ptps_Response, green_points),  // bytes offset in struct
    NULL,  // default value
    Ptps_Response__rosidl_typesupport_introspection_c__size_function__PointStamped__green_points,  // size() function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__get_const_function__PointStamped__green_points,  // get_const(index) function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__get_function__PointStamped__green_points,  // get(index) function pointer
    Ptps_Response__rosidl_typesupport_introspection_c__resize_function__PointStamped__green_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_members = {
  "la_msgs__srv",  // message namespace
  "Ptps_Response",  // message name
  8,  // number of fields
  sizeof(la_msgs__srv__Ptps_Response),
  Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_member_array,  // message members
  Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_type_support_handle = {
  0,
  &Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_la_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, la_msgs, srv, Ptps_Response)() {
  Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_type_support_handle.typesupport_identifier) {
    Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Ptps_Response__rosidl_typesupport_introspection_c__Ptps_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "la_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "la_msgs/srv/detail/ptps__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_service_members = {
  "la_msgs__srv",  // service namespace
  "Ptps",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_Request_message_type_support_handle,
  NULL  // response message
  // la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_Response_message_type_support_handle
};

static rosidl_service_type_support_t la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_service_type_support_handle = {
  0,
  &la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, la_msgs, srv, Ptps_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, la_msgs, srv, Ptps_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_la_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, la_msgs, srv, Ptps)() {
  if (!la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_service_type_support_handle.typesupport_identifier) {
    la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, la_msgs, srv, Ptps_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, la_msgs, srv, Ptps_Response)()->data;
  }

  return &la_msgs__srv__detail__ptps__rosidl_typesupport_introspection_c__Ptps_service_type_support_handle;
}
