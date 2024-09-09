add_library(Interactions inclusion.cpp inclusion.h intersection.cpp intersection.h)


target_include_directories(Interactions PUBLIC
        "../structs"
        "../utils"
)