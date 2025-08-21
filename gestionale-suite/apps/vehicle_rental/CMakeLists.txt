cmake_minimum_required(VERSION 3.16)

add_executable(vehicle_rental_cli
    src/main.cpp
)

target_include_directories(vehicle_rental_cli PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)