cmake_minimum_required(VERSION 3.0.2)
project(hello-ros-pkg)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(testnode src/testnode.cpp)
target_link_libraries(testnode ${catkin_LIBRARIES})

