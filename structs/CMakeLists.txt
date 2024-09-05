add_library(Structs circle.cpp circle.h point.cpp point.h rect.cpp rect.h)

target_include_directories(Structs PUBLIC
        "${PROJECT_SOURCE_DIR}/utils"
)