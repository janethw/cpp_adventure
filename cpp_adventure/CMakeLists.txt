# Define the main executable
add_executable(MyApp src/main.cpp)

# set variable SRC_CLASSES to hold class .cpp files
set(SRC_CLASSES src/classes/room.cpp, src/classes/thing.cpp)

# set variable SRC_FUNCTIONS to hold function .cpp files
set(SRC_FUNCTIONS src/functions/enterRoom.cpp)

# add libraries for files in the classes dir and functions dir
add_library(lib_classes ${SRC_CLASSES})
add_library(lib_functions ${SRC_FUNCTIONS})

# in the library, specify the include paths for header (.h) files 
target_include_directories(lib_classes PUBLIC src/classes)
target_include_directories(lib_functions PUBLIC src/functions)

# link lib_classes & lib_functions libraries to MyApp executable
target_link_libraries(MyApp PRIVATE lib_classes)
target_link_libraries(MyApp PRIVATE lib_functions)