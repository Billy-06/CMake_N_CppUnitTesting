cmake_minimum_required(
    VERSION 3.16
)

project(
    Cmake_and_CppUnitTesting
    VERSION 0.0.0
    LANGUAGES C CXX
)

# *Important variables*
# setting the default standard
# 
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Create Cmake variables
# Use uppercase words separated by an underscore
# The quotation marks are optional since Cmake is smart
# and auto-detects the type you us

# Best to define variable in the top most dir (or root dir)
# that way they're accessible easility from the nested project
set( LIBRARY_NAME Library )
set( EXECUTABLE_NAME Executable ) 

# https://cmake.org/cmake/help/latest/command/option.html?highlight=option#option

# The option funcion provide a boolean option that can be
# turned on or off.
# The optiond function allows you to provide hint texts as strings
# but are however optional and not required by the compiler.
# Option function - Whether to set the compile executable on  or off

option(COMPILE_EXECUTABLE "Hint: Whether to compile the executable" OFF)

# This add the subdirs that contain cmakelist src files
add_subdirectory(src)

if (COMPILE_EXECUTABLE)
    add_subdirectory(application)
else()
    message("Compiling Without Executbale")
endif()