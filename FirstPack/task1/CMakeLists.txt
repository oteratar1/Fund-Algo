cmake_minimum_required(VERSION 3.10)
project(task1)

# Установка стандарта C
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Флаги компиляции
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -O2")

# библиотека с функциями
add_library(${CMAKE_PROJECT_NAME}_lib src/functions.c)
target_include_directories(${CMAKE_PROJECT_NAME}_lib  PUBLIC include)
# Основная программа

add_executable(${CMAKE_PROJECT_NAME}_exe main.c)
target_link_libraries(${CMAKE_PROJECT_NAME}_exe ${CMAKE_PROJECT_NAME}_lib m)
