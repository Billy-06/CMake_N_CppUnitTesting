# 0). Create code and CMake file
# 1). mkdir build
# 2). cd build
# 3). cmake # configure cmake
# 4). cmake --build .
# 5). \Debug\Executable.exe [[ call the executable - windows way ]]


cmake_minimum_required(VERSION 3.16)

# Project name, version, description
project(
    Cmake_and_CppUnitTesting
    VERSION 1.0.0
    LANGUAGES C CXX
)

add_executable(
    Executable Main.cc
)
