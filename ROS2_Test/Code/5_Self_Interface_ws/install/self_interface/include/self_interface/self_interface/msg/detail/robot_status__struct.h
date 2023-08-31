// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from self_interface:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACE__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define SELF_INTERFACE__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_MOVING'.
enum
{
  self_interface__msg__RobotStatus__STATUS_MOVING = 1ul
};

/// Constant 'STATUS_STOPPING'.
enum
{
  self_interface__msg__RobotStatus__STATUS_STOPPING = 2ul
};

/// Struct defined in msg/RobotStatus in the package self_interface.
/**
  * 机器人运行状态枚举
 */
typedef struct self_interface__msg__RobotStatus
{
  /// 机器人状态
  uint32_t status;
  /// 机器人位置
  float pose;
} self_interface__msg__RobotStatus;

// Struct for a sequence of self_interface__msg__RobotStatus.
typedef struct self_interface__msg__RobotStatus__Sequence
{
  self_interface__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} self_interface__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SELF_INTERFACE__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
