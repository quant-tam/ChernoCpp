cmake_minimum_required(VERSION 3.31)
project(Game)

set(CMAKE_CXX_STANDARD 20)

# 创建静态库
add_library(engine STATIC src/Engine.cpp src/Engine.h)


add_executable(Game Application.cpp)

# 链接静态库到可执行文件
target_link_libraries(${PROJECT_NAME} engine)

# 包含头文件路径
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
