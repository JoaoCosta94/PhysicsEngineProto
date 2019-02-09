# Base definitions
cmake_minimum_required(VERSION 3.12)
project(PhysicsEngineProto)

# Set include directories
Set(GLOBAL_INCLUDE Code/Include)
Set(CORE_INCLUDE Code/Include/Core)
Set(EXTERNAL_INCLUDE Code/Include/External)

include_directories(${GLOBAL_INCLUDE}
                    ${CORE_INCLUDE}
                    ${CORE_INCLUDE}
)

# Set Source Files
file(GLOB_RECURSE PROJECT_SOURCES
        ${PROJECT_SOURCE_DIR}/Code/Source/*.h
        ${PROJECT_SOURCE_DIR}/Code/Source/*.hpp
        ${PROJECT_SOURCE_DIR}/Code/Source/*.c
        ${PROJECT_SOURCE_DIR}/Code/Source/*.cpp
)

add_executable(PhysicsEngineProto ${PROJECT_SOURCES})