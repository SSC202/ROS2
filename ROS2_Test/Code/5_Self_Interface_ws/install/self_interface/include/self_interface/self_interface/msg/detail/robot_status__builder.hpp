// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from self_interface:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACE__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define SELF_INTERFACE__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "self_interface/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace self_interface
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_pose
{
public:
  explicit Init_RobotStatus_pose(::self_interface::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::self_interface::msg::RobotStatus pose(::self_interface::msg::RobotStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::self_interface::msg::RobotStatus msg_;
};

class Init_RobotStatus_status
{
public:
  Init_RobotStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_pose status(::self_interface::msg::RobotStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotStatus_pose(msg_);
  }

private:
  ::self_interface::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::self_interface::msg::RobotStatus>()
{
  return self_interface::msg::builder::Init_RobotStatus_status();
}

}  // namespace self_interface

#endif  // SELF_INTERFACE__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
