// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from self_interface:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
#define SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "self_interface/srv/detail/robot_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace self_interface
{

namespace srv
{

namespace builder
{

class Init_RobotCommand_Request_distance
{
public:
  Init_RobotCommand_Request_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::self_interface::srv::RobotCommand_Request distance(::self_interface::srv::RobotCommand_Request::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::self_interface::srv::RobotCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::self_interface::srv::RobotCommand_Request>()
{
  return self_interface::srv::builder::Init_RobotCommand_Request_distance();
}

}  // namespace self_interface


namespace self_interface
{

namespace srv
{

namespace builder
{

class Init_RobotCommand_Response_pose
{
public:
  Init_RobotCommand_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::self_interface::srv::RobotCommand_Response pose(::self_interface::srv::RobotCommand_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::self_interface::srv::RobotCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::self_interface::srv::RobotCommand_Response>()
{
  return self_interface::srv::builder::Init_RobotCommand_Response_pose();
}

}  // namespace self_interface

#endif  // SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
