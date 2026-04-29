cmake_minimum_required(VERSION 3.14)
project(CalculatorProject)

set(CMAKE_CXX_STANDARD 17)

cmake_policy(SET CMP0135 NEW)

add_library(calculator src/calculator.cpp)

target_include_directories(calculator PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Fix runtime mismatch (VERY IMPORTANT)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(runTests tests/test_calculator.cpp)

target_link_libraries(runTests
    calculator
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(runTests)