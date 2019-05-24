cmake_minimum_required(VERSION 3.12.0)
project(yaml-config)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to 'Debug' as none was specified.")
  set(CMAKE_BUILD_TYPE Debug)
endif()

add_subdirectory(src)
add_subdirectory("${PROJECT_SOURCE_DIR}/extern/yaml-cpp" "extern/yaml-cpp")

option(PACKAGE_TESTS "Build the tests" ON)

if(PACKAGE_TESTS)
    add_subdirectory("${PROJECT_SOURCE_DIR}/extern/googletest" "extern/googletest")
    enable_testing()
    add_subdirectory(tests)
endif()
