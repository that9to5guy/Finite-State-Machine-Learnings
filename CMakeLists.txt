cmake_minimum_required(VERSION 3.10)
project(FiniteStateMachine_BT)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(TARGET FiniteStateMachine_BT)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# Step 1: Declare the target
add_executable(${TARGET})

# Step 2: Add source files
target_sources(
    ${TARGET}
    PRIVATE
        ${SRC_DIR}/main.cpp
        ${SRC_DIR}/FSM.cpp
        ${SRC_DIR}/BTStates/IdleState.cpp
        ${SRC_DIR}/BTStates/SearchState.cpp
)

# Step 3: Include directory
target_include_directories(
    ${TARGET}
    PRIVATE
        ${SRC_DIR}
        ${LIB_DIR}
        ${SRC_DIR}/BTStates
)
