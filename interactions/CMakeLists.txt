add_library(Interactions inclusion.cpp inclusion.h intersections.cpp intersections.h)


target_include_directories(Interactions PUBLIC
        "${PROJECT_SOURCE_DIR}/structs"
)