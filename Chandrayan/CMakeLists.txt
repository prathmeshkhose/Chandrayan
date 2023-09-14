cmake_minimum_required(VERSION 3.12)

project(Chandrayaan3LunarCraftControl)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable for the main program
add_executable(main main.cpp)

# Add executable for tests
add_executable(tests tests/main.cpp)

# Include directories for header files
target_include_directories(main PRIVATE include)
target_include_directories(tests PRIVATE include)

# Link the Google Test library for tests
find_package(GTest REQUIRED)
target_link_libraries(tests GTest::GTest GTest::Main)

# Enable testing with CTest
include(GoogleTest)
gtest_discover_tests(tests)
