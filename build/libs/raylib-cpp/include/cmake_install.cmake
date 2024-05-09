# Install script for directory: /home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/AudioDevice.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/AudioStream.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/AutomationEventList.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/BoundingBox.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Camera2D.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Camera3D.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Color.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/FileData.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/FileText.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Font.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Functions.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Gamepad.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Image.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Keyboard.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Material.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Matrix.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Mesh.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/MeshUnmanaged.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Model.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/ModelAnimation.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Mouse.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Music.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Ray.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/RayCollision.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/RaylibException.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/raylib-cpp-utils.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/raylib-cpp.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/raylib.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/raymath.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Rectangle.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/RenderTexture.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Shader.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Sound.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Text.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Texture.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/TextureUnmanaged.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Touch.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Vector2.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Vector3.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Vector4.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/VrStereoConfig.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Wave.hpp"
    "/home/austihh/OOP-Project/OOP-Project/libs/raylib-cpp/include/Window.hpp"
    )
endif()

