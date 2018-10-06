cmake_minimum_required(VERSION 3.12)
project(visualSorter)

set(CMAKE_CXX_STANDARD 14)

add_executable(visualSorter main.cpp ProgramWindow.cpp ProgramWindow.h Sorter.cpp Sorter.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:\\sfml\\mingw\\lib\\cmake\\SFML")
find_package(SFML COMPONENTS window graphics)

if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(visualSorter sfml-window sfml-graphics)
endif()
