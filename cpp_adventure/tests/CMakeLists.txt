# Define the test executable as MyApp_tests
add_executable(MyApp_tests test_main.cpp)

# Link MyApp_tests executable with the GoogleTest libraries
target_link_libraries(MyApp_tests PRIVATE gtest gtest_main)

# Link lib_classes & lib_functions libraries to Room class functionality
target_link_libraries(MyApp_tests PRIVATE lib_classes)
target_link_libraries(MyApp_tests PRIVATE lib_functions)

# Specify the path to the GoogleTest header files so compiler can find them.
target_include_directories(MyApp_tests PRIVATE ${GTEST_DIR}/googletest/include)

# Specify the path to the room.h header file so compiler can find it
target_include_directories(MyApp_tests PRIVATE ../src/classes)
target_include_directories(MyApp_tests PRIVATE ../src/functions)

# Add the test executable to CTest after proj build
add_test(NAME MyApp_tests COMMAND MyApp_tests)