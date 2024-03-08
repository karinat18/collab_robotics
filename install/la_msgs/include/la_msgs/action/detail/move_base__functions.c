// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from la_msgs:action/MoveBase.idl
// generated code does not contain a copyright notice
#include "la_msgs/action/detail/move_base__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
la_msgs__action__MoveBase_Goal__init(la_msgs__action__MoveBase_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__init(&msg->target_pose)) {
    la_msgs__action__MoveBase_Goal__fini(msg);
    return false;
  }
  return true;
}

void
la_msgs__action__MoveBase_Goal__fini(la_msgs__action__MoveBase_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__Pose__fini(&msg->target_pose);
}

bool
la_msgs__action__MoveBase_Goal__are_equal(const la_msgs__action__MoveBase_Goal * lhs, const la_msgs__action__MoveBase_Goal * rhs)
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
la_msgs__action__MoveBase_Goal__copy(
  const la_msgs__action__MoveBase_Goal * input,
  la_msgs__action__MoveBase_Goal * output)
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

la_msgs__action__MoveBase_Goal *
la_msgs__action__MoveBase_Goal__create()
{
  la_msgs__action__MoveBase_Goal * msg = (la_msgs__action__MoveBase_Goal *)malloc(sizeof(la_msgs__action__MoveBase_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__action__MoveBase_Goal));
  bool success = la_msgs__action__MoveBase_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__action__MoveBase_Goal__destroy(la_msgs__action__MoveBase_Goal * msg)
{
  if (msg) {
    la_msgs__action__MoveBase_Goal__fini(msg);
  }
  free(msg);
}


bool
la_msgs__action__MoveBase_Goal__Sequence__init(la_msgs__action__MoveBase_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__action__MoveBase_Goal * data = NULL;
  if (size) {
    data = (la_msgs__action__MoveBase_Goal *)calloc(size, sizeof(la_msgs__action__MoveBase_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__action__MoveBase_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__action__MoveBase_Goal__fini(&data[i - 1]);
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
la_msgs__action__MoveBase_Goal__Sequence__fini(la_msgs__action__MoveBase_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__action__MoveBase_Goal__fini(&array->data[i]);
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

la_msgs__action__MoveBase_Goal__Sequence *
la_msgs__action__MoveBase_Goal__Sequence__create(size_t size)
{
  la_msgs__action__MoveBase_Goal__Sequence * array = (la_msgs__action__MoveBase_Goal__Sequence *)malloc(sizeof(la_msgs__action__MoveBase_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__action__MoveBase_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__action__MoveBase_Goal__Sequence__destroy(la_msgs__action__MoveBase_Goal__Sequence * array)
{
  if (array) {
    la_msgs__action__MoveBase_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__action__MoveBase_Goal__Sequence__are_equal(const la_msgs__action__MoveBase_Goal__Sequence * lhs, const la_msgs__action__MoveBase_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__action__MoveBase_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__action__MoveBase_Goal__Sequence__copy(
  const la_msgs__action__MoveBase_Goal__Sequence * input,
  la_msgs__action__MoveBase_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__action__MoveBase_Goal);
    la_msgs__action__MoveBase_Goal * data =
      (la_msgs__action__MoveBase_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__action__MoveBase_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__action__MoveBase_Goal__fini(&data[i]);
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
    if (!la_msgs__action__MoveBase_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
la_msgs__action__MoveBase_Result__init(la_msgs__action__MoveBase_Result * msg)
{
  if (!msg) {
    return false;
  }
  // done
  return true;
}

void
la_msgs__action__MoveBase_Result__fini(la_msgs__action__MoveBase_Result * msg)
{
  if (!msg) {
    return;
  }
  // done
}

bool
la_msgs__action__MoveBase_Result__are_equal(const la_msgs__action__MoveBase_Result * lhs, const la_msgs__action__MoveBase_Result * rhs)
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
la_msgs__action__MoveBase_Result__copy(
  const la_msgs__action__MoveBase_Result * input,
  la_msgs__action__MoveBase_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // done
  output->done = input->done;
  return true;
}

la_msgs__action__MoveBase_Result *
la_msgs__action__MoveBase_Result__create()
{
  la_msgs__action__MoveBase_Result * msg = (la_msgs__action__MoveBase_Result *)malloc(sizeof(la_msgs__action__MoveBase_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__action__MoveBase_Result));
  bool success = la_msgs__action__MoveBase_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__action__MoveBase_Result__destroy(la_msgs__action__MoveBase_Result * msg)
{
  if (msg) {
    la_msgs__action__MoveBase_Result__fini(msg);
  }
  free(msg);
}


bool
la_msgs__action__MoveBase_Result__Sequence__init(la_msgs__action__MoveBase_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__action__MoveBase_Result * data = NULL;
  if (size) {
    data = (la_msgs__action__MoveBase_Result *)calloc(size, sizeof(la_msgs__action__MoveBase_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__action__MoveBase_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__action__MoveBase_Result__fini(&data[i - 1]);
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
la_msgs__action__MoveBase_Result__Sequence__fini(la_msgs__action__MoveBase_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__action__MoveBase_Result__fini(&array->data[i]);
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

la_msgs__action__MoveBase_Result__Sequence *
la_msgs__action__MoveBase_Result__Sequence__create(size_t size)
{
  la_msgs__action__MoveBase_Result__Sequence * array = (la_msgs__action__MoveBase_Result__Sequence *)malloc(sizeof(la_msgs__action__MoveBase_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__action__MoveBase_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__action__MoveBase_Result__Sequence__destroy(la_msgs__action__MoveBase_Result__Sequence * array)
{
  if (array) {
    la_msgs__action__MoveBase_Result__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__action__MoveBase_Result__Sequence__are_equal(const la_msgs__action__MoveBase_Result__Sequence * lhs, const la_msgs__action__MoveBase_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__action__MoveBase_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__action__MoveBase_Result__Sequence__copy(
  const la_msgs__action__MoveBase_Result__Sequence * input,
  la_msgs__action__MoveBase_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__action__MoveBase_Result);
    la_msgs__action__MoveBase_Result * data =
      (la_msgs__action__MoveBase_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__action__MoveBase_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__action__MoveBase_Result__fini(&data[i]);
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
    if (!la_msgs__action__MoveBase_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
la_msgs__action__MoveBase_Feedback__init(la_msgs__action__MoveBase_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
la_msgs__action__MoveBase_Feedback__fini(la_msgs__action__MoveBase_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

bool
la_msgs__action__MoveBase_Feedback__are_equal(const la_msgs__action__MoveBase_Feedback * lhs, const la_msgs__action__MoveBase_Feedback * rhs)
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
la_msgs__action__MoveBase_Feedback__copy(
  const la_msgs__action__MoveBase_Feedback * input,
  la_msgs__action__MoveBase_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  return true;
}

la_msgs__action__MoveBase_Feedback *
la_msgs__action__MoveBase_Feedback__create()
{
  la_msgs__action__MoveBase_Feedback * msg = (la_msgs__action__MoveBase_Feedback *)malloc(sizeof(la_msgs__action__MoveBase_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__action__MoveBase_Feedback));
  bool success = la_msgs__action__MoveBase_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__action__MoveBase_Feedback__destroy(la_msgs__action__MoveBase_Feedback * msg)
{
  if (msg) {
    la_msgs__action__MoveBase_Feedback__fini(msg);
  }
  free(msg);
}


bool
la_msgs__action__MoveBase_Feedback__Sequence__init(la_msgs__action__MoveBase_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__action__MoveBase_Feedback * data = NULL;
  if (size) {
    data = (la_msgs__action__MoveBase_Feedback *)calloc(size, sizeof(la_msgs__action__MoveBase_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__action__MoveBase_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__action__MoveBase_Feedback__fini(&data[i - 1]);
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
la_msgs__action__MoveBase_Feedback__Sequence__fini(la_msgs__action__MoveBase_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__action__MoveBase_Feedback__fini(&array->data[i]);
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

la_msgs__action__MoveBase_Feedback__Sequence *
la_msgs__action__MoveBase_Feedback__Sequence__create(size_t size)
{
  la_msgs__action__MoveBase_Feedback__Sequence * array = (la_msgs__action__MoveBase_Feedback__Sequence *)malloc(sizeof(la_msgs__action__MoveBase_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__action__MoveBase_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__action__MoveBase_Feedback__Sequence__destroy(la_msgs__action__MoveBase_Feedback__Sequence * array)
{
  if (array) {
    la_msgs__action__MoveBase_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__action__MoveBase_Feedback__Sequence__are_equal(const la_msgs__action__MoveBase_Feedback__Sequence * lhs, const la_msgs__action__MoveBase_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__action__MoveBase_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__action__MoveBase_Feedback__Sequence__copy(
  const la_msgs__action__MoveBase_Feedback__Sequence * input,
  la_msgs__action__MoveBase_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__action__MoveBase_Feedback);
    la_msgs__action__MoveBase_Feedback * data =
      (la_msgs__action__MoveBase_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__action__MoveBase_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__action__MoveBase_Feedback__fini(&data[i]);
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
    if (!la_msgs__action__MoveBase_Feedback__copy(
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
// #include "la_msgs/action/detail/move_base__functions.h"

bool
la_msgs__action__MoveBase_SendGoal_Request__init(la_msgs__action__MoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    la_msgs__action__MoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!la_msgs__action__MoveBase_Goal__init(&msg->goal)) {
    la_msgs__action__MoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
la_msgs__action__MoveBase_SendGoal_Request__fini(la_msgs__action__MoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  la_msgs__action__MoveBase_Goal__fini(&msg->goal);
}

bool
la_msgs__action__MoveBase_SendGoal_Request__are_equal(const la_msgs__action__MoveBase_SendGoal_Request * lhs, const la_msgs__action__MoveBase_SendGoal_Request * rhs)
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
  if (!la_msgs__action__MoveBase_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
la_msgs__action__MoveBase_SendGoal_Request__copy(
  const la_msgs__action__MoveBase_SendGoal_Request * input,
  la_msgs__action__MoveBase_SendGoal_Request * output)
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
  if (!la_msgs__action__MoveBase_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

la_msgs__action__MoveBase_SendGoal_Request *
la_msgs__action__MoveBase_SendGoal_Request__create()
{
  la_msgs__action__MoveBase_SendGoal_Request * msg = (la_msgs__action__MoveBase_SendGoal_Request *)malloc(sizeof(la_msgs__action__MoveBase_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__action__MoveBase_SendGoal_Request));
  bool success = la_msgs__action__MoveBase_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__action__MoveBase_SendGoal_Request__destroy(la_msgs__action__MoveBase_SendGoal_Request * msg)
{
  if (msg) {
    la_msgs__action__MoveBase_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
la_msgs__action__MoveBase_SendGoal_Request__Sequence__init(la_msgs__action__MoveBase_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__action__MoveBase_SendGoal_Request * data = NULL;
  if (size) {
    data = (la_msgs__action__MoveBase_SendGoal_Request *)calloc(size, sizeof(la_msgs__action__MoveBase_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__action__MoveBase_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__action__MoveBase_SendGoal_Request__fini(&data[i - 1]);
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
la_msgs__action__MoveBase_SendGoal_Request__Sequence__fini(la_msgs__action__MoveBase_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__action__MoveBase_SendGoal_Request__fini(&array->data[i]);
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

la_msgs__action__MoveBase_SendGoal_Request__Sequence *
la_msgs__action__MoveBase_SendGoal_Request__Sequence__create(size_t size)
{
  la_msgs__action__MoveBase_SendGoal_Request__Sequence * array = (la_msgs__action__MoveBase_SendGoal_Request__Sequence *)malloc(sizeof(la_msgs__action__MoveBase_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__action__MoveBase_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__action__MoveBase_SendGoal_Request__Sequence__destroy(la_msgs__action__MoveBase_SendGoal_Request__Sequence * array)
{
  if (array) {
    la_msgs__action__MoveBase_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__action__MoveBase_SendGoal_Request__Sequence__are_equal(const la_msgs__action__MoveBase_SendGoal_Request__Sequence * lhs, const la_msgs__action__MoveBase_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__action__MoveBase_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__action__MoveBase_SendGoal_Request__Sequence__copy(
  const la_msgs__action__MoveBase_SendGoal_Request__Sequence * input,
  la_msgs__action__MoveBase_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__action__MoveBase_SendGoal_Request);
    la_msgs__action__MoveBase_SendGoal_Request * data =
      (la_msgs__action__MoveBase_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__action__MoveBase_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__action__MoveBase_SendGoal_Request__fini(&data[i]);
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
    if (!la_msgs__action__MoveBase_SendGoal_Request__copy(
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
la_msgs__action__MoveBase_SendGoal_Response__init(la_msgs__action__MoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    la_msgs__action__MoveBase_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
la_msgs__action__MoveBase_SendGoal_Response__fini(la_msgs__action__MoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
la_msgs__action__MoveBase_SendGoal_Response__are_equal(const la_msgs__action__MoveBase_SendGoal_Response * lhs, const la_msgs__action__MoveBase_SendGoal_Response * rhs)
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
la_msgs__action__MoveBase_SendGoal_Response__copy(
  const la_msgs__action__MoveBase_SendGoal_Response * input,
  la_msgs__action__MoveBase_SendGoal_Response * output)
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

la_msgs__action__MoveBase_SendGoal_Response *
la_msgs__action__MoveBase_SendGoal_Response__create()
{
  la_msgs__action__MoveBase_SendGoal_Response * msg = (la_msgs__action__MoveBase_SendGoal_Response *)malloc(sizeof(la_msgs__action__MoveBase_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__action__MoveBase_SendGoal_Response));
  bool success = la_msgs__action__MoveBase_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__action__MoveBase_SendGoal_Response__destroy(la_msgs__action__MoveBase_SendGoal_Response * msg)
{
  if (msg) {
    la_msgs__action__MoveBase_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
la_msgs__action__MoveBase_SendGoal_Response__Sequence__init(la_msgs__action__MoveBase_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__action__MoveBase_SendGoal_Response * data = NULL;
  if (size) {
    data = (la_msgs__action__MoveBase_SendGoal_Response *)calloc(size, sizeof(la_msgs__action__MoveBase_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__action__MoveBase_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__action__MoveBase_SendGoal_Response__fini(&data[i - 1]);
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
la_msgs__action__MoveBase_SendGoal_Response__Sequence__fini(la_msgs__action__MoveBase_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__action__MoveBase_SendGoal_Response__fini(&array->data[i]);
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

la_msgs__action__MoveBase_SendGoal_Response__Sequence *
la_msgs__action__MoveBase_SendGoal_Response__Sequence__create(size_t size)
{
  la_msgs__action__MoveBase_SendGoal_Response__Sequence * array = (la_msgs__action__MoveBase_SendGoal_Response__Sequence *)malloc(sizeof(la_msgs__action__MoveBase_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__action__MoveBase_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__action__MoveBase_SendGoal_Response__Sequence__destroy(la_msgs__action__MoveBase_SendGoal_Response__Sequence * array)
{
  if (array) {
    la_msgs__action__MoveBase_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__action__MoveBase_SendGoal_Response__Sequence__are_equal(const la_msgs__action__MoveBase_SendGoal_Response__Sequence * lhs, const la_msgs__action__MoveBase_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__action__MoveBase_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__action__MoveBase_SendGoal_Response__Sequence__copy(
  const la_msgs__action__MoveBase_SendGoal_Response__Sequence * input,
  la_msgs__action__MoveBase_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__action__MoveBase_SendGoal_Response);
    la_msgs__action__MoveBase_SendGoal_Response * data =
      (la_msgs__action__MoveBase_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__action__MoveBase_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__action__MoveBase_SendGoal_Response__fini(&data[i]);
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
    if (!la_msgs__action__MoveBase_SendGoal_Response__copy(
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
la_msgs__action__MoveBase_GetResult_Request__init(la_msgs__action__MoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    la_msgs__action__MoveBase_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
la_msgs__action__MoveBase_GetResult_Request__fini(la_msgs__action__MoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
la_msgs__action__MoveBase_GetResult_Request__are_equal(const la_msgs__action__MoveBase_GetResult_Request * lhs, const la_msgs__action__MoveBase_GetResult_Request * rhs)
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
la_msgs__action__MoveBase_GetResult_Request__copy(
  const la_msgs__action__MoveBase_GetResult_Request * input,
  la_msgs__action__MoveBase_GetResult_Request * output)
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

la_msgs__action__MoveBase_GetResult_Request *
la_msgs__action__MoveBase_GetResult_Request__create()
{
  la_msgs__action__MoveBase_GetResult_Request * msg = (la_msgs__action__MoveBase_GetResult_Request *)malloc(sizeof(la_msgs__action__MoveBase_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__action__MoveBase_GetResult_Request));
  bool success = la_msgs__action__MoveBase_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__action__MoveBase_GetResult_Request__destroy(la_msgs__action__MoveBase_GetResult_Request * msg)
{
  if (msg) {
    la_msgs__action__MoveBase_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
la_msgs__action__MoveBase_GetResult_Request__Sequence__init(la_msgs__action__MoveBase_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__action__MoveBase_GetResult_Request * data = NULL;
  if (size) {
    data = (la_msgs__action__MoveBase_GetResult_Request *)calloc(size, sizeof(la_msgs__action__MoveBase_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__action__MoveBase_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__action__MoveBase_GetResult_Request__fini(&data[i - 1]);
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
la_msgs__action__MoveBase_GetResult_Request__Sequence__fini(la_msgs__action__MoveBase_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__action__MoveBase_GetResult_Request__fini(&array->data[i]);
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

la_msgs__action__MoveBase_GetResult_Request__Sequence *
la_msgs__action__MoveBase_GetResult_Request__Sequence__create(size_t size)
{
  la_msgs__action__MoveBase_GetResult_Request__Sequence * array = (la_msgs__action__MoveBase_GetResult_Request__Sequence *)malloc(sizeof(la_msgs__action__MoveBase_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__action__MoveBase_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__action__MoveBase_GetResult_Request__Sequence__destroy(la_msgs__action__MoveBase_GetResult_Request__Sequence * array)
{
  if (array) {
    la_msgs__action__MoveBase_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__action__MoveBase_GetResult_Request__Sequence__are_equal(const la_msgs__action__MoveBase_GetResult_Request__Sequence * lhs, const la_msgs__action__MoveBase_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__action__MoveBase_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__action__MoveBase_GetResult_Request__Sequence__copy(
  const la_msgs__action__MoveBase_GetResult_Request__Sequence * input,
  la_msgs__action__MoveBase_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__action__MoveBase_GetResult_Request);
    la_msgs__action__MoveBase_GetResult_Request * data =
      (la_msgs__action__MoveBase_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__action__MoveBase_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__action__MoveBase_GetResult_Request__fini(&data[i]);
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
    if (!la_msgs__action__MoveBase_GetResult_Request__copy(
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
// #include "la_msgs/action/detail/move_base__functions.h"

bool
la_msgs__action__MoveBase_GetResult_Response__init(la_msgs__action__MoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!la_msgs__action__MoveBase_Result__init(&msg->result)) {
    la_msgs__action__MoveBase_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
la_msgs__action__MoveBase_GetResult_Response__fini(la_msgs__action__MoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  la_msgs__action__MoveBase_Result__fini(&msg->result);
}

bool
la_msgs__action__MoveBase_GetResult_Response__are_equal(const la_msgs__action__MoveBase_GetResult_Response * lhs, const la_msgs__action__MoveBase_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!la_msgs__action__MoveBase_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
la_msgs__action__MoveBase_GetResult_Response__copy(
  const la_msgs__action__MoveBase_GetResult_Response * input,
  la_msgs__action__MoveBase_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!la_msgs__action__MoveBase_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

la_msgs__action__MoveBase_GetResult_Response *
la_msgs__action__MoveBase_GetResult_Response__create()
{
  la_msgs__action__MoveBase_GetResult_Response * msg = (la_msgs__action__MoveBase_GetResult_Response *)malloc(sizeof(la_msgs__action__MoveBase_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__action__MoveBase_GetResult_Response));
  bool success = la_msgs__action__MoveBase_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__action__MoveBase_GetResult_Response__destroy(la_msgs__action__MoveBase_GetResult_Response * msg)
{
  if (msg) {
    la_msgs__action__MoveBase_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
la_msgs__action__MoveBase_GetResult_Response__Sequence__init(la_msgs__action__MoveBase_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__action__MoveBase_GetResult_Response * data = NULL;
  if (size) {
    data = (la_msgs__action__MoveBase_GetResult_Response *)calloc(size, sizeof(la_msgs__action__MoveBase_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__action__MoveBase_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__action__MoveBase_GetResult_Response__fini(&data[i - 1]);
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
la_msgs__action__MoveBase_GetResult_Response__Sequence__fini(la_msgs__action__MoveBase_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__action__MoveBase_GetResult_Response__fini(&array->data[i]);
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

la_msgs__action__MoveBase_GetResult_Response__Sequence *
la_msgs__action__MoveBase_GetResult_Response__Sequence__create(size_t size)
{
  la_msgs__action__MoveBase_GetResult_Response__Sequence * array = (la_msgs__action__MoveBase_GetResult_Response__Sequence *)malloc(sizeof(la_msgs__action__MoveBase_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__action__MoveBase_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__action__MoveBase_GetResult_Response__Sequence__destroy(la_msgs__action__MoveBase_GetResult_Response__Sequence * array)
{
  if (array) {
    la_msgs__action__MoveBase_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__action__MoveBase_GetResult_Response__Sequence__are_equal(const la_msgs__action__MoveBase_GetResult_Response__Sequence * lhs, const la_msgs__action__MoveBase_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__action__MoveBase_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__action__MoveBase_GetResult_Response__Sequence__copy(
  const la_msgs__action__MoveBase_GetResult_Response__Sequence * input,
  la_msgs__action__MoveBase_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__action__MoveBase_GetResult_Response);
    la_msgs__action__MoveBase_GetResult_Response * data =
      (la_msgs__action__MoveBase_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__action__MoveBase_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__action__MoveBase_GetResult_Response__fini(&data[i]);
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
    if (!la_msgs__action__MoveBase_GetResult_Response__copy(
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
// #include "la_msgs/action/detail/move_base__functions.h"

bool
la_msgs__action__MoveBase_FeedbackMessage__init(la_msgs__action__MoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    la_msgs__action__MoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!la_msgs__action__MoveBase_Feedback__init(&msg->feedback)) {
    la_msgs__action__MoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
la_msgs__action__MoveBase_FeedbackMessage__fini(la_msgs__action__MoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  la_msgs__action__MoveBase_Feedback__fini(&msg->feedback);
}

bool
la_msgs__action__MoveBase_FeedbackMessage__are_equal(const la_msgs__action__MoveBase_FeedbackMessage * lhs, const la_msgs__action__MoveBase_FeedbackMessage * rhs)
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
  if (!la_msgs__action__MoveBase_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
la_msgs__action__MoveBase_FeedbackMessage__copy(
  const la_msgs__action__MoveBase_FeedbackMessage * input,
  la_msgs__action__MoveBase_FeedbackMessage * output)
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
  if (!la_msgs__action__MoveBase_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

la_msgs__action__MoveBase_FeedbackMessage *
la_msgs__action__MoveBase_FeedbackMessage__create()
{
  la_msgs__action__MoveBase_FeedbackMessage * msg = (la_msgs__action__MoveBase_FeedbackMessage *)malloc(sizeof(la_msgs__action__MoveBase_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__action__MoveBase_FeedbackMessage));
  bool success = la_msgs__action__MoveBase_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__action__MoveBase_FeedbackMessage__destroy(la_msgs__action__MoveBase_FeedbackMessage * msg)
{
  if (msg) {
    la_msgs__action__MoveBase_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
la_msgs__action__MoveBase_FeedbackMessage__Sequence__init(la_msgs__action__MoveBase_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__action__MoveBase_FeedbackMessage * data = NULL;
  if (size) {
    data = (la_msgs__action__MoveBase_FeedbackMessage *)calloc(size, sizeof(la_msgs__action__MoveBase_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__action__MoveBase_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__action__MoveBase_FeedbackMessage__fini(&data[i - 1]);
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
la_msgs__action__MoveBase_FeedbackMessage__Sequence__fini(la_msgs__action__MoveBase_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__action__MoveBase_FeedbackMessage__fini(&array->data[i]);
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

la_msgs__action__MoveBase_FeedbackMessage__Sequence *
la_msgs__action__MoveBase_FeedbackMessage__Sequence__create(size_t size)
{
  la_msgs__action__MoveBase_FeedbackMessage__Sequence * array = (la_msgs__action__MoveBase_FeedbackMessage__Sequence *)malloc(sizeof(la_msgs__action__MoveBase_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__action__MoveBase_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__action__MoveBase_FeedbackMessage__Sequence__destroy(la_msgs__action__MoveBase_FeedbackMessage__Sequence * array)
{
  if (array) {
    la_msgs__action__MoveBase_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__action__MoveBase_FeedbackMessage__Sequence__are_equal(const la_msgs__action__MoveBase_FeedbackMessage__Sequence * lhs, const la_msgs__action__MoveBase_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__action__MoveBase_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__action__MoveBase_FeedbackMessage__Sequence__copy(
  const la_msgs__action__MoveBase_FeedbackMessage__Sequence * input,
  la_msgs__action__MoveBase_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__action__MoveBase_FeedbackMessage);
    la_msgs__action__MoveBase_FeedbackMessage * data =
      (la_msgs__action__MoveBase_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__action__MoveBase_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__action__MoveBase_FeedbackMessage__fini(&data[i]);
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
    if (!la_msgs__action__MoveBase_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
