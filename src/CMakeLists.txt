add_subdirectory(interactions)
add_subdirectory(structs)
add_subdirectory(utils)

add_executable(learn-structs main.cpp)

target_include_directories(learn-structs PUBLIC
        "${PROJECT_BINARY_DIR}"
        "."
)

target_link_libraries(learn-structs PUBLIC Structs Utils Interactions)