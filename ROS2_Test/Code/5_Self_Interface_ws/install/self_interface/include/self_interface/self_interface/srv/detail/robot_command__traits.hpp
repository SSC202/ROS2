// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from self_interface:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
#define SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "self_interface/srv/detail/robot_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace self_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotCommand_Request & msg,
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
  const RobotCommand_Request & msg,
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

inline std::string to_yaml(const RobotCommand_Request & msg, bool use_flow_style = false)
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

}  // namespace self_interface

namespace rosidl_generator_traits
{

[[deprecated("use self_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const self_interface::srv::RobotCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  self_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use self_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const self_interface::srv::RobotCommand_Request & msg)
{
  return self_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<self_interface::srv::RobotCommand_Request>()
{
  return "self_interface::srv::RobotCommand_Request";
}

template<>
inline const char * name<self_interface::srv::RobotCommand_Request>()
{
  return "self_interface/srv/RobotCommand_Request";
}

template<>
struct has_fixed_size<self_interface::srv::RobotCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<self_interface::srv::RobotCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<self_interface::srv::RobotCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace self_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCommand_Response & msg, bool use_flow_style = false)
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

}  // namespace self_interface

namespace rosidl_generator_traits
{

[[deprecated("use self_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const self_interface::srv::RobotCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  self_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use self_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const self_interface::srv::RobotCommand_Response & msg)
{
  return self_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<self_interface::srv::RobotCommand_Response>()
{
  return "self_interface::srv::RobotCommand_Response";
}

template<>
inline const char * name<self_interface::srv::RobotCommand_Response>()
{
  return "self_interface/srv/RobotCommand_Response";
}

template<>
struct has_fixed_size<self_interface::srv::RobotCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<self_interface::srv::RobotCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<self_interface::srv::RobotCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<self_interface::srv::RobotCommand>()
{
  return "self_interface::srv::RobotCommand";
}

template<>
inline const char * name<self_interface::srv::RobotCommand>()
{
  return "self_interface/srv/RobotCommand";
}

template<>
struct has_fixed_size<self_interface::srv::RobotCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<self_interface::srv::RobotCommand_Request>::value &&
    has_fixed_size<self_interface::srv::RobotCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<self_interface::srv::RobotCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<self_interface::srv::RobotCommand_Request>::value &&
    has_bounded_size<self_interface::srv::RobotCommand_Response>::value
  >
{
};

template<>
struct is_service<self_interface::srv::RobotCommand>
  : std::true_type
{
};

template<>
struct is_service_request<self_interface::srv::RobotCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<self_interface::srv::RobotCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
