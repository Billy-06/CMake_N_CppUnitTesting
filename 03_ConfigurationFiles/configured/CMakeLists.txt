# The reason we have a .in extensions appended to the configure.hpp.in file
# is to indicate that it is the input file. How ever the out put file we're
# making config.hpp is a regular .hpp file

# The configure file function allows us to copy a file in different
# location and modify its content
configure_file(
    "config.hpp.in"
    "${CMAKE_BINARY_DIR}/configured_files/include/config.hpp" ESCAPE_QUOTES
)