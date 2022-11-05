cmake_minimum_required(
    VERSION 3.16
)

project(
    Cmake_and_CppUnitTesting
    VERSION 1.0.0
    LANGUAGES C CXX
)

# *Important variables*
# setting the default standard
# 
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)


# set the cmake module path
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
# git submodules can be use to include non-cmake projects
include(AddGitSubmodule)

# fetch content is used for just cmake project
include(FetchContent)

add_git_submodule(dependencies/json)

# Keep in mind that fetch content requires that the 
# projects included be cmake projects
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 8.1.1
    )
FetchContent_MakeAvailable(fmt)
    
# Keep in mind that fetch content requires that the 
# projects included be cmake projects
FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG v1.9.2
)
FetchContent_MakeAvailable(spdlog)
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

option(COMPILE_EXECUTABLE "Hint: Whether to compile the executable" ON)

# Add the configuration dir for the configuration to take place first
add_subdirectory(configured)
add_subdirectory(dependencies)
# This add the subdirs that contain cmakelist src files
add_subdirectory(src)

if (COMPILE_EXECUTABLE)
    add_subdirectory(application)
else()
    message("Compiling Without Executbale")
endif()

