cmake_minimum_required(VERSION 2.8)
project(hello_world)
find_package( OpenCV REQUIRED )
add_executable (hello_world src/hello_world.cpp ) 
target_link_libraries( hello_world  ${OpenCV_LIBS} )
