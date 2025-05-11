cmake_minimum_required(VERSION 3.31)
project(GlfwLib)

set(CMAKE_CXX_STANDARD 20)

# 查找 GLFW 库
include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/lib)

add_executable(GlfwLib main.cpp)

find_package(glfw3 REQUIRED)
# 链接 GLFW 库及 macos 系统框架
target_link_libraries(${PROJECT_NAME} glfw)
if (APPLE)
    target_link_libraries(${PROJECT_NAME}
            "-framework Cocoa"
            "-framework OpenGL"
            "-framework IOKit"
            "-framework CoreVideo"
    )
endif ()
