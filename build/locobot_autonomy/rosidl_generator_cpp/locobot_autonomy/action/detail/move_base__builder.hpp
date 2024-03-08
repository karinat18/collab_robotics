// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from locobot_autonomy:action/MoveBase.idl
// generated code does not contain a copyright notice

#ifndef LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_
#define LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_

#include "locobot_autonomy/action/detail/move_base__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace locobot_autonomy
{

namespace action
{

namespace builder
{

class Init_MoveBase_Goal_target_pose
{
public:
  Init_MoveBase_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::locobot_autonomy::action::MoveBase_Goal target_pose(::locobot_autonomy::action::MoveBase_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::locobot_autonomy::action::MoveBase_Goal>()
{
  return locobot_autonomy::action::builder::Init_MoveBase_Goal_target_pose();
}

}  // namespace locobot_autonomy


namespace locobot_autonomy
{

namespace action
{

namespace builder
{

class Init_MoveBase_Result_done
{
public:
  Init_MoveBase_Result_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::locobot_autonomy::action::MoveBase_Result done(::locobot_autonomy::action::MoveBase_Result::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::locobot_autonomy::action::MoveBase_Result>()
{
  return locobot_autonomy::action::builder::Init_MoveBase_Result_done();
}

}  // namespace locobot_autonomy


namespace locobot_autonomy
{

namespace action
{

namespace builder
{

class Init_MoveBase_Feedback_distance
{
public:
  Init_MoveBase_Feedback_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::locobot_autonomy::action::MoveBase_Feedback distance(::locobot_autonomy::action::MoveBase_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::locobot_autonomy::action::MoveBase_Feedback>()
{
  return locobot_autonomy::action::builder::Init_MoveBase_Feedback_distance();
}

}  // namespace locobot_autonomy


namespace locobot_autonomy
{

namespace action
{

namespace builder
{

class Init_MoveBase_SendGoal_Request_goal
{
public:
  explicit Init_MoveBase_SendGoal_Request_goal(::locobot_autonomy::action::MoveBase_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::locobot_autonomy::action::MoveBase_SendGoal_Request goal(::locobot_autonomy::action::MoveBase_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_SendGoal_Request msg_;
};

class Init_MoveBase_SendGoal_Request_goal_id
{
public:
  Init_MoveBase_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_SendGoal_Request_goal goal_id(::locobot_autonomy::action::MoveBase_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveBase_SendGoal_Request_goal(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::locobot_autonomy::action::MoveBase_SendGoal_Request>()
{
  return locobot_autonomy::action::builder::Init_MoveBase_SendGoal_Request_goal_id();
}

}  // namespace locobot_autonomy


namespace locobot_autonomy
{

namespace action
{

namespace builder
{

class Init_MoveBase_SendGoal_Response_stamp
{
public:
  explicit Init_MoveBase_SendGoal_Response_stamp(::locobot_autonomy::action::MoveBase_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::locobot_autonomy::action::MoveBase_SendGoal_Response stamp(::locobot_autonomy::action::MoveBase_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_SendGoal_Response msg_;
};

class Init_MoveBase_SendGoal_Response_accepted
{
public:
  Init_MoveBase_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_SendGoal_Response_stamp accepted(::locobot_autonomy::action::MoveBase_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveBase_SendGoal_Response_stamp(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::locobot_autonomy::action::MoveBase_SendGoal_Response>()
{
  return locobot_autonomy::action::builder::Init_MoveBase_SendGoal_Response_accepted();
}

}  // namespace locobot_autonomy


namespace locobot_autonomy
{

namespace action
{

namespace builder
{

class Init_MoveBase_GetResult_Request_goal_id
{
public:
  Init_MoveBase_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::locobot_autonomy::action::MoveBase_GetResult_Request goal_id(::locobot_autonomy::action::MoveBase_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::locobot_autonomy::action::MoveBase_GetResult_Request>()
{
  return locobot_autonomy::action::builder::Init_MoveBase_GetResult_Request_goal_id();
}

}  // namespace locobot_autonomy


namespace locobot_autonomy
{

namespace action
{

namespace builder
{

class Init_MoveBase_GetResult_Response_result
{
public:
  explicit Init_MoveBase_GetResult_Response_result(::locobot_autonomy::action::MoveBase_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::locobot_autonomy::action::MoveBase_GetResult_Response result(::locobot_autonomy::action::MoveBase_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_GetResult_Response msg_;
};

class Init_MoveBase_GetResult_Response_status
{
public:
  Init_MoveBase_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_GetResult_Response_result status(::locobot_autonomy::action::MoveBase_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveBase_GetResult_Response_result(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::locobot_autonomy::action::MoveBase_GetResult_Response>()
{
  return locobot_autonomy::action::builder::Init_MoveBase_GetResult_Response_status();
}

}  // namespace locobot_autonomy


namespace locobot_autonomy
{

namespace action
{

namespace builder
{

class Init_MoveBase_FeedbackMessage_feedback
{
public:
  explicit Init_MoveBase_FeedbackMessage_feedback(::locobot_autonomy::action::MoveBase_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::locobot_autonomy::action::MoveBase_FeedbackMessage feedback(::locobot_autonomy::action::MoveBase_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_FeedbackMessage msg_;
};

class Init_MoveBase_FeedbackMessage_goal_id
{
public:
  Init_MoveBase_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_FeedbackMessage_feedback goal_id(::locobot_autonomy::action::MoveBase_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveBase_FeedbackMessage_feedback(msg_);
  }

private:
  ::locobot_autonomy::action::MoveBase_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::locobot_autonomy::action::MoveBase_FeedbackMessage>()
{
  return locobot_autonomy::action::builder::Init_MoveBase_FeedbackMessage_goal_id();
}

}  // namespace locobot_autonomy

#endif  // LOCOBOT_AUTONOMY__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_
