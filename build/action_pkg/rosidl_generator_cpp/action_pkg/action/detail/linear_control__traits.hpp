// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_pkg:action/LinearControl.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__TRAITS_HPP_
#define ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "action_pkg/action/detail/linear_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace action_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const LinearControl_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: initial_position
  {
    out << "initial_position: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_position, out);
    out << ", ";
  }

  // member: goal_position
  {
    out << "goal_position: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_position, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearControl_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initial_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_position: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_position, out);
    out << "\n";
  }

  // member: goal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_position: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_position, out);
    out << "\n";
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearControl_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_pkg

namespace rosidl_generator_traits
{

[[deprecated("use action_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_pkg::action::LinearControl_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const action_pkg::action::LinearControl_Goal & msg)
{
  return action_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_pkg::action::LinearControl_Goal>()
{
  return "action_pkg::action::LinearControl_Goal";
}

template<>
inline const char * name<action_pkg::action::LinearControl_Goal>()
{
  return "action_pkg/action/LinearControl_Goal";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_pkg::action::LinearControl_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const LinearControl_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: motion_done
  {
    out << "motion_done: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_done, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearControl_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_done: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_done, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearControl_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_pkg

namespace rosidl_generator_traits
{

[[deprecated("use action_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_pkg::action::LinearControl_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const action_pkg::action::LinearControl_Result & msg)
{
  return action_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_pkg::action::LinearControl_Result>()
{
  return "action_pkg::action::LinearControl_Result";
}

template<>
inline const char * name<action_pkg::action::LinearControl_Result>()
{
  return "action_pkg/action/LinearControl_Result";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_pkg::action::LinearControl_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const LinearControl_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearControl_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearControl_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_pkg

namespace rosidl_generator_traits
{

[[deprecated("use action_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_pkg::action::LinearControl_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const action_pkg::action::LinearControl_Feedback & msg)
{
  return action_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_pkg::action::LinearControl_Feedback>()
{
  return "action_pkg::action::LinearControl_Feedback";
}

template<>
inline const char * name<action_pkg::action::LinearControl_Feedback>()
{
  return "action_pkg/action/LinearControl_Feedback";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_pkg::action::LinearControl_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "action_pkg/action/detail/linear_control__traits.hpp"

namespace action_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const LinearControl_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearControl_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearControl_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_pkg

namespace rosidl_generator_traits
{

[[deprecated("use action_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_pkg::action::LinearControl_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const action_pkg::action::LinearControl_SendGoal_Request & msg)
{
  return action_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_pkg::action::LinearControl_SendGoal_Request>()
{
  return "action_pkg::action::LinearControl_SendGoal_Request";
}

template<>
inline const char * name<action_pkg::action::LinearControl_SendGoal_Request>()
{
  return "action_pkg/action/LinearControl_SendGoal_Request";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_pkg::action::LinearControl_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_pkg::action::LinearControl_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_pkg::action::LinearControl_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace action_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const LinearControl_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearControl_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearControl_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_pkg

namespace rosidl_generator_traits
{

[[deprecated("use action_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_pkg::action::LinearControl_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const action_pkg::action::LinearControl_SendGoal_Response & msg)
{
  return action_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_pkg::action::LinearControl_SendGoal_Response>()
{
  return "action_pkg::action::LinearControl_SendGoal_Response";
}

template<>
inline const char * name<action_pkg::action::LinearControl_SendGoal_Response>()
{
  return "action_pkg/action/LinearControl_SendGoal_Response";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<action_pkg::action::LinearControl_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::LinearControl_SendGoal>()
{
  return "action_pkg::action::LinearControl_SendGoal";
}

template<>
inline const char * name<action_pkg::action::LinearControl_SendGoal>()
{
  return "action_pkg/action/LinearControl_SendGoal";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_pkg::action::LinearControl_SendGoal_Request>::value &&
    has_fixed_size<action_pkg::action::LinearControl_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_pkg::action::LinearControl_SendGoal_Request>::value &&
    has_bounded_size<action_pkg::action::LinearControl_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<action_pkg::action::LinearControl_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_pkg::action::LinearControl_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_pkg::action::LinearControl_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace action_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const LinearControl_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearControl_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearControl_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_pkg

namespace rosidl_generator_traits
{

[[deprecated("use action_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_pkg::action::LinearControl_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const action_pkg::action::LinearControl_GetResult_Request & msg)
{
  return action_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_pkg::action::LinearControl_GetResult_Request>()
{
  return "action_pkg::action::LinearControl_GetResult_Request";
}

template<>
inline const char * name<action_pkg::action::LinearControl_GetResult_Request>()
{
  return "action_pkg/action/LinearControl_GetResult_Request";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_pkg::action::LinearControl_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_pkg/action/detail/linear_control__traits.hpp"

namespace action_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const LinearControl_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearControl_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearControl_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_pkg

namespace rosidl_generator_traits
{

[[deprecated("use action_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_pkg::action::LinearControl_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const action_pkg::action::LinearControl_GetResult_Response & msg)
{
  return action_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_pkg::action::LinearControl_GetResult_Response>()
{
  return "action_pkg::action::LinearControl_GetResult_Response";
}

template<>
inline const char * name<action_pkg::action::LinearControl_GetResult_Response>()
{
  return "action_pkg/action/LinearControl_GetResult_Response";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_pkg::action::LinearControl_Result>::value> {};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_pkg::action::LinearControl_Result>::value> {};

template<>
struct is_message<action_pkg::action::LinearControl_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::LinearControl_GetResult>()
{
  return "action_pkg::action::LinearControl_GetResult";
}

template<>
inline const char * name<action_pkg::action::LinearControl_GetResult>()
{
  return "action_pkg/action/LinearControl_GetResult";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_pkg::action::LinearControl_GetResult_Request>::value &&
    has_fixed_size<action_pkg::action::LinearControl_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_pkg::action::LinearControl_GetResult_Request>::value &&
    has_bounded_size<action_pkg::action::LinearControl_GetResult_Response>::value
  >
{
};

template<>
struct is_service<action_pkg::action::LinearControl_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<action_pkg::action::LinearControl_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_pkg::action::LinearControl_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "action_pkg/action/detail/linear_control__traits.hpp"

namespace action_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const LinearControl_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearControl_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearControl_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_pkg

namespace rosidl_generator_traits
{

[[deprecated("use action_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_pkg::action::LinearControl_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const action_pkg::action::LinearControl_FeedbackMessage & msg)
{
  return action_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_pkg::action::LinearControl_FeedbackMessage>()
{
  return "action_pkg::action::LinearControl_FeedbackMessage";
}

template<>
inline const char * name<action_pkg::action::LinearControl_FeedbackMessage>()
{
  return "action_pkg/action/LinearControl_FeedbackMessage";
}

template<>
struct has_fixed_size<action_pkg::action::LinearControl_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_pkg::action::LinearControl_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_pkg::action::LinearControl_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_pkg::action::LinearControl_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_pkg::action::LinearControl_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<action_pkg::action::LinearControl>
  : std::true_type
{
};

template<>
struct is_action_goal<action_pkg::action::LinearControl_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<action_pkg::action::LinearControl_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<action_pkg::action::LinearControl_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__TRAITS_HPP_
