# FILEPATH: ./CMakeLists.txt

# This CMakeLists.txt file sets the minimum required CMake version to 3.21.
# The variables CMAKE_PROJECT_NAME, CMAKE_PROJECT_VERSION, CMAKE_CXX_STANDARD, and CMAKE_CXX_STANDARD_REQUIRED
# are expected to be set in the CmakePresets.json file.
cmake_minimum_required(VERSION 3.21)
project(${CMAKE_PROJECT_NAME})

# Add a directory to the search path for header files.
# include_directories(${CMAKE_SOURCE_DIR}/include)

# Generate an executable from the specified source file.
# add_executable(DemoExecutable main.cpp)

# Add subdirectories that might contain additional CMakeLists.txt files.
# add_subdirectory(subfolder)

# Enable searching for and using libraries.
# find_package(SomeLibrary REQUIRED)

# Link a library with the executable target.
# target_link_libraries(DemoExecutable PRIVATE SomeLibrary)

# Optional compiler flags for additional optimizations or warnings.
# target_compile_options(DemoExecutable PRIVATE -Wall -Wextra -O3)
