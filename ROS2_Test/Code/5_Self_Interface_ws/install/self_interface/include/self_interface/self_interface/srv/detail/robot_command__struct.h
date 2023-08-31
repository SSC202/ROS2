// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from self_interface:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_
#define SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RobotCommand in the package self_interface.
typedef struct self_interface__srv__RobotCommand_Request
{
  float distance;
} self_interface__srv__RobotCommand_Request;

// Struct for a sequence of self_interface__srv__RobotCommand_Request.
typedef struct self_interface__srv__RobotCommand_Request__Sequence
{
  self_interface__srv__RobotCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} self_interface__srv__RobotCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RobotCommand in the package self_interface.
typedef struct self_interface__srv__RobotCommand_Response
{
  float pose;
} self_interface__srv__RobotCommand_Response;

// Struct for a sequence of self_interface__srv__RobotCommand_Response.
typedef struct self_interface__srv__RobotCommand_Response__Sequence
{
  self_interface__srv__RobotCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} self_interface__srv__RobotCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SELF_INTERFACE__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_
