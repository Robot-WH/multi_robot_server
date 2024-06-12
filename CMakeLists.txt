cmake_minimum_required(VERSION 3.0.2)
project(robot_server)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
# set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall")
# set(CMAKE_CXX_FLAGS_DEBUG "-O0 -Wall -g -ggdb")
# set(CMAKE_FIND_DEBUG_MODE TRUE)    # cmake find_package() 搜索路径输出

## System dependencies are found with CMake's conventions
find_package(Boost REQUIRED COMPONENTS thread signals)
find_package(Protobuf REQUIRED)
###########
## Build ##
###########
include_directories(
    ./include
)

## Specify additional locations of header files
## Your package locations should be listed before other locations
add_library(server_lib
    src/server.cpp
    src/select_server.cpp
    proto/pose.pb.cc
    proto/obs.pb.cc
    proto/control_cmd.pb.cc
)

target_link_libraries(server_lib ${Protobuf_LIBRARIES})
target_include_directories(server_lib PUBLIC
    ${PROTOBUF_INCLUDE_DIRS}
)

#############
## INSTALL ##
#############

