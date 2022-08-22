cmake_minimum_required(VERSION 3.0.0)
project(coin_change_problem VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(VS_DEBUGGER_COMMAND_ARGUMENTS 7 1 2 3)

include(CTest)
enable_testing()

include_directories(
        ${CMAKE_SOURCE_DIR}/inc
)

set(SOURCE_FILES
        src/main.cpp
        src/Solution.cpp)

add_executable(coin_change_problem ${SOURCE_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
