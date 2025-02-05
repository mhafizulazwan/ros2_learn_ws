// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_pkg:srv/JointConversion.idl
// generated code does not contain a copyright notice

#ifndef SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__BUILDER_HPP_
#define SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srv_pkg/srv/detail/joint_conversion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srv_pkg
{

namespace srv
{

namespace builder
{

class Init_JointConversion_Request_joint_input
{
public:
  Init_JointConversion_Request_joint_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_pkg::srv::JointConversion_Request joint_input(::srv_pkg::srv::JointConversion_Request::_joint_input_type arg)
  {
    msg_.joint_input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_pkg::srv::JointConversion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_pkg::srv::JointConversion_Request>()
{
  return srv_pkg::srv::builder::Init_JointConversion_Request_joint_input();
}

}  // namespace srv_pkg


namespace srv_pkg
{

namespace srv
{

namespace builder
{

class Init_JointConversion_Response_joint_output
{
public:
  Init_JointConversion_Response_joint_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_pkg::srv::JointConversion_Response joint_output(::srv_pkg::srv::JointConversion_Response::_joint_output_type arg)
  {
    msg_.joint_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_pkg::srv::JointConversion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_pkg::srv::JointConversion_Response>()
{
  return srv_pkg::srv::builder::Init_JointConversion_Response_joint_output();
}

}  // namespace srv_pkg

#endif  // SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__BUILDER_HPP_
