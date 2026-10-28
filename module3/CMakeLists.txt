cmake_minimum_required(VERSION 4.3)
project(module3)

set(CMAKE_CXX_STANDARD 14)

# Each LAB file is a standalone program with its own main(),
# so build one executable per file (e.g. target "LAB3.3.6").
file(GLOB LAB_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/LAB*.cpp)
foreach(src ${LAB_SOURCES})
    # Skip placeholder files that don't have a main() yet.
    file(READ ${src} content)
    string(FIND "${content}" "main(" has_main)
    if(has_main EQUAL -1)
        continue()
    endif()
    get_filename_component(name ${src} NAME)
    string(REGEX REPLACE "\\.cpp$" "" name ${name})
    add_executable(${name} ${src})
endforeach()
