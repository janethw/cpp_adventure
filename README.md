# cpp_adventure

## Running the app and tests
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
##### Compile the project in the current directory
- ```cmake --build .``` 
##### From the Build directory, run tests using CTest
- ```ctest``` or ```ctest -V``` for more detailed output

## Run the program
- path: cpp_adventure/build/cpp_adventure/MyApp.exe ```MyApp.exe``` having done the build and compile above
or
- ```cd <to main.cpp>```
- ```g++ main.cpp room.cpp -o output```
- ```output.exe```
