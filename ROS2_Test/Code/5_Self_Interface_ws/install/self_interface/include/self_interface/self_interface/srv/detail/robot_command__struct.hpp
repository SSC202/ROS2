// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from self_interface:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
#define SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__self_interface__srv__RobotCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__self_interface__srv__RobotCommand_Request __declspec(deprecated)
#endif

namespace self_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_Request_
{
  using Type = RobotCommand_Request_<ContainerAllocator>;

  explicit RobotCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  explicit RobotCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    self_interface::srv::RobotCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const self_interface::srv::RobotCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<self_interface::srv::RobotCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<self_interface::srv::RobotCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      self_interface::srv::RobotCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<self_interface::srv::RobotCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      self_interface::srv::RobotCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<self_interface::srv::RobotCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<self_interface::srv::RobotCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<self_interface::srv::RobotCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__self_interface__srv__RobotCommand_Request
    std::shared_ptr<self_interface::srv::RobotCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__self_interface__srv__RobotCommand_Request
    std::shared_ptr<self_interface::srv::RobotCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_Request_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_Request_

// alias to use template instance with default allocator
using RobotCommand_Request =
  self_interface::srv::RobotCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace self_interface


#ifndef _WIN32
# define DEPRECATED__self_interface__srv__RobotCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__self_interface__srv__RobotCommand_Response __declspec(deprecated)
#endif

namespace self_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_Response_
{
  using Type = RobotCommand_Response_<ContainerAllocator>;

  explicit RobotCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose = 0.0f;
    }
  }

  explicit RobotCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose = 0.0f;
    }
  }

  // field types and members
  using _pose_type =
    float;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const float & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    self_interface::srv::RobotCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const self_interface::srv::RobotCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<self_interface::srv::RobotCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<self_interface::srv::RobotCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      self_interface::srv::RobotCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<self_interface::srv::RobotCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      self_interface::srv::RobotCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<self_interface::srv::RobotCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<self_interface::srv::RobotCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<self_interface::srv::RobotCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__self_interface__srv__RobotCommand_Response
    std::shared_ptr<self_interface::srv::RobotCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__self_interface__srv__RobotCommand_Response
    std::shared_ptr<self_interface::srv::RobotCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_Response_

// alias to use template instance with default allocator
using RobotCommand_Response =
  self_interface::srv::RobotCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace self_interface

namespace self_interface
{

namespace srv
{

struct RobotCommand
{
  using Request = self_interface::srv::RobotCommand_Request;
  using Response = self_interface::srv::RobotCommand_Response;
};

}  // namespace srv

}  // namespace self_interface

#endif  // SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
