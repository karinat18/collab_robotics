// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice

#ifndef LA_MSGS__SRV__DETAIL__PTPS__STRUCT_H_
#define LA_MSGS__SRV__DETAIL__PTPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'desired_frame'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Ptps in the package la_msgs.
typedef struct la_msgs__srv__Ptps_Request
{
  rosidl_runtime_c__String desired_frame;
} la_msgs__srv__Ptps_Request;

// Struct for a sequence of la_msgs__srv__Ptps_Request.
typedef struct la_msgs__srv__Ptps_Request__Sequence
{
  la_msgs__srv__Ptps_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__srv__Ptps_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'red_points'
// Member 'blue_points'
// Member 'yellow_points'
// Member 'green_points'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"

// Struct defined in srv/Ptps in the package la_msgs.
typedef struct la_msgs__srv__Ptps_Response
{
  bool red_present;
  bool blue_present;
  bool yellow_present;
  bool green_present;
  geometry_msgs__msg__PointStamped__Sequence red_points;
  geometry_msgs__msg__PointStamped__Sequence blue_points;
  geometry_msgs__msg__PointStamped__Sequence yellow_points;
  geometry_msgs__msg__PointStamped__Sequence green_points;
} la_msgs__srv__Ptps_Response;

// Struct for a sequence of la_msgs__srv__Ptps_Response.
typedef struct la_msgs__srv__Ptps_Response__Sequence
{
  la_msgs__srv__Ptps_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__srv__Ptps_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LA_MSGS__SRV__DETAIL__PTPS__STRUCT_H_
