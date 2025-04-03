# Define the test executable
add_executable(MyApp_tests test_main.cpp)

# Link GoogleTest libraries
target_link_libraries(MyApp_tests PRIVATE gtest gtest_main)

# Add this test to CTest
add_test(NAME MyApp_tests COMMAND MyApp_tests)