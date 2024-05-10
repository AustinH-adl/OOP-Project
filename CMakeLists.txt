cmake_minimum_required(VERSION 3.0)
project(TetriCity)

# Add raylib-cpp
add_subdirectory(libs/raylib-cpp)

# Set source files
set(SOURCES src/main.cpp src/Menu.hpp src/Menu.cpp)

# Include and link directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs/raylib-cpp/include ${CMAKE_CURRENT_SOURCE_DIR}/src)
link_directories(libs/raylib/build/raylib)

# Copy files from resources folder
file(COPY src/resources DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Create executable
add_executable(TetriCity ${SOURCES})

# Link against raylib-cpp
target_link_libraries(TetriCity raylib raylib_cpp)

# Set standard cpp to 11
set_target_properties(TetriCity PROPERTIES CXX_STANDARD 11)
