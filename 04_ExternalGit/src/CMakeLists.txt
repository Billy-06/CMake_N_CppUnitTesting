set(
    LIBRARY_SRCS
    Library.cc
)

set(
    LIBRARY_HEADERS
    Library.h
)

add_library(
    ${LIBRARY_NAME} STATIC 
    ${LIBRARY_SRCS}
    ${LIBRARY_HEADERS}
    )

target_include_directories(${LIBRARY_NAME} PUBLIC 
"./"
"${CMAKE_BINARY_DIR}/configured_files/include"
)
