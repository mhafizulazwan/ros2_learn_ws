// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_pkg:action/LinearControl.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__BUILDER_HPP_
#define ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_pkg/action/detail/linear_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_LinearControl_Goal_linear_velocity
{
public:
  explicit Init_LinearControl_Goal_linear_velocity(::action_pkg::action::LinearControl_Goal & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::LinearControl_Goal linear_velocity(::action_pkg::action::LinearControl_Goal::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::LinearControl_Goal msg_;
};

class Init_LinearControl_Goal_goal_position
{
public:
  explicit Init_LinearControl_Goal_goal_position(::action_pkg::action::LinearControl_Goal & msg)
  : msg_(msg)
  {}
  Init_LinearControl_Goal_linear_velocity goal_position(::action_pkg::action::LinearControl_Goal::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_LinearControl_Goal_linear_velocity(msg_);
  }

private:
  ::action_pkg::action::LinearControl_Goal msg_;
};

class Init_LinearControl_Goal_initial_position
{
public:
  Init_LinearControl_Goal_initial_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearControl_Goal_goal_position initial_position(::action_pkg::action::LinearControl_Goal::_initial_position_type arg)
  {
    msg_.initial_position = std::move(arg);
    return Init_LinearControl_Goal_goal_position(msg_);
  }

private:
  ::action_pkg::action::LinearControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::LinearControl_Goal>()
{
  return action_pkg::action::builder::Init_LinearControl_Goal_initial_position();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_LinearControl_Result_motion_done
{
public:
  Init_LinearControl_Result_motion_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::LinearControl_Result motion_done(::action_pkg::action::LinearControl_Result::_motion_done_type arg)
  {
    msg_.motion_done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::LinearControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::LinearControl_Result>()
{
  return action_pkg::action::builder::Init_LinearControl_Result_motion_done();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_LinearControl_Feedback_distance
{
public:
  Init_LinearControl_Feedback_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::LinearControl_Feedback distance(::action_pkg::action::LinearControl_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::LinearControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::LinearControl_Feedback>()
{
  return action_pkg::action::builder::Init_LinearControl_Feedback_distance();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_LinearControl_SendGoal_Request_goal
{
public:
  explicit Init_LinearControl_SendGoal_Request_goal(::action_pkg::action::LinearControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::LinearControl_SendGoal_Request goal(::action_pkg::action::LinearControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::LinearControl_SendGoal_Request msg_;
};

class Init_LinearControl_SendGoal_Request_goal_id
{
public:
  Init_LinearControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearControl_SendGoal_Request_goal goal_id(::action_pkg::action::LinearControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LinearControl_SendGoal_Request_goal(msg_);
  }

private:
  ::action_pkg::action::LinearControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::LinearControl_SendGoal_Request>()
{
  return action_pkg::action::builder::Init_LinearControl_SendGoal_Request_goal_id();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_LinearControl_SendGoal_Response_stamp
{
public:
  explicit Init_LinearControl_SendGoal_Response_stamp(::action_pkg::action::LinearControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::LinearControl_SendGoal_Response stamp(::action_pkg::action::LinearControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::LinearControl_SendGoal_Response msg_;
};

class Init_LinearControl_SendGoal_Response_accepted
{
public:
  Init_LinearControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearControl_SendGoal_Response_stamp accepted(::action_pkg::action::LinearControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LinearControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_pkg::action::LinearControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::LinearControl_SendGoal_Response>()
{
  return action_pkg::action::builder::Init_LinearControl_SendGoal_Response_accepted();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_LinearControl_GetResult_Request_goal_id
{
public:
  Init_LinearControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::LinearControl_GetResult_Request goal_id(::action_pkg::action::LinearControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::LinearControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::LinearControl_GetResult_Request>()
{
  return action_pkg::action::builder::Init_LinearControl_GetResult_Request_goal_id();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_LinearControl_GetResult_Response_result
{
public:
  explicit Init_LinearControl_GetResult_Response_result(::action_pkg::action::LinearControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::LinearControl_GetResult_Response result(::action_pkg::action::LinearControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::LinearControl_GetResult_Response msg_;
};

class Init_LinearControl_GetResult_Response_status
{
public:
  Init_LinearControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearControl_GetResult_Response_result status(::action_pkg::action::LinearControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LinearControl_GetResult_Response_result(msg_);
  }

private:
  ::action_pkg::action::LinearControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::LinearControl_GetResult_Response>()
{
  return action_pkg::action::builder::Init_LinearControl_GetResult_Response_status();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_LinearControl_FeedbackMessage_feedback
{
public:
  explicit Init_LinearControl_FeedbackMessage_feedback(::action_pkg::action::LinearControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::LinearControl_FeedbackMessage feedback(::action_pkg::action::LinearControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::LinearControl_FeedbackMessage msg_;
};

class Init_LinearControl_FeedbackMessage_goal_id
{
public:
  Init_LinearControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearControl_FeedbackMessage_feedback goal_id(::action_pkg::action::LinearControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LinearControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_pkg::action::LinearControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::LinearControl_FeedbackMessage>()
{
  return action_pkg::action::builder::Init_LinearControl_FeedbackMessage_goal_id();
}

}  // namespace action_pkg

#endif  // ACTION_PKG__ACTION__DETAIL__LINEAR_CONTROL__BUILDER_HPP_
