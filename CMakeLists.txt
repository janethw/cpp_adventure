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

# Specify the path to the GoogleTest installation
set(GTEST_DIR "C:/Tools/googletest/")

# Specify the paths for the GoogleTest directory in c:\ (so the compiler knows where to find them)
include_directories(${GTEST_DIR}/googletest/include)
include_directories(${GTEST_DIR}/googlemock/include)
# Add the sub-directory containing the CMakeLists.txt in the Googletest installation root
add_subdirectory(${GTEST_DIR} googletest)

# Enable testing globally
enable_testing()

# Add subdirectory
add_subdirectory(cpp_adventure)
add_subdirectory(cpp_adventure/tests)