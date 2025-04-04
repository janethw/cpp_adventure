# cpp_adventure

## Running tests
##### Clear build dir if clean start required
- ```rmdir /s build```
##### Create build directory at project root level
- ```mkdir build```
##### Switch into the build dir
- ```cd build```
##### To clear cache in build dir if required
- ```clear --CMakeCache.txt```
##### Run CMake
- ```cmake -G "MinGW Makefiles" ..```
##### Compile the project 
- ```cmake --build```
##### From the Build directory, run tests using CTest
- ```ctest``` or ```ctest -V``` for more detailed output
##### Run the program
- ```./filename.exe``` in src