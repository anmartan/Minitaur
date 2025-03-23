cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)

project(Minitaur VERSION 1.0 LANGUAGES CXX)

file(GLOB SOURCES src/*/*.cpp src/*/*.hpp)

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE src/UI src/solver src/generato)

