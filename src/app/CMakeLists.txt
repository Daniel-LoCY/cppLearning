cmake_minimum_required(VERSION 3.16.3)

project(HelloWorld)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp main2.cpp)

# 目前不知道為什麼加不加都沒差
# target_link_libraries(${PROJECT_NAME} calc)