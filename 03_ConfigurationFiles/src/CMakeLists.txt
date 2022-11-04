add_library(${LIBRARY_NAME} STATIC Library.cc)

target_include_directories(${LIBRARY_NAME} PUBLIC 
"./"
"${CMAKE_BINARY_DIR}/configured_files/include"
)
