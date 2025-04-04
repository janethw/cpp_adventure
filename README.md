# cpp_adventure

## Running tests
##### Clear build dir if clean start required
- ```rmdir /s build```
##### Create build directory at project root level
- ```mkdir build```
##### Switch into the build dir
- ```cd build```
##### Run CMake
- ```cmake -G "MinGW Makefiles" ..```
##### Build the project
- ```mingw32-make```
##### From the Build directory, run tests using CTest
- ```ctest``` or ```ctest -V``` for more detailed output
