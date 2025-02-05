// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from srv_pkg:srv/JointConversion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "srv_pkg/srv/detail/joint_conversion__rosidl_typesupport_introspection_c.h"
#include "srv_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "srv_pkg/srv/detail/joint_conversion__functions.h"
#include "srv_pkg/srv/detail/joint_conversion__struct.h"


// Include directives for member types
// Member `joint_input`
#include "std_msgs/msg/float64.h"
// Member `joint_input`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srv_pkg__srv__JointConversion_Request__init(message_memory);
}

void srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_fini_function(void * message_memory)
{
  srv_pkg__srv__JointConversion_Request__fini(message_memory);
}

size_t srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__size_function__JointConversion_Request__joint_input(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__get_const_function__JointConversion_Request__joint_input(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Float64 * member =
    (const std_msgs__msg__Float64 *)(untyped_member);
  return &member[index];
}

void * srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__get_function__JointConversion_Request__joint_input(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Float64 * member =
    (std_msgs__msg__Float64 *)(untyped_member);
  return &member[index];
}

void srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__fetch_function__JointConversion_Request__joint_input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__Float64 * item =
    ((const std_msgs__msg__Float64 *)
    srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__get_const_function__JointConversion_Request__joint_input(untyped_member, index));
  std_msgs__msg__Float64 * value =
    (std_msgs__msg__Float64 *)(untyped_value);
  *value = *item;
}

void srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__assign_function__JointConversion_Request__joint_input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__Float64 * item =
    ((std_msgs__msg__Float64 *)
    srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__get_function__JointConversion_Request__joint_input(untyped_member, index));
  const std_msgs__msg__Float64 * value =
    (const std_msgs__msg__Float64 *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_member_array[1] = {
  {
    "joint_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(srv_pkg__srv__JointConversion_Request, joint_input),  // bytes offset in struct
    NULL,  // default value
    srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__size_function__JointConversion_Request__joint_input,  // size() function pointer
    srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__get_const_function__JointConversion_Request__joint_input,  // get_const(index) function pointer
    srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__get_function__JointConversion_Request__joint_input,  // get(index) function pointer
    srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__fetch_function__JointConversion_Request__joint_input,  // fetch(index, &value) function pointer
    srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__assign_function__JointConversion_Request__joint_input,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_members = {
  "srv_pkg__srv",  // message namespace
  "JointConversion_Request",  // message name
  1,  // number of fields
  sizeof(srv_pkg__srv__JointConversion_Request),
  srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_member_array,  // message members
  srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_type_support_handle = {
  0,
  &srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, JointConversion_Request)() {
  srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_type_support_handle.typesupport_identifier) {
    srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &srv_pkg__srv__JointConversion_Request__rosidl_typesupport_introspection_c__JointConversion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "srv_pkg/srv/detail/joint_conversion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "srv_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "srv_pkg/srv/detail/joint_conversion__functions.h"
// already included above
// #include "srv_pkg/srv/detail/joint_conversion__struct.h"


// Include directives for member types
// Member `joint_output`
// already included above
// #include "std_msgs/msg/float64.h"
// Member `joint_output`
// already included above
// #include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srv_pkg__srv__JointConversion_Response__init(message_memory);
}

void srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_fini_function(void * message_memory)
{
  srv_pkg__srv__JointConversion_Response__fini(message_memory);
}

size_t srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__size_function__JointConversion_Response__joint_output(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__get_const_function__JointConversion_Response__joint_output(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Float64 * member =
    (const std_msgs__msg__Float64 *)(untyped_member);
  return &member[index];
}

void * srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__get_function__JointConversion_Response__joint_output(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Float64 * member =
    (std_msgs__msg__Float64 *)(untyped_member);
  return &member[index];
}

void srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__fetch_function__JointConversion_Response__joint_output(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__Float64 * item =
    ((const std_msgs__msg__Float64 *)
    srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__get_const_function__JointConversion_Response__joint_output(untyped_member, index));
  std_msgs__msg__Float64 * value =
    (std_msgs__msg__Float64 *)(untyped_value);
  *value = *item;
}

void srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__assign_function__JointConversion_Response__joint_output(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__Float64 * item =
    ((std_msgs__msg__Float64 *)
    srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__get_function__JointConversion_Response__joint_output(untyped_member, index));
  const std_msgs__msg__Float64 * value =
    (const std_msgs__msg__Float64 *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_member_array[1] = {
  {
    "joint_output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(srv_pkg__srv__JointConversion_Response, joint_output),  // bytes offset in struct
    NULL,  // default value
    srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__size_function__JointConversion_Response__joint_output,  // size() function pointer
    srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__get_const_function__JointConversion_Response__joint_output,  // get_const(index) function pointer
    srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__get_function__JointConversion_Response__joint_output,  // get(index) function pointer
    srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__fetch_function__JointConversion_Response__joint_output,  // fetch(index, &value) function pointer
    srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__assign_function__JointConversion_Response__joint_output,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_members = {
  "srv_pkg__srv",  // message namespace
  "JointConversion_Response",  // message name
  1,  // number of fields
  sizeof(srv_pkg__srv__JointConversion_Response),
  srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_member_array,  // message members
  srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_type_support_handle = {
  0,
  &srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, JointConversion_Response)() {
  srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_type_support_handle.typesupport_identifier) {
    srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &srv_pkg__srv__JointConversion_Response__rosidl_typesupport_introspection_c__JointConversion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "srv_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "srv_pkg/srv/detail/joint_conversion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_service_members = {
  "srv_pkg__srv",  // service namespace
  "JointConversion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_Request_message_type_support_handle,
  NULL  // response message
  // srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_Response_message_type_support_handle
};

static rosidl_service_type_support_t srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_service_type_support_handle = {
  0,
  &srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, JointConversion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, JointConversion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, JointConversion)() {
  if (!srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_service_type_support_handle.typesupport_identifier) {
    srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, JointConversion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, JointConversion_Response)()->data;
  }

  return &srv_pkg__srv__detail__joint_conversion__rosidl_typesupport_introspection_c__JointConversion_service_type_support_handle;
}
