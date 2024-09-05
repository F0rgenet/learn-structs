add_library(Utils input.cpp input.h)


target_include_directories(Utils PUBLIC
        "${PROJECT_SOURCE_DIR}/structs"
)