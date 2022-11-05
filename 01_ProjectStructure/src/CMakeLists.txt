set(
    LIBRARY_SRCS
    "Library.cc"
    )

set(
    LIBRARY_HEADERS
    "Library.h"
    )

add_library(
    Library
    STATIC
    ${LIBRARY_SRCS}
    ${LIBRARY_HEADERS})

target_include_directories(Library PUBLIC ./)
