#
# @file CMakeLists.txt
# Configuration file for the Calculator project using CMake.
#
# This CMake configuration file defines the project name, version, and the
# executable target. It includes CTest configurations for testing support
# and CPack configurations for packaging the project.
#
# @author Gage Miller


# CMake minimum version requirement
cmake_minimum_required(VERSION 3.5.0)

# Project definition with name, version, and supported languages
project(Calculator VERSION 0.1.0 LANGUAGES C CXX)

# Include CTest for testing support
include(CTest)
enable_testing()

# Define the executable target named "Calculator"
add_executable(Calculator ./src/main.cpp ./src/menu.cpp ./include/mathEngine.h)

# Set CPack variables for packaging
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
