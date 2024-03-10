// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from me326_project:action/MoveBase.idl
// generated code does not contain a copyright notice

#ifndef ME326_PROJECT__ACTION__DETAIL__MOVE_BASE__FUNCTIONS_H_
#define ME326_PROJECT__ACTION__DETAIL__MOVE_BASE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "me326_project/msg/rosidl_generator_c__visibility_control.h"

#include "me326_project/action/detail/move_base__struct.h"

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * me326_project__action__MoveBase_Goal
 * )) before or use
 * me326_project__action__MoveBase_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Goal__init(me326_project__action__MoveBase_Goal * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Goal__fini(me326_project__action__MoveBase_Goal * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * me326_project__action__MoveBase_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_Goal *
me326_project__action__MoveBase_Goal__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * me326_project__action__MoveBase_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Goal__destroy(me326_project__action__MoveBase_Goal * msg);

/// Check for action/MoveBase message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Goal__are_equal(const me326_project__action__MoveBase_Goal * lhs, const me326_project__action__MoveBase_Goal * rhs);

/// Copy a action/MoveBase message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Goal__copy(
  const me326_project__action__MoveBase_Goal * input,
  me326_project__action__MoveBase_Goal * output);

/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * me326_project__action__MoveBase_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Goal__Sequence__init(me326_project__action__MoveBase_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Goal__Sequence__fini(me326_project__action__MoveBase_Goal__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * me326_project__action__MoveBase_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_Goal__Sequence *
me326_project__action__MoveBase_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Goal__Sequence__destroy(me326_project__action__MoveBase_Goal__Sequence * array);

/// Check for action/MoveBase message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Goal__Sequence__are_equal(const me326_project__action__MoveBase_Goal__Sequence * lhs, const me326_project__action__MoveBase_Goal__Sequence * rhs);

/// Copy an array of action/MoveBase messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Goal__Sequence__copy(
  const me326_project__action__MoveBase_Goal__Sequence * input,
  me326_project__action__MoveBase_Goal__Sequence * output);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * me326_project__action__MoveBase_Result
 * )) before or use
 * me326_project__action__MoveBase_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Result__init(me326_project__action__MoveBase_Result * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Result__fini(me326_project__action__MoveBase_Result * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * me326_project__action__MoveBase_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_Result *
me326_project__action__MoveBase_Result__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * me326_project__action__MoveBase_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Result__destroy(me326_project__action__MoveBase_Result * msg);

/// Check for action/MoveBase message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Result__are_equal(const me326_project__action__MoveBase_Result * lhs, const me326_project__action__MoveBase_Result * rhs);

/// Copy a action/MoveBase message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Result__copy(
  const me326_project__action__MoveBase_Result * input,
  me326_project__action__MoveBase_Result * output);

/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * me326_project__action__MoveBase_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Result__Sequence__init(me326_project__action__MoveBase_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Result__Sequence__fini(me326_project__action__MoveBase_Result__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * me326_project__action__MoveBase_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_Result__Sequence *
me326_project__action__MoveBase_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Result__Sequence__destroy(me326_project__action__MoveBase_Result__Sequence * array);

/// Check for action/MoveBase message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Result__Sequence__are_equal(const me326_project__action__MoveBase_Result__Sequence * lhs, const me326_project__action__MoveBase_Result__Sequence * rhs);

/// Copy an array of action/MoveBase messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Result__Sequence__copy(
  const me326_project__action__MoveBase_Result__Sequence * input,
  me326_project__action__MoveBase_Result__Sequence * output);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * me326_project__action__MoveBase_Feedback
 * )) before or use
 * me326_project__action__MoveBase_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Feedback__init(me326_project__action__MoveBase_Feedback * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Feedback__fini(me326_project__action__MoveBase_Feedback * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * me326_project__action__MoveBase_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_Feedback *
me326_project__action__MoveBase_Feedback__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * me326_project__action__MoveBase_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Feedback__destroy(me326_project__action__MoveBase_Feedback * msg);

/// Check for action/MoveBase message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Feedback__are_equal(const me326_project__action__MoveBase_Feedback * lhs, const me326_project__action__MoveBase_Feedback * rhs);

/// Copy a action/MoveBase message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Feedback__copy(
  const me326_project__action__MoveBase_Feedback * input,
  me326_project__action__MoveBase_Feedback * output);

/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * me326_project__action__MoveBase_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Feedback__Sequence__init(me326_project__action__MoveBase_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Feedback__Sequence__fini(me326_project__action__MoveBase_Feedback__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * me326_project__action__MoveBase_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_Feedback__Sequence *
me326_project__action__MoveBase_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_Feedback__Sequence__destroy(me326_project__action__MoveBase_Feedback__Sequence * array);

/// Check for action/MoveBase message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Feedback__Sequence__are_equal(const me326_project__action__MoveBase_Feedback__Sequence * lhs, const me326_project__action__MoveBase_Feedback__Sequence * rhs);

/// Copy an array of action/MoveBase messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_Feedback__Sequence__copy(
  const me326_project__action__MoveBase_Feedback__Sequence * input,
  me326_project__action__MoveBase_Feedback__Sequence * output);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * me326_project__action__MoveBase_SendGoal_Request
 * )) before or use
 * me326_project__action__MoveBase_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Request__init(me326_project__action__MoveBase_SendGoal_Request * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_SendGoal_Request__fini(me326_project__action__MoveBase_SendGoal_Request * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * me326_project__action__MoveBase_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_SendGoal_Request *
me326_project__action__MoveBase_SendGoal_Request__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * me326_project__action__MoveBase_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_SendGoal_Request__destroy(me326_project__action__MoveBase_SendGoal_Request * msg);

/// Check for action/MoveBase message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Request__are_equal(const me326_project__action__MoveBase_SendGoal_Request * lhs, const me326_project__action__MoveBase_SendGoal_Request * rhs);

/// Copy a action/MoveBase message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Request__copy(
  const me326_project__action__MoveBase_SendGoal_Request * input,
  me326_project__action__MoveBase_SendGoal_Request * output);

/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * me326_project__action__MoveBase_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Request__Sequence__init(me326_project__action__MoveBase_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_SendGoal_Request__Sequence__fini(me326_project__action__MoveBase_SendGoal_Request__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * me326_project__action__MoveBase_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_SendGoal_Request__Sequence *
me326_project__action__MoveBase_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_SendGoal_Request__Sequence__destroy(me326_project__action__MoveBase_SendGoal_Request__Sequence * array);

/// Check for action/MoveBase message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Request__Sequence__are_equal(const me326_project__action__MoveBase_SendGoal_Request__Sequence * lhs, const me326_project__action__MoveBase_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveBase messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Request__Sequence__copy(
  const me326_project__action__MoveBase_SendGoal_Request__Sequence * input,
  me326_project__action__MoveBase_SendGoal_Request__Sequence * output);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * me326_project__action__MoveBase_SendGoal_Response
 * )) before or use
 * me326_project__action__MoveBase_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Response__init(me326_project__action__MoveBase_SendGoal_Response * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_SendGoal_Response__fini(me326_project__action__MoveBase_SendGoal_Response * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * me326_project__action__MoveBase_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_SendGoal_Response *
me326_project__action__MoveBase_SendGoal_Response__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * me326_project__action__MoveBase_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_SendGoal_Response__destroy(me326_project__action__MoveBase_SendGoal_Response * msg);

/// Check for action/MoveBase message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Response__are_equal(const me326_project__action__MoveBase_SendGoal_Response * lhs, const me326_project__action__MoveBase_SendGoal_Response * rhs);

/// Copy a action/MoveBase message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Response__copy(
  const me326_project__action__MoveBase_SendGoal_Response * input,
  me326_project__action__MoveBase_SendGoal_Response * output);

/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * me326_project__action__MoveBase_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Response__Sequence__init(me326_project__action__MoveBase_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_SendGoal_Response__Sequence__fini(me326_project__action__MoveBase_SendGoal_Response__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * me326_project__action__MoveBase_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_SendGoal_Response__Sequence *
me326_project__action__MoveBase_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_SendGoal_Response__Sequence__destroy(me326_project__action__MoveBase_SendGoal_Response__Sequence * array);

/// Check for action/MoveBase message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Response__Sequence__are_equal(const me326_project__action__MoveBase_SendGoal_Response__Sequence * lhs, const me326_project__action__MoveBase_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveBase messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_SendGoal_Response__Sequence__copy(
  const me326_project__action__MoveBase_SendGoal_Response__Sequence * input,
  me326_project__action__MoveBase_SendGoal_Response__Sequence * output);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * me326_project__action__MoveBase_GetResult_Request
 * )) before or use
 * me326_project__action__MoveBase_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Request__init(me326_project__action__MoveBase_GetResult_Request * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_GetResult_Request__fini(me326_project__action__MoveBase_GetResult_Request * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * me326_project__action__MoveBase_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_GetResult_Request *
me326_project__action__MoveBase_GetResult_Request__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * me326_project__action__MoveBase_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_GetResult_Request__destroy(me326_project__action__MoveBase_GetResult_Request * msg);

/// Check for action/MoveBase message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Request__are_equal(const me326_project__action__MoveBase_GetResult_Request * lhs, const me326_project__action__MoveBase_GetResult_Request * rhs);

/// Copy a action/MoveBase message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Request__copy(
  const me326_project__action__MoveBase_GetResult_Request * input,
  me326_project__action__MoveBase_GetResult_Request * output);

/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * me326_project__action__MoveBase_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Request__Sequence__init(me326_project__action__MoveBase_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_GetResult_Request__Sequence__fini(me326_project__action__MoveBase_GetResult_Request__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * me326_project__action__MoveBase_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_GetResult_Request__Sequence *
me326_project__action__MoveBase_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_GetResult_Request__Sequence__destroy(me326_project__action__MoveBase_GetResult_Request__Sequence * array);

/// Check for action/MoveBase message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Request__Sequence__are_equal(const me326_project__action__MoveBase_GetResult_Request__Sequence * lhs, const me326_project__action__MoveBase_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveBase messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Request__Sequence__copy(
  const me326_project__action__MoveBase_GetResult_Request__Sequence * input,
  me326_project__action__MoveBase_GetResult_Request__Sequence * output);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * me326_project__action__MoveBase_GetResult_Response
 * )) before or use
 * me326_project__action__MoveBase_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Response__init(me326_project__action__MoveBase_GetResult_Response * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_GetResult_Response__fini(me326_project__action__MoveBase_GetResult_Response * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * me326_project__action__MoveBase_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_GetResult_Response *
me326_project__action__MoveBase_GetResult_Response__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * me326_project__action__MoveBase_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_GetResult_Response__destroy(me326_project__action__MoveBase_GetResult_Response * msg);

/// Check for action/MoveBase message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Response__are_equal(const me326_project__action__MoveBase_GetResult_Response * lhs, const me326_project__action__MoveBase_GetResult_Response * rhs);

/// Copy a action/MoveBase message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Response__copy(
  const me326_project__action__MoveBase_GetResult_Response * input,
  me326_project__action__MoveBase_GetResult_Response * output);

/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * me326_project__action__MoveBase_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Response__Sequence__init(me326_project__action__MoveBase_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_GetResult_Response__Sequence__fini(me326_project__action__MoveBase_GetResult_Response__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * me326_project__action__MoveBase_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_GetResult_Response__Sequence *
me326_project__action__MoveBase_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_GetResult_Response__Sequence__destroy(me326_project__action__MoveBase_GetResult_Response__Sequence * array);

/// Check for action/MoveBase message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Response__Sequence__are_equal(const me326_project__action__MoveBase_GetResult_Response__Sequence * lhs, const me326_project__action__MoveBase_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveBase messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_GetResult_Response__Sequence__copy(
  const me326_project__action__MoveBase_GetResult_Response__Sequence * input,
  me326_project__action__MoveBase_GetResult_Response__Sequence * output);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * me326_project__action__MoveBase_FeedbackMessage
 * )) before or use
 * me326_project__action__MoveBase_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_FeedbackMessage__init(me326_project__action__MoveBase_FeedbackMessage * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_FeedbackMessage__fini(me326_project__action__MoveBase_FeedbackMessage * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * me326_project__action__MoveBase_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_FeedbackMessage *
me326_project__action__MoveBase_FeedbackMessage__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * me326_project__action__MoveBase_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_FeedbackMessage__destroy(me326_project__action__MoveBase_FeedbackMessage * msg);

/// Check for action/MoveBase message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_FeedbackMessage__are_equal(const me326_project__action__MoveBase_FeedbackMessage * lhs, const me326_project__action__MoveBase_FeedbackMessage * rhs);

/// Copy a action/MoveBase message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_FeedbackMessage__copy(
  const me326_project__action__MoveBase_FeedbackMessage * input,
  me326_project__action__MoveBase_FeedbackMessage * output);

/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * me326_project__action__MoveBase_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_FeedbackMessage__Sequence__init(me326_project__action__MoveBase_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_FeedbackMessage__Sequence__fini(me326_project__action__MoveBase_FeedbackMessage__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * me326_project__action__MoveBase_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
me326_project__action__MoveBase_FeedbackMessage__Sequence *
me326_project__action__MoveBase_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * me326_project__action__MoveBase_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
void
me326_project__action__MoveBase_FeedbackMessage__Sequence__destroy(me326_project__action__MoveBase_FeedbackMessage__Sequence * array);

/// Check for action/MoveBase message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_FeedbackMessage__Sequence__are_equal(const me326_project__action__MoveBase_FeedbackMessage__Sequence * lhs, const me326_project__action__MoveBase_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveBase messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_me326_project
bool
me326_project__action__MoveBase_FeedbackMessage__Sequence__copy(
  const me326_project__action__MoveBase_FeedbackMessage__Sequence * input,
  me326_project__action__MoveBase_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ME326_PROJECT__ACTION__DETAIL__MOVE_BASE__FUNCTIONS_H_