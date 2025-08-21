cmake_minimum_required(VERSION 3.16)
project(GestionaleSuite LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(apps/vehicle_rental)
add_subdirectory(apps/restaurant_pos)
add_subdirectory(apps/hotel_bnb)