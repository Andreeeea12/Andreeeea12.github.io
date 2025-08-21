cmake_minimum_required(VERSION 3.16)

add_executable(restaurant_pos_cli
    src/main.cpp
)

target_include_directories(restaurant_pos_cli PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)