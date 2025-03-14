// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from srv_pkg:srv/JointConversion.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "srv_pkg/srv/detail/joint_conversion__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace srv_pkg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void JointConversion_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) srv_pkg::srv::JointConversion_Request(_init);
}

void JointConversion_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<srv_pkg::srv::JointConversion_Request *>(message_memory);
  typed_message->~JointConversion_Request();
}

size_t size_function__JointConversion_Request__joint_input(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__JointConversion_Request__joint_input(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std_msgs::msg::Float64, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__JointConversion_Request__joint_input(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std_msgs::msg::Float64, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointConversion_Request__joint_input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::Float64 *>(
    get_const_function__JointConversion_Request__joint_input(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::Float64 *>(untyped_value);
  value = item;
}

void assign_function__JointConversion_Request__joint_input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::Float64 *>(
    get_function__JointConversion_Request__joint_input(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::Float64 *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointConversion_Request_message_member_array[1] = {
  {
    "joint_input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64>(),  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(srv_pkg::srv::JointConversion_Request, joint_input),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointConversion_Request__joint_input,  // size() function pointer
    get_const_function__JointConversion_Request__joint_input,  // get_const(index) function pointer
    get_function__JointConversion_Request__joint_input,  // get(index) function pointer
    fetch_function__JointConversion_Request__joint_input,  // fetch(index, &value) function pointer
    assign_function__JointConversion_Request__joint_input,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointConversion_Request_message_members = {
  "srv_pkg::srv",  // message namespace
  "JointConversion_Request",  // message name
  1,  // number of fields
  sizeof(srv_pkg::srv::JointConversion_Request),
  JointConversion_Request_message_member_array,  // message members
  JointConversion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  JointConversion_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointConversion_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointConversion_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace srv_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<srv_pkg::srv::JointConversion_Request>()
{
  return &::srv_pkg::srv::rosidl_typesupport_introspection_cpp::JointConversion_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, srv_pkg, srv, JointConversion_Request)() {
  return &::srv_pkg::srv::rosidl_typesupport_introspection_cpp::JointConversion_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "srv_pkg/srv/detail/joint_conversion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace srv_pkg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void JointConversion_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) srv_pkg::srv::JointConversion_Response(_init);
}

void JointConversion_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<srv_pkg::srv::JointConversion_Response *>(message_memory);
  typed_message->~JointConversion_Response();
}

size_t size_function__JointConversion_Response__joint_output(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__JointConversion_Response__joint_output(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std_msgs::msg::Float64, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__JointConversion_Response__joint_output(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std_msgs::msg::Float64, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointConversion_Response__joint_output(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::Float64 *>(
    get_const_function__JointConversion_Response__joint_output(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::Float64 *>(untyped_value);
  value = item;
}

void assign_function__JointConversion_Response__joint_output(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::Float64 *>(
    get_function__JointConversion_Response__joint_output(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::Float64 *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointConversion_Response_message_member_array[1] = {
  {
    "joint_output",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64>(),  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(srv_pkg::srv::JointConversion_Response, joint_output),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointConversion_Response__joint_output,  // size() function pointer
    get_const_function__JointConversion_Response__joint_output,  // get_const(index) function pointer
    get_function__JointConversion_Response__joint_output,  // get(index) function pointer
    fetch_function__JointConversion_Response__joint_output,  // fetch(index, &value) function pointer
    assign_function__JointConversion_Response__joint_output,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointConversion_Response_message_members = {
  "srv_pkg::srv",  // message namespace
  "JointConversion_Response",  // message name
  1,  // number of fields
  sizeof(srv_pkg::srv::JointConversion_Response),
  JointConversion_Response_message_member_array,  // message members
  JointConversion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  JointConversion_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointConversion_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointConversion_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace srv_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<srv_pkg::srv::JointConversion_Response>()
{
  return &::srv_pkg::srv::rosidl_typesupport_introspection_cpp::JointConversion_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, srv_pkg, srv, JointConversion_Response)() {
  return &::srv_pkg::srv::rosidl_typesupport_introspection_cpp::JointConversion_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "srv_pkg/srv/detail/joint_conversion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace srv_pkg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers JointConversion_service_members = {
  "srv_pkg::srv",  // service namespace
  "JointConversion",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<srv_pkg::srv::JointConversion>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t JointConversion_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointConversion_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace srv_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<srv_pkg::srv::JointConversion>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::srv_pkg::srv::rosidl_typesupport_introspection_cpp::JointConversion_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::srv_pkg::srv::JointConversion_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::srv_pkg::srv::JointConversion_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, srv_pkg, srv, JointConversion)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<srv_pkg::srv::JointConversion>();
}

#ifdef __cplusplus
}
#endif
