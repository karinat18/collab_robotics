// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from la_msgs:action/MoveBase.idl
// generated code does not contain a copyright notice

#ifndef LA_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_H_
#define LA_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in action/MoveBase in the package la_msgs.
typedef struct la_msgs__action__MoveBase_Goal
{
  geometry_msgs__msg__Pose target_pose;
} la_msgs__action__MoveBase_Goal;

// Struct for a sequence of la_msgs__action__MoveBase_Goal.
typedef struct la_msgs__action__MoveBase_Goal__Sequence
{
  la_msgs__action__MoveBase_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__action__MoveBase_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/MoveBase in the package la_msgs.
typedef struct la_msgs__action__MoveBase_Result
{
  bool done;
} la_msgs__action__MoveBase_Result;

// Struct for a sequence of la_msgs__action__MoveBase_Result.
typedef struct la_msgs__action__MoveBase_Result__Sequence
{
  la_msgs__action__MoveBase_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__action__MoveBase_Result__Sequence;


// Constants defined in the message

// Struct defined in action/MoveBase in the package la_msgs.
typedef struct la_msgs__action__MoveBase_Feedback
{
  double distance;
} la_msgs__action__MoveBase_Feedback;

// Struct for a sequence of la_msgs__action__MoveBase_Feedback.
typedef struct la_msgs__action__MoveBase_Feedback__Sequence
{
  la_msgs__action__MoveBase_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__action__MoveBase_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "la_msgs/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package la_msgs.
typedef struct la_msgs__action__MoveBase_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  la_msgs__action__MoveBase_Goal goal;
} la_msgs__action__MoveBase_SendGoal_Request;

// Struct for a sequence of la_msgs__action__MoveBase_SendGoal_Request.
typedef struct la_msgs__action__MoveBase_SendGoal_Request__Sequence
{
  la_msgs__action__MoveBase_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__action__MoveBase_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveBase in the package la_msgs.
typedef struct la_msgs__action__MoveBase_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} la_msgs__action__MoveBase_SendGoal_Response;

// Struct for a sequence of la_msgs__action__MoveBase_SendGoal_Response.
typedef struct la_msgs__action__MoveBase_SendGoal_Response__Sequence
{
  la_msgs__action__MoveBase_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__action__MoveBase_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveBase in the package la_msgs.
typedef struct la_msgs__action__MoveBase_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} la_msgs__action__MoveBase_GetResult_Request;

// Struct for a sequence of la_msgs__action__MoveBase_GetResult_Request.
typedef struct la_msgs__action__MoveBase_GetResult_Request__Sequence
{
  la_msgs__action__MoveBase_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__action__MoveBase_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "la_msgs/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package la_msgs.
typedef struct la_msgs__action__MoveBase_GetResult_Response
{
  int8_t status;
  la_msgs__action__MoveBase_Result result;
} la_msgs__action__MoveBase_GetResult_Response;

// Struct for a sequence of la_msgs__action__MoveBase_GetResult_Response.
typedef struct la_msgs__action__MoveBase_GetResult_Response__Sequence
{
  la_msgs__action__MoveBase_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__action__MoveBase_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "la_msgs/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package la_msgs.
typedef struct la_msgs__action__MoveBase_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  la_msgs__action__MoveBase_Feedback feedback;
} la_msgs__action__MoveBase_FeedbackMessage;

// Struct for a sequence of la_msgs__action__MoveBase_FeedbackMessage.
typedef struct la_msgs__action__MoveBase_FeedbackMessage__Sequence
{
  la_msgs__action__MoveBase_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} la_msgs__action__MoveBase_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LA_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_H_
