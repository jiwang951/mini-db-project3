cmake_minimum_required(VERSION 3.10)

# 项目信息
project(MiniDB CXX)

# 设置可执行文件
add_executable(observer mini_db.cpp)

# 指定可执行文件的输出路径
set_target_properties(observer PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
