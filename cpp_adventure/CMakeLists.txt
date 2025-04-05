# Define the main executable
add_executable(MyApp src/main.cpp)

# set variable SRC_CLASSES to hold class .cpp files
set(SRC_CLASSES src/classes/room.cpp)

# add library for files in classes
add_library(lib_classes ${SRC_CLASSES})

# in the library, specify the include paths for header (.h) files 
target_include_directories(lib_classes PUBLIC src/classes)

# link lib_classes library to MyApp executable
target_link_libraries(MyApp PRIVATE lib_classes)