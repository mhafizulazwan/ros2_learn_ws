// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srv_pkg:srv/JointConversion.idl
// generated code does not contain a copyright notice

#ifndef SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__TRAITS_HPP_
#define SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "srv_pkg/srv/detail/joint_conversion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_input'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace srv_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointConversion_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_input
  {
    if (msg.joint_input.size() == 0) {
      out << "joint_input: []";
    } else {
      out << "joint_input: [";
      size_t pending_items = msg.joint_input.size();
      for (auto item : msg.joint_input) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointConversion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_input.size() == 0) {
      out << "joint_input: []\n";
    } else {
      out << "joint_input:\n";
      for (auto item : msg.joint_input) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointConversion_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace srv_pkg

namespace rosidl_generator_traits
{

[[deprecated("use srv_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_pkg::srv::JointConversion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const srv_pkg::srv::JointConversion_Request & msg)
{
  return srv_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<srv_pkg::srv::JointConversion_Request>()
{
  return "srv_pkg::srv::JointConversion_Request";
}

template<>
inline const char * name<srv_pkg::srv::JointConversion_Request>()
{
  return "srv_pkg/srv/JointConversion_Request";
}

template<>
struct has_fixed_size<srv_pkg::srv::JointConversion_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<srv_pkg::srv::JointConversion_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<srv_pkg::srv::JointConversion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'joint_output'
// already included above
// #include "std_msgs/msg/detail/float64__traits.hpp"

namespace srv_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointConversion_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_output
  {
    if (msg.joint_output.size() == 0) {
      out << "joint_output: []";
    } else {
      out << "joint_output: [";
      size_t pending_items = msg.joint_output.size();
      for (auto item : msg.joint_output) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointConversion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_output.size() == 0) {
      out << "joint_output: []\n";
    } else {
      out << "joint_output:\n";
      for (auto item : msg.joint_output) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointConversion_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace srv_pkg

namespace rosidl_generator_traits
{

[[deprecated("use srv_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_pkg::srv::JointConversion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const srv_pkg::srv::JointConversion_Response & msg)
{
  return srv_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<srv_pkg::srv::JointConversion_Response>()
{
  return "srv_pkg::srv::JointConversion_Response";
}

template<>
inline const char * name<srv_pkg::srv::JointConversion_Response>()
{
  return "srv_pkg/srv/JointConversion_Response";
}

template<>
struct has_fixed_size<srv_pkg::srv::JointConversion_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<srv_pkg::srv::JointConversion_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<srv_pkg::srv::JointConversion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_pkg::srv::JointConversion>()
{
  return "srv_pkg::srv::JointConversion";
}

template<>
inline const char * name<srv_pkg::srv::JointConversion>()
{
  return "srv_pkg/srv/JointConversion";
}

template<>
struct has_fixed_size<srv_pkg::srv::JointConversion>
  : std::integral_constant<
    bool,
    has_fixed_size<srv_pkg::srv::JointConversion_Request>::value &&
    has_fixed_size<srv_pkg::srv::JointConversion_Response>::value
  >
{
};

template<>
struct has_bounded_size<srv_pkg::srv::JointConversion>
  : std::integral_constant<
    bool,
    has_bounded_size<srv_pkg::srv::JointConversion_Request>::value &&
    has_bounded_size<srv_pkg::srv::JointConversion_Response>::value
  >
{
};

template<>
struct is_service<srv_pkg::srv::JointConversion>
  : std::true_type
{
};

template<>
struct is_service_request<srv_pkg::srv::JointConversion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<srv_pkg::srv::JointConversion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__TRAITS_HPP_
