cmake_minimum_required(VERSION 4.0.0)
project(my_app)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 11)

# Include Google Test libraries
add_subdirectory(C:/Tools/googletest GoogleTestLib)

# Add executable for main application
add_executable(MainApp src/main.cpp)

# Add subdirectory for tests
add_subdirectory(tests)
