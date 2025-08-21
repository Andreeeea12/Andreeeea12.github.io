cmake_minimum_required(VERSION 3.16)

add_executable(hotel_bnb_cli
    src/main.cpp
)

target_include_directories(hotel_bnb_cli PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)