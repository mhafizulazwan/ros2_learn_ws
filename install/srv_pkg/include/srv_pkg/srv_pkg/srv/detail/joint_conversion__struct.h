// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv_pkg:srv/JointConversion.idl
// generated code does not contain a copyright notice

#ifndef SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__STRUCT_H_
#define SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_input'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in srv/JointConversion in the package srv_pkg.
typedef struct srv_pkg__srv__JointConversion_Request
{
  std_msgs__msg__Float64 joint_input[7];
} srv_pkg__srv__JointConversion_Request;

// Struct for a sequence of srv_pkg__srv__JointConversion_Request.
typedef struct srv_pkg__srv__JointConversion_Request__Sequence
{
  srv_pkg__srv__JointConversion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_pkg__srv__JointConversion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_output'
// already included above
// #include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in srv/JointConversion in the package srv_pkg.
typedef struct srv_pkg__srv__JointConversion_Response
{
  std_msgs__msg__Float64 joint_output[7];
} srv_pkg__srv__JointConversion_Response;

// Struct for a sequence of srv_pkg__srv__JointConversion_Response.
typedef struct srv_pkg__srv__JointConversion_Response__Sequence
{
  srv_pkg__srv__JointConversion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_pkg__srv__JointConversion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__STRUCT_H_
