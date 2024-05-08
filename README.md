<<<<<<< HEAD
# OOP-Project
=======
# TetriCity OOP Game
A puzzle game that uses tetris style pieces. Written in C++.

## How to build and run (Linux & WSL)

Clone the repository from GitHub:
```bash
git clone github.com/AustinH-adl-OOP-Project
```
```bash
cd OOP-Project
```
```bash
mkdir build
```

Install the required libraries:
```bash
sudo apt install build-essential git clang cmake pkg-config
```
```bash
sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev libwayland-dev libxkbcommon-dev
```

Build raylib:
```bash
cd libs/raylib
```
```bash
mkdir build && cd build
```
```bash
cmake -DBUILD_SHARED_LIBS=ON ..
```
```bash
make
```
```bash
sudo make install
```

Build TetriCity:
```bash
cd ../../../build
```
```bash
cmake ..
```
```bash
make
```

Run TetriCity:
```bash
./TetriCity
```

>>>>>>> 2f68524 (Setup submodules, cmake and project structure)
