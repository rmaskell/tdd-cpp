include_directories("${PROJECT_SOURCE_DIR}")

set(PROJECT_TEST_NAME ${PROJECT_NAME}-tests)

# First Simple Google Test
add_executable(${PROJECT_TEST_NAME} main.cpp fibonacci_tests.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_TEST_NAME} gtest gmock_main ${PROJECT_NAME})

add_test(NAME ${PROJECT_TEST_NAME} COMMAND ${PROJECT_TEST_NAME})
