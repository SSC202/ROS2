# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14

# Include any dependencies generated for this target.
include CMakeFiles/ld14_node.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ld14_node.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ld14_node.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ld14_node.dir/flags.make

CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o: CMakeFiles/ld14_node.dir/flags.make
CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o: /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/cmd_interface_linux.cpp
CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o: CMakeFiles/ld14_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o -MF CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o.d -o CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o -c /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/cmd_interface_linux.cpp

CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/cmd_interface_linux.cpp > CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.i

CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/cmd_interface_linux.cpp -o CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.s

CMakeFiles/ld14_node.dir/src/lipkg.cpp.o: CMakeFiles/ld14_node.dir/flags.make
CMakeFiles/ld14_node.dir/src/lipkg.cpp.o: /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/lipkg.cpp
CMakeFiles/ld14_node.dir/src/lipkg.cpp.o: CMakeFiles/ld14_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ld14_node.dir/src/lipkg.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ld14_node.dir/src/lipkg.cpp.o -MF CMakeFiles/ld14_node.dir/src/lipkg.cpp.o.d -o CMakeFiles/ld14_node.dir/src/lipkg.cpp.o -c /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/lipkg.cpp

CMakeFiles/ld14_node.dir/src/lipkg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ld14_node.dir/src/lipkg.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/lipkg.cpp > CMakeFiles/ld14_node.dir/src/lipkg.cpp.i

CMakeFiles/ld14_node.dir/src/lipkg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ld14_node.dir/src/lipkg.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/lipkg.cpp -o CMakeFiles/ld14_node.dir/src/lipkg.cpp.s

CMakeFiles/ld14_node.dir/src/main.cpp.o: CMakeFiles/ld14_node.dir/flags.make
CMakeFiles/ld14_node.dir/src/main.cpp.o: /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/main.cpp
CMakeFiles/ld14_node.dir/src/main.cpp.o: CMakeFiles/ld14_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ld14_node.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ld14_node.dir/src/main.cpp.o -MF CMakeFiles/ld14_node.dir/src/main.cpp.o.d -o CMakeFiles/ld14_node.dir/src/main.cpp.o -c /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/main.cpp

CMakeFiles/ld14_node.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ld14_node.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/main.cpp > CMakeFiles/ld14_node.dir/src/main.cpp.i

CMakeFiles/ld14_node.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ld14_node.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/main.cpp -o CMakeFiles/ld14_node.dir/src/main.cpp.s

CMakeFiles/ld14_node.dir/src/slbf.cpp.o: CMakeFiles/ld14_node.dir/flags.make
CMakeFiles/ld14_node.dir/src/slbf.cpp.o: /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/slbf.cpp
CMakeFiles/ld14_node.dir/src/slbf.cpp.o: CMakeFiles/ld14_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ld14_node.dir/src/slbf.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ld14_node.dir/src/slbf.cpp.o -MF CMakeFiles/ld14_node.dir/src/slbf.cpp.o.d -o CMakeFiles/ld14_node.dir/src/slbf.cpp.o -c /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/slbf.cpp

CMakeFiles/ld14_node.dir/src/slbf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ld14_node.dir/src/slbf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/slbf.cpp > CMakeFiles/ld14_node.dir/src/slbf.cpp.i

CMakeFiles/ld14_node.dir/src/slbf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ld14_node.dir/src/slbf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/slbf.cpp -o CMakeFiles/ld14_node.dir/src/slbf.cpp.s

CMakeFiles/ld14_node.dir/src/transform.cpp.o: CMakeFiles/ld14_node.dir/flags.make
CMakeFiles/ld14_node.dir/src/transform.cpp.o: /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/transform.cpp
CMakeFiles/ld14_node.dir/src/transform.cpp.o: CMakeFiles/ld14_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ld14_node.dir/src/transform.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ld14_node.dir/src/transform.cpp.o -MF CMakeFiles/ld14_node.dir/src/transform.cpp.o.d -o CMakeFiles/ld14_node.dir/src/transform.cpp.o -c /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/transform.cpp

CMakeFiles/ld14_node.dir/src/transform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ld14_node.dir/src/transform.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/transform.cpp > CMakeFiles/ld14_node.dir/src/transform.cpp.i

CMakeFiles/ld14_node.dir/src/transform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ld14_node.dir/src/transform.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14/src/transform.cpp -o CMakeFiles/ld14_node.dir/src/transform.cpp.s

# Object files for target ld14_node
ld14_node_OBJECTS = \
"CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o" \
"CMakeFiles/ld14_node.dir/src/lipkg.cpp.o" \
"CMakeFiles/ld14_node.dir/src/main.cpp.o" \
"CMakeFiles/ld14_node.dir/src/slbf.cpp.o" \
"CMakeFiles/ld14_node.dir/src/transform.cpp.o"

# External object files for target ld14_node
ld14_node_EXTERNAL_OBJECTS =

ld14_node: CMakeFiles/ld14_node.dir/src/cmd_interface_linux.cpp.o
ld14_node: CMakeFiles/ld14_node.dir/src/lipkg.cpp.o
ld14_node: CMakeFiles/ld14_node.dir/src/main.cpp.o
ld14_node: CMakeFiles/ld14_node.dir/src/slbf.cpp.o
ld14_node: CMakeFiles/ld14_node.dir/src/transform.cpp.o
ld14_node: CMakeFiles/ld14_node.dir/build.make
ld14_node: /opt/ros/humble/lib/librclcpp.so
ld14_node: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_fastrtps_c.so
ld14_node: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_fastrtps_cpp.so
ld14_node: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
ld14_node: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
ld14_node: /opt/ros/humble/lib/libsensor_msgs__rosidl_generator_py.so
ld14_node: /opt/ros/humble/lib/liblibstatistics_collector.so
ld14_node: /opt/ros/humble/lib/librcl.so
ld14_node: /opt/ros/humble/lib/librmw_implementation.so
ld14_node: /opt/ros/humble/lib/libament_index_cpp.so
ld14_node: /opt/ros/humble/lib/librcl_logging_spdlog.so
ld14_node: /opt/ros/humble/lib/librcl_logging_interface.so
ld14_node: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
ld14_node: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
ld14_node: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
ld14_node: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
ld14_node: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
ld14_node: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
ld14_node: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
ld14_node: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
ld14_node: /opt/ros/humble/lib/librcl_yaml_param_parser.so
ld14_node: /opt/ros/humble/lib/libyaml.so
ld14_node: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
ld14_node: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
ld14_node: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
ld14_node: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
ld14_node: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
ld14_node: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
ld14_node: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
ld14_node: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
ld14_node: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
ld14_node: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
ld14_node: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
ld14_node: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
ld14_node: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
ld14_node: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
ld14_node: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
ld14_node: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
ld14_node: /opt/ros/humble/lib/libtracetools.so
ld14_node: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
ld14_node: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
ld14_node: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
ld14_node: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
ld14_node: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
ld14_node: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
ld14_node: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
ld14_node: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
ld14_node: /opt/ros/humble/lib/libfastcdr.so.1.0.24
ld14_node: /opt/ros/humble/lib/librmw.so
ld14_node: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
ld14_node: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
ld14_node: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
ld14_node: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
ld14_node: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
ld14_node: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
ld14_node: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
ld14_node: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
ld14_node: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_c.so
ld14_node: /opt/ros/humble/lib/libsensor_msgs__rosidl_generator_c.so
ld14_node: /opt/ros/humble/lib/libgeometry_msgs__rosidl_generator_py.so
ld14_node: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_c.so
ld14_node: /opt/ros/humble/lib/libgeometry_msgs__rosidl_generator_c.so
ld14_node: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_py.so
ld14_node: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
ld14_node: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_c.so
ld14_node: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
ld14_node: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_c.so
ld14_node: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
ld14_node: /usr/lib/x86_64-linux-gnu/libpython3.10.so
ld14_node: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_cpp.so
ld14_node: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
ld14_node: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_cpp.so
ld14_node: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
ld14_node: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
ld14_node: /opt/ros/humble/lib/librosidl_typesupport_c.so
ld14_node: /opt/ros/humble/lib/librcpputils.so
ld14_node: /opt/ros/humble/lib/librosidl_runtime_c.so
ld14_node: /opt/ros/humble/lib/librcutils.so
ld14_node: CMakeFiles/ld14_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ld14_node"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ld14_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ld14_node.dir/build: ld14_node
.PHONY : CMakeFiles/ld14_node.dir/build

CMakeFiles/ld14_node.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ld14_node.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ld14_node.dir/clean

CMakeFiles/ld14_node.dir/depend:
	cd /data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14 /data/ROS2/ROS2_Test/Code/12_Sensor_ws/src/ld14 /data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14 /data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14 /data/ROS2/ROS2_Test/Code/12_Sensor_ws/build/ld14/CMakeFiles/ld14_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ld14_node.dir/depend

