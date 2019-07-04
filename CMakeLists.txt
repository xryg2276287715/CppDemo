cmake_minimum_required(VERSION 3.14)
project(CppDemo)

set(CMAKE_CXX_STANDARD 14)
aux_source_directory(. main_dir)
add_subdirectory(virtual)
add_executable(demo ${main_dir})
target_link_libraries(demo virtual_lib)