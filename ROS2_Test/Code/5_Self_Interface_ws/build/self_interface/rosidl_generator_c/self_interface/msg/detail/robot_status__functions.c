// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from self_interface:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "self_interface/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
self_interface__msg__RobotStatus__init(self_interface__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // pose
  return true;
}

void
self_interface__msg__RobotStatus__fini(self_interface__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
  // pose
}

bool
self_interface__msg__RobotStatus__are_equal(const self_interface__msg__RobotStatus * lhs, const self_interface__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // pose
  if (lhs->pose != rhs->pose) {
    return false;
  }
  return true;
}

bool
self_interface__msg__RobotStatus__copy(
  const self_interface__msg__RobotStatus * input,
  self_interface__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // pose
  output->pose = input->pose;
  return true;
}

self_interface__msg__RobotStatus *
self_interface__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  self_interface__msg__RobotStatus * msg = (self_interface__msg__RobotStatus *)allocator.allocate(sizeof(self_interface__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(self_interface__msg__RobotStatus));
  bool success = self_interface__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
self_interface__msg__RobotStatus__destroy(self_interface__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    self_interface__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
self_interface__msg__RobotStatus__Sequence__init(self_interface__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  self_interface__msg__RobotStatus * data = NULL;

  if (size) {
    data = (self_interface__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(self_interface__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = self_interface__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        self_interface__msg__RobotStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
self_interface__msg__RobotStatus__Sequence__fini(self_interface__msg__RobotStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      self_interface__msg__RobotStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

self_interface__msg__RobotStatus__Sequence *
self_interface__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  self_interface__msg__RobotStatus__Sequence * array = (self_interface__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(self_interface__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = self_interface__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
self_interface__msg__RobotStatus__Sequence__destroy(self_interface__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    self_interface__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
self_interface__msg__RobotStatus__Sequence__are_equal(const self_interface__msg__RobotStatus__Sequence * lhs, const self_interface__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!self_interface__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
self_interface__msg__RobotStatus__Sequence__copy(
  const self_interface__msg__RobotStatus__Sequence * input,
  self_interface__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(self_interface__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    self_interface__msg__RobotStatus * data =
      (self_interface__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!self_interface__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          self_interface__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!self_interface__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
