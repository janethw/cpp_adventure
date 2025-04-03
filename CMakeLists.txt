cmake_minimum_required(VERSION 4.0.0)
project(MyApp)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 11)

# # Include GoogleTest as an external project
# include(FetchContent)
# set(FETCHCONTENT_FULLY_DISCONNECTED OFF CACHE BOOL "Disable FetchContent download" FORCE)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/refs/heads/main.zip
# )
# FetchContent_MakeAvailable(googletest)

# Specify the path to GoogleTest
set(GTEST_DIR "C:/Tools/googletest")

# Include the GoogleTest directory and add its subdirectory
include_directories(${GTEST_DIR}/googletest/include)
include_directories(${GTEST_DIR}/googlemock/include)
add_subdirectory(${GTEST_DIR} googletest-build)

# Enable testing globally
enable_testing()

# Add subdirectory
add_subdirectory(cpp_adventure)