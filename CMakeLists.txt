cmake_minimum_required(VERSION 3.0)
project(TetriCity)

# Add raylib-cpp
add_subdirectory(libs/raylib-cpp)

# Set source files
set(SOURCES src/Block.cpp src/Block.hpp src/Blocks.cpp src/Colors.cpp src/Colors.hpp src/main.cpp src/Menu.hpp src/Menu.cpp src/Grid.hpp src/Grid.cpp src/Level.hpp src/Level.cpp src/Levels.hpp src/Levels.cpp src/MainMenu.hpp src/MainMenu.cpp)

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