cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_OSX_ARCHITECTURES "x86_64")
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

project(LuaFilesApi VERSION 1.0.0)

add_library(${PROJECT_NAME} SHARED
src/main.cpp
)

include_directories(inc)

target_compile_definitions(${PROJECT_NAME} PRIVATE CURRENT_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}")

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "Unable to find Geode SDK! Please define GEODE_SDK environment variable to point to Geode")
else()
    message(STATUS "Found Geode: $ENV{GEODE_SDK}")
endif()

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

setup_geode_mod(${PROJECT_NAME})

set(LUA_ENABLE_SHARED ON)
set(LUA_ENABLE_TESTING ON)

CPMAddPackage("gh:walterschell/Lua#88246d6")

if (WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang" AND CMAKE_CXX_COMPILER_FRONTEND_VARIANT STREQUAL "GNU")
    target_compile_options(lua_static PRIVATE --target=i686-pc-windows-msvc)
    target_link_options(lua_static PRIVATE --target=i686-pc-windows-msvc)
endif()

target_link_libraries(${PROJECT_NAME} lua_static)

