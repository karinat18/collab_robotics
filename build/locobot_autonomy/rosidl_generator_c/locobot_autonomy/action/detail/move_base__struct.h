// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from locobot_autonomy:action/MoveBase.idl
// generated code does not contain a copyright notice

#ifndef LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__STRUCT_H_
#define LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__STRUCT_H_

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

// Struct defined in action/MoveBase in the package locobot_autonomy.
typedef struct locobot_autonomy__action__MoveBase_Goal
{
  geometry_msgs__msg__Pose target_pose;
} locobot_autonomy__action__MoveBase_Goal;

// Struct for a sequence of locobot_autonomy__action__MoveBase_Goal.
typedef struct locobot_autonomy__action__MoveBase_Goal__Sequence
{
  locobot_autonomy__action__MoveBase_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} locobot_autonomy__action__MoveBase_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/MoveBase in the package locobot_autonomy.
typedef struct locobot_autonomy__action__MoveBase_Result
{
  bool done;
} locobot_autonomy__action__MoveBase_Result;

// Struct for a sequence of locobot_autonomy__action__MoveBase_Result.
typedef struct locobot_autonomy__action__MoveBase_Result__Sequence
{
  locobot_autonomy__action__MoveBase_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} locobot_autonomy__action__MoveBase_Result__Sequence;


// Constants defined in the message

// Struct defined in action/MoveBase in the package locobot_autonomy.
typedef struct locobot_autonomy__action__MoveBase_Feedback
{
  double distance;
} locobot_autonomy__action__MoveBase_Feedback;

// Struct for a sequence of locobot_autonomy__action__MoveBase_Feedback.
typedef struct locobot_autonomy__action__MoveBase_Feedback__Sequence
{
  locobot_autonomy__action__MoveBase_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} locobot_autonomy__action__MoveBase_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "locobot_autonomy/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package locobot_autonomy.
typedef struct locobot_autonomy__action__MoveBase_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  locobot_autonomy__action__MoveBase_Goal goal;
} locobot_autonomy__action__MoveBase_SendGoal_Request;

// Struct for a sequence of locobot_autonomy__action__MoveBase_SendGoal_Request.
typedef struct locobot_autonomy__action__MoveBase_SendGoal_Request__Sequence
{
  locobot_autonomy__action__MoveBase_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} locobot_autonomy__action__MoveBase_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveBase in the package locobot_autonomy.
typedef struct locobot_autonomy__action__MoveBase_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} locobot_autonomy__action__MoveBase_SendGoal_Response;

// Struct for a sequence of locobot_autonomy__action__MoveBase_SendGoal_Response.
typedef struct locobot_autonomy__action__MoveBase_SendGoal_Response__Sequence
{
  locobot_autonomy__action__MoveBase_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} locobot_autonomy__action__MoveBase_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveBase in the package locobot_autonomy.
typedef struct locobot_autonomy__action__MoveBase_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} locobot_autonomy__action__MoveBase_GetResult_Request;

// Struct for a sequence of locobot_autonomy__action__MoveBase_GetResult_Request.
typedef struct locobot_autonomy__action__MoveBase_GetResult_Request__Sequence
{
  locobot_autonomy__action__MoveBase_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} locobot_autonomy__action__MoveBase_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "locobot_autonomy/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package locobot_autonomy.
typedef struct locobot_autonomy__action__MoveBase_GetResult_Response
{
  int8_t status;
  locobot_autonomy__action__MoveBase_Result result;
} locobot_autonomy__action__MoveBase_GetResult_Response;

// Struct for a sequence of locobot_autonomy__action__MoveBase_GetResult_Response.
typedef struct locobot_autonomy__action__MoveBase_GetResult_Response__Sequence
{
  locobot_autonomy__action__MoveBase_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} locobot_autonomy__action__MoveBase_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "locobot_autonomy/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package locobot_autonomy.
typedef struct locobot_autonomy__action__MoveBase_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  locobot_autonomy__action__MoveBase_Feedback feedback;
} locobot_autonomy__action__MoveBase_FeedbackMessage;

// Struct for a sequence of locobot_autonomy__action__MoveBase_FeedbackMessage.
typedef struct locobot_autonomy__action__MoveBase_FeedbackMessage__Sequence
{
  locobot_autonomy__action__MoveBase_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} locobot_autonomy__action__MoveBase_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__STRUCT_H_
