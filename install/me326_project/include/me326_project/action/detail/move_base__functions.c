// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from me326_project:action/MoveBase.idl
// generated code does not contain a copyright notice
#include "me326_project/action/detail/move_base__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
me326_project__action__MoveBase_Goal__init(me326_project__action__MoveBase_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__init(&msg->target_pose)) {
    me326_project__action__MoveBase_Goal__fini(msg);
    return false;
  }
  return true;
}

void
me326_project__action__MoveBase_Goal__fini(me326_project__action__MoveBase_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__Pose__fini(&msg->target_pose);
}

bool
me326_project__action__MoveBase_Goal__are_equal(const me326_project__action__MoveBase_Goal * lhs, const me326_project__action__MoveBase_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  return true;
}

bool
me326_project__action__MoveBase_Goal__copy(
  const me326_project__action__MoveBase_Goal * input,
  me326_project__action__MoveBase_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  return true;
}

me326_project__action__MoveBase_Goal *
me326_project__action__MoveBase_Goal__create()
{
  me326_project__action__MoveBase_Goal * msg = (me326_project__action__MoveBase_Goal *)malloc(sizeof(me326_project__action__MoveBase_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me326_project__action__MoveBase_Goal));
  bool success = me326_project__action__MoveBase_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
me326_project__action__MoveBase_Goal__destroy(me326_project__action__MoveBase_Goal * msg)
{
  if (msg) {
    me326_project__action__MoveBase_Goal__fini(msg);
  }
  free(msg);
}


bool
me326_project__action__MoveBase_Goal__Sequence__init(me326_project__action__MoveBase_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  me326_project__action__MoveBase_Goal * data = NULL;
  if (size) {
    data = (me326_project__action__MoveBase_Goal *)calloc(size, sizeof(me326_project__action__MoveBase_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me326_project__action__MoveBase_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me326_project__action__MoveBase_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
me326_project__action__MoveBase_Goal__Sequence__fini(me326_project__action__MoveBase_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      me326_project__action__MoveBase_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

me326_project__action__MoveBase_Goal__Sequence *
me326_project__action__MoveBase_Goal__Sequence__create(size_t size)
{
  me326_project__action__MoveBase_Goal__Sequence * array = (me326_project__action__MoveBase_Goal__Sequence *)malloc(sizeof(me326_project__action__MoveBase_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = me326_project__action__MoveBase_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
me326_project__action__MoveBase_Goal__Sequence__destroy(me326_project__action__MoveBase_Goal__Sequence * array)
{
  if (array) {
    me326_project__action__MoveBase_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
me326_project__action__MoveBase_Goal__Sequence__are_equal(const me326_project__action__MoveBase_Goal__Sequence * lhs, const me326_project__action__MoveBase_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me326_project__action__MoveBase_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me326_project__action__MoveBase_Goal__Sequence__copy(
  const me326_project__action__MoveBase_Goal__Sequence * input,
  me326_project__action__MoveBase_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(me326_project__action__MoveBase_Goal);
    me326_project__action__MoveBase_Goal * data =
      (me326_project__action__MoveBase_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me326_project__action__MoveBase_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          me326_project__action__MoveBase_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me326_project__action__MoveBase_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
me326_project__action__MoveBase_Result__init(me326_project__action__MoveBase_Result * msg)
{
  if (!msg) {
    return false;
  }
  // done
  return true;
}

void
me326_project__action__MoveBase_Result__fini(me326_project__action__MoveBase_Result * msg)
{
  if (!msg) {
    return;
  }
  // done
}

bool
me326_project__action__MoveBase_Result__are_equal(const me326_project__action__MoveBase_Result * lhs, const me326_project__action__MoveBase_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // done
  if (lhs->done != rhs->done) {
    return false;
  }
  return true;
}

bool
me326_project__action__MoveBase_Result__copy(
  const me326_project__action__MoveBase_Result * input,
  me326_project__action__MoveBase_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // done
  output->done = input->done;
  return true;
}

me326_project__action__MoveBase_Result *
me326_project__action__MoveBase_Result__create()
{
  me326_project__action__MoveBase_Result * msg = (me326_project__action__MoveBase_Result *)malloc(sizeof(me326_project__action__MoveBase_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me326_project__action__MoveBase_Result));
  bool success = me326_project__action__MoveBase_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
me326_project__action__MoveBase_Result__destroy(me326_project__action__MoveBase_Result * msg)
{
  if (msg) {
    me326_project__action__MoveBase_Result__fini(msg);
  }
  free(msg);
}


bool
me326_project__action__MoveBase_Result__Sequence__init(me326_project__action__MoveBase_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  me326_project__action__MoveBase_Result * data = NULL;
  if (size) {
    data = (me326_project__action__MoveBase_Result *)calloc(size, sizeof(me326_project__action__MoveBase_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me326_project__action__MoveBase_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me326_project__action__MoveBase_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
me326_project__action__MoveBase_Result__Sequence__fini(me326_project__action__MoveBase_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      me326_project__action__MoveBase_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

me326_project__action__MoveBase_Result__Sequence *
me326_project__action__MoveBase_Result__Sequence__create(size_t size)
{
  me326_project__action__MoveBase_Result__Sequence * array = (me326_project__action__MoveBase_Result__Sequence *)malloc(sizeof(me326_project__action__MoveBase_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = me326_project__action__MoveBase_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
me326_project__action__MoveBase_Result__Sequence__destroy(me326_project__action__MoveBase_Result__Sequence * array)
{
  if (array) {
    me326_project__action__MoveBase_Result__Sequence__fini(array);
  }
  free(array);
}

bool
me326_project__action__MoveBase_Result__Sequence__are_equal(const me326_project__action__MoveBase_Result__Sequence * lhs, const me326_project__action__MoveBase_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me326_project__action__MoveBase_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me326_project__action__MoveBase_Result__Sequence__copy(
  const me326_project__action__MoveBase_Result__Sequence * input,
  me326_project__action__MoveBase_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(me326_project__action__MoveBase_Result);
    me326_project__action__MoveBase_Result * data =
      (me326_project__action__MoveBase_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me326_project__action__MoveBase_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          me326_project__action__MoveBase_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me326_project__action__MoveBase_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
me326_project__action__MoveBase_Feedback__init(me326_project__action__MoveBase_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
me326_project__action__MoveBase_Feedback__fini(me326_project__action__MoveBase_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

bool
me326_project__action__MoveBase_Feedback__are_equal(const me326_project__action__MoveBase_Feedback * lhs, const me326_project__action__MoveBase_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
me326_project__action__MoveBase_Feedback__copy(
  const me326_project__action__MoveBase_Feedback * input,
  me326_project__action__MoveBase_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  return true;
}

me326_project__action__MoveBase_Feedback *
me326_project__action__MoveBase_Feedback__create()
{
  me326_project__action__MoveBase_Feedback * msg = (me326_project__action__MoveBase_Feedback *)malloc(sizeof(me326_project__action__MoveBase_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me326_project__action__MoveBase_Feedback));
  bool success = me326_project__action__MoveBase_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
me326_project__action__MoveBase_Feedback__destroy(me326_project__action__MoveBase_Feedback * msg)
{
  if (msg) {
    me326_project__action__MoveBase_Feedback__fini(msg);
  }
  free(msg);
}


bool
me326_project__action__MoveBase_Feedback__Sequence__init(me326_project__action__MoveBase_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  me326_project__action__MoveBase_Feedback * data = NULL;
  if (size) {
    data = (me326_project__action__MoveBase_Feedback *)calloc(size, sizeof(me326_project__action__MoveBase_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me326_project__action__MoveBase_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me326_project__action__MoveBase_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
me326_project__action__MoveBase_Feedback__Sequence__fini(me326_project__action__MoveBase_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      me326_project__action__MoveBase_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

me326_project__action__MoveBase_Feedback__Sequence *
me326_project__action__MoveBase_Feedback__Sequence__create(size_t size)
{
  me326_project__action__MoveBase_Feedback__Sequence * array = (me326_project__action__MoveBase_Feedback__Sequence *)malloc(sizeof(me326_project__action__MoveBase_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = me326_project__action__MoveBase_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
me326_project__action__MoveBase_Feedback__Sequence__destroy(me326_project__action__MoveBase_Feedback__Sequence * array)
{
  if (array) {
    me326_project__action__MoveBase_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
me326_project__action__MoveBase_Feedback__Sequence__are_equal(const me326_project__action__MoveBase_Feedback__Sequence * lhs, const me326_project__action__MoveBase_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me326_project__action__MoveBase_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me326_project__action__MoveBase_Feedback__Sequence__copy(
  const me326_project__action__MoveBase_Feedback__Sequence * input,
  me326_project__action__MoveBase_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(me326_project__action__MoveBase_Feedback);
    me326_project__action__MoveBase_Feedback * data =
      (me326_project__action__MoveBase_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me326_project__action__MoveBase_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          me326_project__action__MoveBase_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me326_project__action__MoveBase_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "me326_project/action/detail/move_base__functions.h"

bool
me326_project__action__MoveBase_SendGoal_Request__init(me326_project__action__MoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    me326_project__action__MoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!me326_project__action__MoveBase_Goal__init(&msg->goal)) {
    me326_project__action__MoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
me326_project__action__MoveBase_SendGoal_Request__fini(me326_project__action__MoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  me326_project__action__MoveBase_Goal__fini(&msg->goal);
}

bool
me326_project__action__MoveBase_SendGoal_Request__are_equal(const me326_project__action__MoveBase_SendGoal_Request * lhs, const me326_project__action__MoveBase_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!me326_project__action__MoveBase_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
me326_project__action__MoveBase_SendGoal_Request__copy(
  const me326_project__action__MoveBase_SendGoal_Request * input,
  me326_project__action__MoveBase_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!me326_project__action__MoveBase_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

me326_project__action__MoveBase_SendGoal_Request *
me326_project__action__MoveBase_SendGoal_Request__create()
{
  me326_project__action__MoveBase_SendGoal_Request * msg = (me326_project__action__MoveBase_SendGoal_Request *)malloc(sizeof(me326_project__action__MoveBase_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me326_project__action__MoveBase_SendGoal_Request));
  bool success = me326_project__action__MoveBase_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
me326_project__action__MoveBase_SendGoal_Request__destroy(me326_project__action__MoveBase_SendGoal_Request * msg)
{
  if (msg) {
    me326_project__action__MoveBase_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
me326_project__action__MoveBase_SendGoal_Request__Sequence__init(me326_project__action__MoveBase_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  me326_project__action__MoveBase_SendGoal_Request * data = NULL;
  if (size) {
    data = (me326_project__action__MoveBase_SendGoal_Request *)calloc(size, sizeof(me326_project__action__MoveBase_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me326_project__action__MoveBase_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me326_project__action__MoveBase_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
me326_project__action__MoveBase_SendGoal_Request__Sequence__fini(me326_project__action__MoveBase_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      me326_project__action__MoveBase_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

me326_project__action__MoveBase_SendGoal_Request__Sequence *
me326_project__action__MoveBase_SendGoal_Request__Sequence__create(size_t size)
{
  me326_project__action__MoveBase_SendGoal_Request__Sequence * array = (me326_project__action__MoveBase_SendGoal_Request__Sequence *)malloc(sizeof(me326_project__action__MoveBase_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = me326_project__action__MoveBase_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
me326_project__action__MoveBase_SendGoal_Request__Sequence__destroy(me326_project__action__MoveBase_SendGoal_Request__Sequence * array)
{
  if (array) {
    me326_project__action__MoveBase_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
me326_project__action__MoveBase_SendGoal_Request__Sequence__are_equal(const me326_project__action__MoveBase_SendGoal_Request__Sequence * lhs, const me326_project__action__MoveBase_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me326_project__action__MoveBase_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me326_project__action__MoveBase_SendGoal_Request__Sequence__copy(
  const me326_project__action__MoveBase_SendGoal_Request__Sequence * input,
  me326_project__action__MoveBase_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(me326_project__action__MoveBase_SendGoal_Request);
    me326_project__action__MoveBase_SendGoal_Request * data =
      (me326_project__action__MoveBase_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me326_project__action__MoveBase_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          me326_project__action__MoveBase_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me326_project__action__MoveBase_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
me326_project__action__MoveBase_SendGoal_Response__init(me326_project__action__MoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    me326_project__action__MoveBase_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
me326_project__action__MoveBase_SendGoal_Response__fini(me326_project__action__MoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
me326_project__action__MoveBase_SendGoal_Response__are_equal(const me326_project__action__MoveBase_SendGoal_Response * lhs, const me326_project__action__MoveBase_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
me326_project__action__MoveBase_SendGoal_Response__copy(
  const me326_project__action__MoveBase_SendGoal_Response * input,
  me326_project__action__MoveBase_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

me326_project__action__MoveBase_SendGoal_Response *
me326_project__action__MoveBase_SendGoal_Response__create()
{
  me326_project__action__MoveBase_SendGoal_Response * msg = (me326_project__action__MoveBase_SendGoal_Response *)malloc(sizeof(me326_project__action__MoveBase_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me326_project__action__MoveBase_SendGoal_Response));
  bool success = me326_project__action__MoveBase_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
me326_project__action__MoveBase_SendGoal_Response__destroy(me326_project__action__MoveBase_SendGoal_Response * msg)
{
  if (msg) {
    me326_project__action__MoveBase_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
me326_project__action__MoveBase_SendGoal_Response__Sequence__init(me326_project__action__MoveBase_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  me326_project__action__MoveBase_SendGoal_Response * data = NULL;
  if (size) {
    data = (me326_project__action__MoveBase_SendGoal_Response *)calloc(size, sizeof(me326_project__action__MoveBase_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me326_project__action__MoveBase_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me326_project__action__MoveBase_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
me326_project__action__MoveBase_SendGoal_Response__Sequence__fini(me326_project__action__MoveBase_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      me326_project__action__MoveBase_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

me326_project__action__MoveBase_SendGoal_Response__Sequence *
me326_project__action__MoveBase_SendGoal_Response__Sequence__create(size_t size)
{
  me326_project__action__MoveBase_SendGoal_Response__Sequence * array = (me326_project__action__MoveBase_SendGoal_Response__Sequence *)malloc(sizeof(me326_project__action__MoveBase_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = me326_project__action__MoveBase_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
me326_project__action__MoveBase_SendGoal_Response__Sequence__destroy(me326_project__action__MoveBase_SendGoal_Response__Sequence * array)
{
  if (array) {
    me326_project__action__MoveBase_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
me326_project__action__MoveBase_SendGoal_Response__Sequence__are_equal(const me326_project__action__MoveBase_SendGoal_Response__Sequence * lhs, const me326_project__action__MoveBase_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me326_project__action__MoveBase_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me326_project__action__MoveBase_SendGoal_Response__Sequence__copy(
  const me326_project__action__MoveBase_SendGoal_Response__Sequence * input,
  me326_project__action__MoveBase_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(me326_project__action__MoveBase_SendGoal_Response);
    me326_project__action__MoveBase_SendGoal_Response * data =
      (me326_project__action__MoveBase_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me326_project__action__MoveBase_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          me326_project__action__MoveBase_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me326_project__action__MoveBase_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
me326_project__action__MoveBase_GetResult_Request__init(me326_project__action__MoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    me326_project__action__MoveBase_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
me326_project__action__MoveBase_GetResult_Request__fini(me326_project__action__MoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
me326_project__action__MoveBase_GetResult_Request__are_equal(const me326_project__action__MoveBase_GetResult_Request * lhs, const me326_project__action__MoveBase_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
me326_project__action__MoveBase_GetResult_Request__copy(
  const me326_project__action__MoveBase_GetResult_Request * input,
  me326_project__action__MoveBase_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

me326_project__action__MoveBase_GetResult_Request *
me326_project__action__MoveBase_GetResult_Request__create()
{
  me326_project__action__MoveBase_GetResult_Request * msg = (me326_project__action__MoveBase_GetResult_Request *)malloc(sizeof(me326_project__action__MoveBase_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me326_project__action__MoveBase_GetResult_Request));
  bool success = me326_project__action__MoveBase_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
me326_project__action__MoveBase_GetResult_Request__destroy(me326_project__action__MoveBase_GetResult_Request * msg)
{
  if (msg) {
    me326_project__action__MoveBase_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
me326_project__action__MoveBase_GetResult_Request__Sequence__init(me326_project__action__MoveBase_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  me326_project__action__MoveBase_GetResult_Request * data = NULL;
  if (size) {
    data = (me326_project__action__MoveBase_GetResult_Request *)calloc(size, sizeof(me326_project__action__MoveBase_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me326_project__action__MoveBase_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me326_project__action__MoveBase_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
me326_project__action__MoveBase_GetResult_Request__Sequence__fini(me326_project__action__MoveBase_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      me326_project__action__MoveBase_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

me326_project__action__MoveBase_GetResult_Request__Sequence *
me326_project__action__MoveBase_GetResult_Request__Sequence__create(size_t size)
{
  me326_project__action__MoveBase_GetResult_Request__Sequence * array = (me326_project__action__MoveBase_GetResult_Request__Sequence *)malloc(sizeof(me326_project__action__MoveBase_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = me326_project__action__MoveBase_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
me326_project__action__MoveBase_GetResult_Request__Sequence__destroy(me326_project__action__MoveBase_GetResult_Request__Sequence * array)
{
  if (array) {
    me326_project__action__MoveBase_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
me326_project__action__MoveBase_GetResult_Request__Sequence__are_equal(const me326_project__action__MoveBase_GetResult_Request__Sequence * lhs, const me326_project__action__MoveBase_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me326_project__action__MoveBase_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me326_project__action__MoveBase_GetResult_Request__Sequence__copy(
  const me326_project__action__MoveBase_GetResult_Request__Sequence * input,
  me326_project__action__MoveBase_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(me326_project__action__MoveBase_GetResult_Request);
    me326_project__action__MoveBase_GetResult_Request * data =
      (me326_project__action__MoveBase_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me326_project__action__MoveBase_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          me326_project__action__MoveBase_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me326_project__action__MoveBase_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "me326_project/action/detail/move_base__functions.h"

bool
me326_project__action__MoveBase_GetResult_Response__init(me326_project__action__MoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!me326_project__action__MoveBase_Result__init(&msg->result)) {
    me326_project__action__MoveBase_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
me326_project__action__MoveBase_GetResult_Response__fini(me326_project__action__MoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  me326_project__action__MoveBase_Result__fini(&msg->result);
}

bool
me326_project__action__MoveBase_GetResult_Response__are_equal(const me326_project__action__MoveBase_GetResult_Response * lhs, const me326_project__action__MoveBase_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!me326_project__action__MoveBase_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
me326_project__action__MoveBase_GetResult_Response__copy(
  const me326_project__action__MoveBase_GetResult_Response * input,
  me326_project__action__MoveBase_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!me326_project__action__MoveBase_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

me326_project__action__MoveBase_GetResult_Response *
me326_project__action__MoveBase_GetResult_Response__create()
{
  me326_project__action__MoveBase_GetResult_Response * msg = (me326_project__action__MoveBase_GetResult_Response *)malloc(sizeof(me326_project__action__MoveBase_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me326_project__action__MoveBase_GetResult_Response));
  bool success = me326_project__action__MoveBase_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
me326_project__action__MoveBase_GetResult_Response__destroy(me326_project__action__MoveBase_GetResult_Response * msg)
{
  if (msg) {
    me326_project__action__MoveBase_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
me326_project__action__MoveBase_GetResult_Response__Sequence__init(me326_project__action__MoveBase_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  me326_project__action__MoveBase_GetResult_Response * data = NULL;
  if (size) {
    data = (me326_project__action__MoveBase_GetResult_Response *)calloc(size, sizeof(me326_project__action__MoveBase_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me326_project__action__MoveBase_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me326_project__action__MoveBase_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
me326_project__action__MoveBase_GetResult_Response__Sequence__fini(me326_project__action__MoveBase_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      me326_project__action__MoveBase_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

me326_project__action__MoveBase_GetResult_Response__Sequence *
me326_project__action__MoveBase_GetResult_Response__Sequence__create(size_t size)
{
  me326_project__action__MoveBase_GetResult_Response__Sequence * array = (me326_project__action__MoveBase_GetResult_Response__Sequence *)malloc(sizeof(me326_project__action__MoveBase_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = me326_project__action__MoveBase_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
me326_project__action__MoveBase_GetResult_Response__Sequence__destroy(me326_project__action__MoveBase_GetResult_Response__Sequence * array)
{
  if (array) {
    me326_project__action__MoveBase_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
me326_project__action__MoveBase_GetResult_Response__Sequence__are_equal(const me326_project__action__MoveBase_GetResult_Response__Sequence * lhs, const me326_project__action__MoveBase_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me326_project__action__MoveBase_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me326_project__action__MoveBase_GetResult_Response__Sequence__copy(
  const me326_project__action__MoveBase_GetResult_Response__Sequence * input,
  me326_project__action__MoveBase_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(me326_project__action__MoveBase_GetResult_Response);
    me326_project__action__MoveBase_GetResult_Response * data =
      (me326_project__action__MoveBase_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me326_project__action__MoveBase_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          me326_project__action__MoveBase_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me326_project__action__MoveBase_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "me326_project/action/detail/move_base__functions.h"

bool
me326_project__action__MoveBase_FeedbackMessage__init(me326_project__action__MoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    me326_project__action__MoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!me326_project__action__MoveBase_Feedback__init(&msg->feedback)) {
    me326_project__action__MoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
me326_project__action__MoveBase_FeedbackMessage__fini(me326_project__action__MoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  me326_project__action__MoveBase_Feedback__fini(&msg->feedback);
}

bool
me326_project__action__MoveBase_FeedbackMessage__are_equal(const me326_project__action__MoveBase_FeedbackMessage * lhs, const me326_project__action__MoveBase_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!me326_project__action__MoveBase_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
me326_project__action__MoveBase_FeedbackMessage__copy(
  const me326_project__action__MoveBase_FeedbackMessage * input,
  me326_project__action__MoveBase_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!me326_project__action__MoveBase_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

me326_project__action__MoveBase_FeedbackMessage *
me326_project__action__MoveBase_FeedbackMessage__create()
{
  me326_project__action__MoveBase_FeedbackMessage * msg = (me326_project__action__MoveBase_FeedbackMessage *)malloc(sizeof(me326_project__action__MoveBase_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me326_project__action__MoveBase_FeedbackMessage));
  bool success = me326_project__action__MoveBase_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
me326_project__action__MoveBase_FeedbackMessage__destroy(me326_project__action__MoveBase_FeedbackMessage * msg)
{
  if (msg) {
    me326_project__action__MoveBase_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
me326_project__action__MoveBase_FeedbackMessage__Sequence__init(me326_project__action__MoveBase_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  me326_project__action__MoveBase_FeedbackMessage * data = NULL;
  if (size) {
    data = (me326_project__action__MoveBase_FeedbackMessage *)calloc(size, sizeof(me326_project__action__MoveBase_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me326_project__action__MoveBase_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me326_project__action__MoveBase_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
me326_project__action__MoveBase_FeedbackMessage__Sequence__fini(me326_project__action__MoveBase_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      me326_project__action__MoveBase_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

me326_project__action__MoveBase_FeedbackMessage__Sequence *
me326_project__action__MoveBase_FeedbackMessage__Sequence__create(size_t size)
{
  me326_project__action__MoveBase_FeedbackMessage__Sequence * array = (me326_project__action__MoveBase_FeedbackMessage__Sequence *)malloc(sizeof(me326_project__action__MoveBase_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = me326_project__action__MoveBase_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
me326_project__action__MoveBase_FeedbackMessage__Sequence__destroy(me326_project__action__MoveBase_FeedbackMessage__Sequence * array)
{
  if (array) {
    me326_project__action__MoveBase_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
me326_project__action__MoveBase_FeedbackMessage__Sequence__are_equal(const me326_project__action__MoveBase_FeedbackMessage__Sequence * lhs, const me326_project__action__MoveBase_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me326_project__action__MoveBase_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me326_project__action__MoveBase_FeedbackMessage__Sequence__copy(
  const me326_project__action__MoveBase_FeedbackMessage__Sequence * input,
  me326_project__action__MoveBase_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(me326_project__action__MoveBase_FeedbackMessage);
    me326_project__action__MoveBase_FeedbackMessage * data =
      (me326_project__action__MoveBase_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me326_project__action__MoveBase_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          me326_project__action__MoveBase_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me326_project__action__MoveBase_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
