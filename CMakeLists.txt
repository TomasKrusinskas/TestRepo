cmake_minimum_required(VERSION 3.10.0)
project(calculatorv2 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# Main application executable
add_executable(calculatorv2 main.cpp)

# --- GoogleTest Setup ---
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Build the test executable
add_executable(calculatorv2_tests test.cpp)
target_link_libraries(calculatorv2_tests gtest_main)

# Enable test discovery for CTest
include(GoogleTest)
gtest_discover_tests(calculatorv2_tests)
