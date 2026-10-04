cmake_minimum_required(VERSION 4.3)
project(module2)

set(CMAKE_CXX_STANDARD 17)

# jede .cpp in einem Unterordner wird ein eigenes Programm
file(GLOB LABS CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/*/*.cpp")

foreach(SRC ${LABS})
    get_filename_component(DIR ${SRC} DIRECTORY)
    get_filename_component(NAME ${DIR} NAME)          # z.B. "2.2.7"
    string(MAKE_C_IDENTIFIER "lab_${NAME}" TARGET)    # -> "lab_2_2_7"
    add_executable(${TARGET} "${SRC}")
endforeach()
