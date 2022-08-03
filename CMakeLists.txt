cmake_minimum_required(VERSION 3.22 FATAL_ERROR)
project(learnopengl_m1 VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")
set(CMAKE_BUILD_TYPE Debug)

add_executable(learnopengl_m1 main.cpp)

find_package(glfw3 3.4 REQUIRED)
find_package(OpenGL REQUIRED)

target_include_directories(learnopengl_m1 PUBLIC ${OPENGL_INCLUDE_DIR})

target_link_libraries(learnopengl_m1 "-framework Cocoa")
target_link_libraries(learnopengl_m1 "-framework OpenGL")
target_link_libraries(learnopengl_m1 "-framework IOKit")
target_link_libraries(learnopengl_m1 glfw ${OPEN_gl_LIBRARY})
