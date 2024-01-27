cmake_minimum_required(VERSION 3.10)
project(CPP07)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(
    SOURCES
    ${SOURCE_DIR}/Main.cpp
    ${SOURCE_DIR}/Volume.cpp
    ${SOURCE_DIR}/Log.cpp
    ${SOURCE_DIR}/Angles.cpp
    ${SOURCE_DIR}/FrictionDynamics.cpp
)

add_executable(cppBuild ${SOURCES})