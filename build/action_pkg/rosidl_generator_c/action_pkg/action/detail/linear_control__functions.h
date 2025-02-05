// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from action_pkg:action/LinearControl.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__FUNCTIONS_H_
#define ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "action_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "action_pkg/action/detail/linear_control__struct.h"

/// Initialize action/LinearControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__LinearControl_Goal
 * )) before or use
 * action_pkg__action__LinearControl_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Goal__init(action_pkg__action__LinearControl_Goal * msg);

/// Finalize action/LinearControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Goal__fini(action_pkg__action__LinearControl_Goal * msg);

/// Create action/LinearControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__LinearControl_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_Goal *
action_pkg__action__LinearControl_Goal__create();

/// Destroy action/LinearControl message.
/**
 * It calls
 * action_pkg__action__LinearControl_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Goal__destroy(action_pkg__action__LinearControl_Goal * msg);

/// Check for action/LinearControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Goal__are_equal(const action_pkg__action__LinearControl_Goal * lhs, const action_pkg__action__LinearControl_Goal * rhs);

/// Copy a action/LinearControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Goal__copy(
  const action_pkg__action__LinearControl_Goal * input,
  action_pkg__action__LinearControl_Goal * output);

/// Initialize array of action/LinearControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__LinearControl_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Goal__Sequence__init(action_pkg__action__LinearControl_Goal__Sequence * array, size_t size);

/// Finalize array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Goal__Sequence__fini(action_pkg__action__LinearControl_Goal__Sequence * array);

/// Create array of action/LinearControl messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__LinearControl_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_Goal__Sequence *
action_pkg__action__LinearControl_Goal__Sequence__create(size_t size);

/// Destroy array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Goal__Sequence__destroy(action_pkg__action__LinearControl_Goal__Sequence * array);

/// Check for action/LinearControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Goal__Sequence__are_equal(const action_pkg__action__LinearControl_Goal__Sequence * lhs, const action_pkg__action__LinearControl_Goal__Sequence * rhs);

/// Copy an array of action/LinearControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Goal__Sequence__copy(
  const action_pkg__action__LinearControl_Goal__Sequence * input,
  action_pkg__action__LinearControl_Goal__Sequence * output);

/// Initialize action/LinearControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__LinearControl_Result
 * )) before or use
 * action_pkg__action__LinearControl_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Result__init(action_pkg__action__LinearControl_Result * msg);

/// Finalize action/LinearControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Result__fini(action_pkg__action__LinearControl_Result * msg);

/// Create action/LinearControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__LinearControl_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_Result *
action_pkg__action__LinearControl_Result__create();

/// Destroy action/LinearControl message.
/**
 * It calls
 * action_pkg__action__LinearControl_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Result__destroy(action_pkg__action__LinearControl_Result * msg);

/// Check for action/LinearControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Result__are_equal(const action_pkg__action__LinearControl_Result * lhs, const action_pkg__action__LinearControl_Result * rhs);

/// Copy a action/LinearControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Result__copy(
  const action_pkg__action__LinearControl_Result * input,
  action_pkg__action__LinearControl_Result * output);

/// Initialize array of action/LinearControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__LinearControl_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Result__Sequence__init(action_pkg__action__LinearControl_Result__Sequence * array, size_t size);

/// Finalize array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Result__Sequence__fini(action_pkg__action__LinearControl_Result__Sequence * array);

/// Create array of action/LinearControl messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__LinearControl_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_Result__Sequence *
action_pkg__action__LinearControl_Result__Sequence__create(size_t size);

/// Destroy array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Result__Sequence__destroy(action_pkg__action__LinearControl_Result__Sequence * array);

/// Check for action/LinearControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Result__Sequence__are_equal(const action_pkg__action__LinearControl_Result__Sequence * lhs, const action_pkg__action__LinearControl_Result__Sequence * rhs);

/// Copy an array of action/LinearControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Result__Sequence__copy(
  const action_pkg__action__LinearControl_Result__Sequence * input,
  action_pkg__action__LinearControl_Result__Sequence * output);

/// Initialize action/LinearControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__LinearControl_Feedback
 * )) before or use
 * action_pkg__action__LinearControl_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Feedback__init(action_pkg__action__LinearControl_Feedback * msg);

/// Finalize action/LinearControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Feedback__fini(action_pkg__action__LinearControl_Feedback * msg);

/// Create action/LinearControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__LinearControl_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_Feedback *
action_pkg__action__LinearControl_Feedback__create();

/// Destroy action/LinearControl message.
/**
 * It calls
 * action_pkg__action__LinearControl_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Feedback__destroy(action_pkg__action__LinearControl_Feedback * msg);

/// Check for action/LinearControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Feedback__are_equal(const action_pkg__action__LinearControl_Feedback * lhs, const action_pkg__action__LinearControl_Feedback * rhs);

/// Copy a action/LinearControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Feedback__copy(
  const action_pkg__action__LinearControl_Feedback * input,
  action_pkg__action__LinearControl_Feedback * output);

/// Initialize array of action/LinearControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__LinearControl_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Feedback__Sequence__init(action_pkg__action__LinearControl_Feedback__Sequence * array, size_t size);

/// Finalize array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Feedback__Sequence__fini(action_pkg__action__LinearControl_Feedback__Sequence * array);

/// Create array of action/LinearControl messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__LinearControl_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_Feedback__Sequence *
action_pkg__action__LinearControl_Feedback__Sequence__create(size_t size);

/// Destroy array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_Feedback__Sequence__destroy(action_pkg__action__LinearControl_Feedback__Sequence * array);

/// Check for action/LinearControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Feedback__Sequence__are_equal(const action_pkg__action__LinearControl_Feedback__Sequence * lhs, const action_pkg__action__LinearControl_Feedback__Sequence * rhs);

/// Copy an array of action/LinearControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_Feedback__Sequence__copy(
  const action_pkg__action__LinearControl_Feedback__Sequence * input,
  action_pkg__action__LinearControl_Feedback__Sequence * output);

/// Initialize action/LinearControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__LinearControl_SendGoal_Request
 * )) before or use
 * action_pkg__action__LinearControl_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Request__init(action_pkg__action__LinearControl_SendGoal_Request * msg);

/// Finalize action/LinearControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_SendGoal_Request__fini(action_pkg__action__LinearControl_SendGoal_Request * msg);

/// Create action/LinearControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__LinearControl_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_SendGoal_Request *
action_pkg__action__LinearControl_SendGoal_Request__create();

/// Destroy action/LinearControl message.
/**
 * It calls
 * action_pkg__action__LinearControl_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_SendGoal_Request__destroy(action_pkg__action__LinearControl_SendGoal_Request * msg);

/// Check for action/LinearControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Request__are_equal(const action_pkg__action__LinearControl_SendGoal_Request * lhs, const action_pkg__action__LinearControl_SendGoal_Request * rhs);

/// Copy a action/LinearControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Request__copy(
  const action_pkg__action__LinearControl_SendGoal_Request * input,
  action_pkg__action__LinearControl_SendGoal_Request * output);

/// Initialize array of action/LinearControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__LinearControl_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Request__Sequence__init(action_pkg__action__LinearControl_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_SendGoal_Request__Sequence__fini(action_pkg__action__LinearControl_SendGoal_Request__Sequence * array);

/// Create array of action/LinearControl messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__LinearControl_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_SendGoal_Request__Sequence *
action_pkg__action__LinearControl_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_SendGoal_Request__Sequence__destroy(action_pkg__action__LinearControl_SendGoal_Request__Sequence * array);

/// Check for action/LinearControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Request__Sequence__are_equal(const action_pkg__action__LinearControl_SendGoal_Request__Sequence * lhs, const action_pkg__action__LinearControl_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/LinearControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Request__Sequence__copy(
  const action_pkg__action__LinearControl_SendGoal_Request__Sequence * input,
  action_pkg__action__LinearControl_SendGoal_Request__Sequence * output);

/// Initialize action/LinearControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__LinearControl_SendGoal_Response
 * )) before or use
 * action_pkg__action__LinearControl_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Response__init(action_pkg__action__LinearControl_SendGoal_Response * msg);

/// Finalize action/LinearControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_SendGoal_Response__fini(action_pkg__action__LinearControl_SendGoal_Response * msg);

/// Create action/LinearControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__LinearControl_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_SendGoal_Response *
action_pkg__action__LinearControl_SendGoal_Response__create();

/// Destroy action/LinearControl message.
/**
 * It calls
 * action_pkg__action__LinearControl_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_SendGoal_Response__destroy(action_pkg__action__LinearControl_SendGoal_Response * msg);

/// Check for action/LinearControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Response__are_equal(const action_pkg__action__LinearControl_SendGoal_Response * lhs, const action_pkg__action__LinearControl_SendGoal_Response * rhs);

/// Copy a action/LinearControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Response__copy(
  const action_pkg__action__LinearControl_SendGoal_Response * input,
  action_pkg__action__LinearControl_SendGoal_Response * output);

/// Initialize array of action/LinearControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__LinearControl_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Response__Sequence__init(action_pkg__action__LinearControl_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_SendGoal_Response__Sequence__fini(action_pkg__action__LinearControl_SendGoal_Response__Sequence * array);

/// Create array of action/LinearControl messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__LinearControl_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_SendGoal_Response__Sequence *
action_pkg__action__LinearControl_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_SendGoal_Response__Sequence__destroy(action_pkg__action__LinearControl_SendGoal_Response__Sequence * array);

/// Check for action/LinearControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Response__Sequence__are_equal(const action_pkg__action__LinearControl_SendGoal_Response__Sequence * lhs, const action_pkg__action__LinearControl_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/LinearControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_SendGoal_Response__Sequence__copy(
  const action_pkg__action__LinearControl_SendGoal_Response__Sequence * input,
  action_pkg__action__LinearControl_SendGoal_Response__Sequence * output);

/// Initialize action/LinearControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__LinearControl_GetResult_Request
 * )) before or use
 * action_pkg__action__LinearControl_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Request__init(action_pkg__action__LinearControl_GetResult_Request * msg);

/// Finalize action/LinearControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_GetResult_Request__fini(action_pkg__action__LinearControl_GetResult_Request * msg);

/// Create action/LinearControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__LinearControl_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_GetResult_Request *
action_pkg__action__LinearControl_GetResult_Request__create();

/// Destroy action/LinearControl message.
/**
 * It calls
 * action_pkg__action__LinearControl_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_GetResult_Request__destroy(action_pkg__action__LinearControl_GetResult_Request * msg);

/// Check for action/LinearControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Request__are_equal(const action_pkg__action__LinearControl_GetResult_Request * lhs, const action_pkg__action__LinearControl_GetResult_Request * rhs);

/// Copy a action/LinearControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Request__copy(
  const action_pkg__action__LinearControl_GetResult_Request * input,
  action_pkg__action__LinearControl_GetResult_Request * output);

/// Initialize array of action/LinearControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__LinearControl_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Request__Sequence__init(action_pkg__action__LinearControl_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_GetResult_Request__Sequence__fini(action_pkg__action__LinearControl_GetResult_Request__Sequence * array);

/// Create array of action/LinearControl messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__LinearControl_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_GetResult_Request__Sequence *
action_pkg__action__LinearControl_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_GetResult_Request__Sequence__destroy(action_pkg__action__LinearControl_GetResult_Request__Sequence * array);

/// Check for action/LinearControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Request__Sequence__are_equal(const action_pkg__action__LinearControl_GetResult_Request__Sequence * lhs, const action_pkg__action__LinearControl_GetResult_Request__Sequence * rhs);

/// Copy an array of action/LinearControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Request__Sequence__copy(
  const action_pkg__action__LinearControl_GetResult_Request__Sequence * input,
  action_pkg__action__LinearControl_GetResult_Request__Sequence * output);

/// Initialize action/LinearControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__LinearControl_GetResult_Response
 * )) before or use
 * action_pkg__action__LinearControl_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Response__init(action_pkg__action__LinearControl_GetResult_Response * msg);

/// Finalize action/LinearControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_GetResult_Response__fini(action_pkg__action__LinearControl_GetResult_Response * msg);

/// Create action/LinearControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__LinearControl_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_GetResult_Response *
action_pkg__action__LinearControl_GetResult_Response__create();

/// Destroy action/LinearControl message.
/**
 * It calls
 * action_pkg__action__LinearControl_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_GetResult_Response__destroy(action_pkg__action__LinearControl_GetResult_Response * msg);

/// Check for action/LinearControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Response__are_equal(const action_pkg__action__LinearControl_GetResult_Response * lhs, const action_pkg__action__LinearControl_GetResult_Response * rhs);

/// Copy a action/LinearControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Response__copy(
  const action_pkg__action__LinearControl_GetResult_Response * input,
  action_pkg__action__LinearControl_GetResult_Response * output);

/// Initialize array of action/LinearControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__LinearControl_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Response__Sequence__init(action_pkg__action__LinearControl_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_GetResult_Response__Sequence__fini(action_pkg__action__LinearControl_GetResult_Response__Sequence * array);

/// Create array of action/LinearControl messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__LinearControl_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_GetResult_Response__Sequence *
action_pkg__action__LinearControl_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_GetResult_Response__Sequence__destroy(action_pkg__action__LinearControl_GetResult_Response__Sequence * array);

/// Check for action/LinearControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Response__Sequence__are_equal(const action_pkg__action__LinearControl_GetResult_Response__Sequence * lhs, const action_pkg__action__LinearControl_GetResult_Response__Sequence * rhs);

/// Copy an array of action/LinearControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_GetResult_Response__Sequence__copy(
  const action_pkg__action__LinearControl_GetResult_Response__Sequence * input,
  action_pkg__action__LinearControl_GetResult_Response__Sequence * output);

/// Initialize action/LinearControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__LinearControl_FeedbackMessage
 * )) before or use
 * action_pkg__action__LinearControl_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_FeedbackMessage__init(action_pkg__action__LinearControl_FeedbackMessage * msg);

/// Finalize action/LinearControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_FeedbackMessage__fini(action_pkg__action__LinearControl_FeedbackMessage * msg);

/// Create action/LinearControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__LinearControl_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_FeedbackMessage *
action_pkg__action__LinearControl_FeedbackMessage__create();

/// Destroy action/LinearControl message.
/**
 * It calls
 * action_pkg__action__LinearControl_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_FeedbackMessage__destroy(action_pkg__action__LinearControl_FeedbackMessage * msg);

/// Check for action/LinearControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_FeedbackMessage__are_equal(const action_pkg__action__LinearControl_FeedbackMessage * lhs, const action_pkg__action__LinearControl_FeedbackMessage * rhs);

/// Copy a action/LinearControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_FeedbackMessage__copy(
  const action_pkg__action__LinearControl_FeedbackMessage * input,
  action_pkg__action__LinearControl_FeedbackMessage * output);

/// Initialize array of action/LinearControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__LinearControl_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_FeedbackMessage__Sequence__init(action_pkg__action__LinearControl_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_FeedbackMessage__Sequence__fini(action_pkg__action__LinearControl_FeedbackMessage__Sequence * array);

/// Create array of action/LinearControl messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__LinearControl_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__LinearControl_FeedbackMessage__Sequence *
action_pkg__action__LinearControl_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/LinearControl messages.
/**
 * It calls
 * action_pkg__action__LinearControl_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__LinearControl_FeedbackMessage__Sequence__destroy(action_pkg__action__LinearControl_FeedbackMessage__Sequence * array);

/// Check for action/LinearControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_FeedbackMessage__Sequence__are_equal(const action_pkg__action__LinearControl_FeedbackMessage__Sequence * lhs, const action_pkg__action__LinearControl_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/LinearControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__LinearControl_FeedbackMessage__Sequence__copy(
  const action_pkg__action__LinearControl_FeedbackMessage__Sequence * input,
  action_pkg__action__LinearControl_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__FUNCTIONS_H_
