cmake_minimum_required(VERSION 3.1.0)
 
# find gtest
find_package(GTest REQUIRED)

# find gmock
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/test/cmake_utils")
find_package(GMock REQUIRED)
include_directories(${GMOCK_INCLUDE_DIRS})

# create executable for tests
add_executable(Tests main.cpp projectLib/ProjectExampleTest.cpp)

# link to gtest - private - because it is internally used
target_link_libraries(Tests PRIVATE ProjectLib GTest::GTest ${GMOCK_BOTH_LIBRARIES})
