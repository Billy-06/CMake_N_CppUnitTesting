set(
    EXE_SOURCES
    Main.cc
)

# cmake --build . --target Executable
add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})


# Link the library object files with the executable
# This prevents us from getting linking errors
# cmake --build . --target Library
target_link_libraries(
    ${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME}
)
