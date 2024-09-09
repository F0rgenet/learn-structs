add_library(Utils input.cpp input.h
        math.h
        math.cpp)


target_include_directories(Utils PUBLIC
        "../structs"
)