cmake_minimum_required(VERSION 3.28)
project(learn-structs)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(interactions)
add_subdirectory(structs)
add_subdirectory(utils)

add_executable(learn-structs main.cpp)

target_include_directories(learn-structs PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/structs"
        "${PROJECT_SOURCE_DIR}/utils"
)

target_link_libraries(learn-structs PUBLIC Structs Utils)