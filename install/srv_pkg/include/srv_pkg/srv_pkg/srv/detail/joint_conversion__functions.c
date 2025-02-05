// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from srv_pkg:srv/JointConversion.idl
// generated code does not contain a copyright notice
#include "srv_pkg/srv/detail/joint_conversion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `joint_input`
#include "std_msgs/msg/detail/float64__functions.h"

bool
srv_pkg__srv__JointConversion_Request__init(srv_pkg__srv__JointConversion_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint_input
  for (size_t i = 0; i < 7; ++i) {
    if (!std_msgs__msg__Float64__init(&msg->joint_input[i])) {
      srv_pkg__srv__JointConversion_Request__fini(msg);
      return false;
    }
  }
  return true;
}

void
srv_pkg__srv__JointConversion_Request__fini(srv_pkg__srv__JointConversion_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint_input
  for (size_t i = 0; i < 7; ++i) {
    std_msgs__msg__Float64__fini(&msg->joint_input[i]);
  }
}

bool
srv_pkg__srv__JointConversion_Request__are_equal(const srv_pkg__srv__JointConversion_Request * lhs, const srv_pkg__srv__JointConversion_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_input
  for (size_t i = 0; i < 7; ++i) {
    if (!std_msgs__msg__Float64__are_equal(
        &(lhs->joint_input[i]), &(rhs->joint_input[i])))
    {
      return false;
    }
  }
  return true;
}

bool
srv_pkg__srv__JointConversion_Request__copy(
  const srv_pkg__srv__JointConversion_Request * input,
  srv_pkg__srv__JointConversion_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_input
  for (size_t i = 0; i < 7; ++i) {
    if (!std_msgs__msg__Float64__copy(
        &(input->joint_input[i]), &(output->joint_input[i])))
    {
      return false;
    }
  }
  return true;
}

srv_pkg__srv__JointConversion_Request *
srv_pkg__srv__JointConversion_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__JointConversion_Request * msg = (srv_pkg__srv__JointConversion_Request *)allocator.allocate(sizeof(srv_pkg__srv__JointConversion_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_pkg__srv__JointConversion_Request));
  bool success = srv_pkg__srv__JointConversion_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srv_pkg__srv__JointConversion_Request__destroy(srv_pkg__srv__JointConversion_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srv_pkg__srv__JointConversion_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srv_pkg__srv__JointConversion_Request__Sequence__init(srv_pkg__srv__JointConversion_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__JointConversion_Request * data = NULL;

  if (size) {
    data = (srv_pkg__srv__JointConversion_Request *)allocator.zero_allocate(size, sizeof(srv_pkg__srv__JointConversion_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_pkg__srv__JointConversion_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_pkg__srv__JointConversion_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
srv_pkg__srv__JointConversion_Request__Sequence__fini(srv_pkg__srv__JointConversion_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_pkg__srv__JointConversion_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

srv_pkg__srv__JointConversion_Request__Sequence *
srv_pkg__srv__JointConversion_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__JointConversion_Request__Sequence * array = (srv_pkg__srv__JointConversion_Request__Sequence *)allocator.allocate(sizeof(srv_pkg__srv__JointConversion_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srv_pkg__srv__JointConversion_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srv_pkg__srv__JointConversion_Request__Sequence__destroy(srv_pkg__srv__JointConversion_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srv_pkg__srv__JointConversion_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srv_pkg__srv__JointConversion_Request__Sequence__are_equal(const srv_pkg__srv__JointConversion_Request__Sequence * lhs, const srv_pkg__srv__JointConversion_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srv_pkg__srv__JointConversion_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srv_pkg__srv__JointConversion_Request__Sequence__copy(
  const srv_pkg__srv__JointConversion_Request__Sequence * input,
  srv_pkg__srv__JointConversion_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(srv_pkg__srv__JointConversion_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srv_pkg__srv__JointConversion_Request * data =
      (srv_pkg__srv__JointConversion_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srv_pkg__srv__JointConversion_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srv_pkg__srv__JointConversion_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srv_pkg__srv__JointConversion_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_output`
// already included above
// #include "std_msgs/msg/detail/float64__functions.h"

bool
srv_pkg__srv__JointConversion_Response__init(srv_pkg__srv__JointConversion_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint_output
  for (size_t i = 0; i < 7; ++i) {
    if (!std_msgs__msg__Float64__init(&msg->joint_output[i])) {
      srv_pkg__srv__JointConversion_Response__fini(msg);
      return false;
    }
  }
  return true;
}

void
srv_pkg__srv__JointConversion_Response__fini(srv_pkg__srv__JointConversion_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint_output
  for (size_t i = 0; i < 7; ++i) {
    std_msgs__msg__Float64__fini(&msg->joint_output[i]);
  }
}

bool
srv_pkg__srv__JointConversion_Response__are_equal(const srv_pkg__srv__JointConversion_Response * lhs, const srv_pkg__srv__JointConversion_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_output
  for (size_t i = 0; i < 7; ++i) {
    if (!std_msgs__msg__Float64__are_equal(
        &(lhs->joint_output[i]), &(rhs->joint_output[i])))
    {
      return false;
    }
  }
  return true;
}

bool
srv_pkg__srv__JointConversion_Response__copy(
  const srv_pkg__srv__JointConversion_Response * input,
  srv_pkg__srv__JointConversion_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_output
  for (size_t i = 0; i < 7; ++i) {
    if (!std_msgs__msg__Float64__copy(
        &(input->joint_output[i]), &(output->joint_output[i])))
    {
      return false;
    }
  }
  return true;
}

srv_pkg__srv__JointConversion_Response *
srv_pkg__srv__JointConversion_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__JointConversion_Response * msg = (srv_pkg__srv__JointConversion_Response *)allocator.allocate(sizeof(srv_pkg__srv__JointConversion_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_pkg__srv__JointConversion_Response));
  bool success = srv_pkg__srv__JointConversion_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srv_pkg__srv__JointConversion_Response__destroy(srv_pkg__srv__JointConversion_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srv_pkg__srv__JointConversion_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srv_pkg__srv__JointConversion_Response__Sequence__init(srv_pkg__srv__JointConversion_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__JointConversion_Response * data = NULL;

  if (size) {
    data = (srv_pkg__srv__JointConversion_Response *)allocator.zero_allocate(size, sizeof(srv_pkg__srv__JointConversion_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_pkg__srv__JointConversion_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_pkg__srv__JointConversion_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
srv_pkg__srv__JointConversion_Response__Sequence__fini(srv_pkg__srv__JointConversion_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_pkg__srv__JointConversion_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

srv_pkg__srv__JointConversion_Response__Sequence *
srv_pkg__srv__JointConversion_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__JointConversion_Response__Sequence * array = (srv_pkg__srv__JointConversion_Response__Sequence *)allocator.allocate(sizeof(srv_pkg__srv__JointConversion_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srv_pkg__srv__JointConversion_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srv_pkg__srv__JointConversion_Response__Sequence__destroy(srv_pkg__srv__JointConversion_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srv_pkg__srv__JointConversion_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srv_pkg__srv__JointConversion_Response__Sequence__are_equal(const srv_pkg__srv__JointConversion_Response__Sequence * lhs, const srv_pkg__srv__JointConversion_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srv_pkg__srv__JointConversion_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srv_pkg__srv__JointConversion_Response__Sequence__copy(
  const srv_pkg__srv__JointConversion_Response__Sequence * input,
  srv_pkg__srv__JointConversion_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(srv_pkg__srv__JointConversion_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srv_pkg__srv__JointConversion_Response * data =
      (srv_pkg__srv__JointConversion_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srv_pkg__srv__JointConversion_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srv_pkg__srv__JointConversion_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srv_pkg__srv__JointConversion_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
