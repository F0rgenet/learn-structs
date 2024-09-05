project(google-tests)

add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(google-tests-run test1.cpp test2.cpp)
target_link_libraries(google-tests-run gtest gtest_main)