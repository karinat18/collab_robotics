// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice
#include "la_msgs/srv/detail/ptps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `desired_frame`
#include "rosidl_runtime_c/string_functions.h"

bool
la_msgs__srv__Ptps_Request__init(la_msgs__srv__Ptps_Request * msg)
{
  if (!msg) {
    return false;
  }
  // desired_frame
  if (!rosidl_runtime_c__String__init(&msg->desired_frame)) {
    la_msgs__srv__Ptps_Request__fini(msg);
    return false;
  }
  return true;
}

void
la_msgs__srv__Ptps_Request__fini(la_msgs__srv__Ptps_Request * msg)
{
  if (!msg) {
    return;
  }
  // desired_frame
  rosidl_runtime_c__String__fini(&msg->desired_frame);
}

bool
la_msgs__srv__Ptps_Request__are_equal(const la_msgs__srv__Ptps_Request * lhs, const la_msgs__srv__Ptps_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // desired_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->desired_frame), &(rhs->desired_frame)))
  {
    return false;
  }
  return true;
}

bool
la_msgs__srv__Ptps_Request__copy(
  const la_msgs__srv__Ptps_Request * input,
  la_msgs__srv__Ptps_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // desired_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->desired_frame), &(output->desired_frame)))
  {
    return false;
  }
  return true;
}

la_msgs__srv__Ptps_Request *
la_msgs__srv__Ptps_Request__create()
{
  la_msgs__srv__Ptps_Request * msg = (la_msgs__srv__Ptps_Request *)malloc(sizeof(la_msgs__srv__Ptps_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__srv__Ptps_Request));
  bool success = la_msgs__srv__Ptps_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__srv__Ptps_Request__destroy(la_msgs__srv__Ptps_Request * msg)
{
  if (msg) {
    la_msgs__srv__Ptps_Request__fini(msg);
  }
  free(msg);
}


bool
la_msgs__srv__Ptps_Request__Sequence__init(la_msgs__srv__Ptps_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__srv__Ptps_Request * data = NULL;
  if (size) {
    data = (la_msgs__srv__Ptps_Request *)calloc(size, sizeof(la_msgs__srv__Ptps_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__srv__Ptps_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__srv__Ptps_Request__fini(&data[i - 1]);
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
la_msgs__srv__Ptps_Request__Sequence__fini(la_msgs__srv__Ptps_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__srv__Ptps_Request__fini(&array->data[i]);
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

la_msgs__srv__Ptps_Request__Sequence *
la_msgs__srv__Ptps_Request__Sequence__create(size_t size)
{
  la_msgs__srv__Ptps_Request__Sequence * array = (la_msgs__srv__Ptps_Request__Sequence *)malloc(sizeof(la_msgs__srv__Ptps_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__srv__Ptps_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__srv__Ptps_Request__Sequence__destroy(la_msgs__srv__Ptps_Request__Sequence * array)
{
  if (array) {
    la_msgs__srv__Ptps_Request__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__srv__Ptps_Request__Sequence__are_equal(const la_msgs__srv__Ptps_Request__Sequence * lhs, const la_msgs__srv__Ptps_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__srv__Ptps_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__srv__Ptps_Request__Sequence__copy(
  const la_msgs__srv__Ptps_Request__Sequence * input,
  la_msgs__srv__Ptps_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__srv__Ptps_Request);
    la_msgs__srv__Ptps_Request * data =
      (la_msgs__srv__Ptps_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__srv__Ptps_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__srv__Ptps_Request__fini(&data[i]);
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
    if (!la_msgs__srv__Ptps_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `red_points`
// Member `blue_points`
// Member `yellow_points`
// Member `green_points`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"

bool
la_msgs__srv__Ptps_Response__init(la_msgs__srv__Ptps_Response * msg)
{
  if (!msg) {
    return false;
  }
  // red_present
  // blue_present
  // yellow_present
  // green_present
  // red_points
  if (!geometry_msgs__msg__PointStamped__Sequence__init(&msg->red_points, 0)) {
    la_msgs__srv__Ptps_Response__fini(msg);
    return false;
  }
  // blue_points
  if (!geometry_msgs__msg__PointStamped__Sequence__init(&msg->blue_points, 0)) {
    la_msgs__srv__Ptps_Response__fini(msg);
    return false;
  }
  // yellow_points
  if (!geometry_msgs__msg__PointStamped__Sequence__init(&msg->yellow_points, 0)) {
    la_msgs__srv__Ptps_Response__fini(msg);
    return false;
  }
  // green_points
  if (!geometry_msgs__msg__PointStamped__Sequence__init(&msg->green_points, 0)) {
    la_msgs__srv__Ptps_Response__fini(msg);
    return false;
  }
  return true;
}

void
la_msgs__srv__Ptps_Response__fini(la_msgs__srv__Ptps_Response * msg)
{
  if (!msg) {
    return;
  }
  // red_present
  // blue_present
  // yellow_present
  // green_present
  // red_points
  geometry_msgs__msg__PointStamped__Sequence__fini(&msg->red_points);
  // blue_points
  geometry_msgs__msg__PointStamped__Sequence__fini(&msg->blue_points);
  // yellow_points
  geometry_msgs__msg__PointStamped__Sequence__fini(&msg->yellow_points);
  // green_points
  geometry_msgs__msg__PointStamped__Sequence__fini(&msg->green_points);
}

bool
la_msgs__srv__Ptps_Response__are_equal(const la_msgs__srv__Ptps_Response * lhs, const la_msgs__srv__Ptps_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red_present
  if (lhs->red_present != rhs->red_present) {
    return false;
  }
  // blue_present
  if (lhs->blue_present != rhs->blue_present) {
    return false;
  }
  // yellow_present
  if (lhs->yellow_present != rhs->yellow_present) {
    return false;
  }
  // green_present
  if (lhs->green_present != rhs->green_present) {
    return false;
  }
  // red_points
  if (!geometry_msgs__msg__PointStamped__Sequence__are_equal(
      &(lhs->red_points), &(rhs->red_points)))
  {
    return false;
  }
  // blue_points
  if (!geometry_msgs__msg__PointStamped__Sequence__are_equal(
      &(lhs->blue_points), &(rhs->blue_points)))
  {
    return false;
  }
  // yellow_points
  if (!geometry_msgs__msg__PointStamped__Sequence__are_equal(
      &(lhs->yellow_points), &(rhs->yellow_points)))
  {
    return false;
  }
  // green_points
  if (!geometry_msgs__msg__PointStamped__Sequence__are_equal(
      &(lhs->green_points), &(rhs->green_points)))
  {
    return false;
  }
  return true;
}

bool
la_msgs__srv__Ptps_Response__copy(
  const la_msgs__srv__Ptps_Response * input,
  la_msgs__srv__Ptps_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // red_present
  output->red_present = input->red_present;
  // blue_present
  output->blue_present = input->blue_present;
  // yellow_present
  output->yellow_present = input->yellow_present;
  // green_present
  output->green_present = input->green_present;
  // red_points
  if (!geometry_msgs__msg__PointStamped__Sequence__copy(
      &(input->red_points), &(output->red_points)))
  {
    return false;
  }
  // blue_points
  if (!geometry_msgs__msg__PointStamped__Sequence__copy(
      &(input->blue_points), &(output->blue_points)))
  {
    return false;
  }
  // yellow_points
  if (!geometry_msgs__msg__PointStamped__Sequence__copy(
      &(input->yellow_points), &(output->yellow_points)))
  {
    return false;
  }
  // green_points
  if (!geometry_msgs__msg__PointStamped__Sequence__copy(
      &(input->green_points), &(output->green_points)))
  {
    return false;
  }
  return true;
}

la_msgs__srv__Ptps_Response *
la_msgs__srv__Ptps_Response__create()
{
  la_msgs__srv__Ptps_Response * msg = (la_msgs__srv__Ptps_Response *)malloc(sizeof(la_msgs__srv__Ptps_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(la_msgs__srv__Ptps_Response));
  bool success = la_msgs__srv__Ptps_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
la_msgs__srv__Ptps_Response__destroy(la_msgs__srv__Ptps_Response * msg)
{
  if (msg) {
    la_msgs__srv__Ptps_Response__fini(msg);
  }
  free(msg);
}


bool
la_msgs__srv__Ptps_Response__Sequence__init(la_msgs__srv__Ptps_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  la_msgs__srv__Ptps_Response * data = NULL;
  if (size) {
    data = (la_msgs__srv__Ptps_Response *)calloc(size, sizeof(la_msgs__srv__Ptps_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = la_msgs__srv__Ptps_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        la_msgs__srv__Ptps_Response__fini(&data[i - 1]);
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
la_msgs__srv__Ptps_Response__Sequence__fini(la_msgs__srv__Ptps_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      la_msgs__srv__Ptps_Response__fini(&array->data[i]);
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

la_msgs__srv__Ptps_Response__Sequence *
la_msgs__srv__Ptps_Response__Sequence__create(size_t size)
{
  la_msgs__srv__Ptps_Response__Sequence * array = (la_msgs__srv__Ptps_Response__Sequence *)malloc(sizeof(la_msgs__srv__Ptps_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = la_msgs__srv__Ptps_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
la_msgs__srv__Ptps_Response__Sequence__destroy(la_msgs__srv__Ptps_Response__Sequence * array)
{
  if (array) {
    la_msgs__srv__Ptps_Response__Sequence__fini(array);
  }
  free(array);
}

bool
la_msgs__srv__Ptps_Response__Sequence__are_equal(const la_msgs__srv__Ptps_Response__Sequence * lhs, const la_msgs__srv__Ptps_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!la_msgs__srv__Ptps_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
la_msgs__srv__Ptps_Response__Sequence__copy(
  const la_msgs__srv__Ptps_Response__Sequence * input,
  la_msgs__srv__Ptps_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(la_msgs__srv__Ptps_Response);
    la_msgs__srv__Ptps_Response * data =
      (la_msgs__srv__Ptps_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!la_msgs__srv__Ptps_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          la_msgs__srv__Ptps_Response__fini(&data[i]);
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
    if (!la_msgs__srv__Ptps_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
