file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/../external/CMakeLists.txt.in ${CMAKE_BINARY_DIR}/googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download)
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download)
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
        ${CMAKE_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/interactions)
include_directories(${CMAKE_SOURCE_DIR}/src/utils)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.cpp)
add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests gtest_main Structs Utils Interactions)
add_test(NAME runTests COMMAND runTests)