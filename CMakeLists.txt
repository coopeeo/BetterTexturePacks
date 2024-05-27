cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_OSX_ARCHITECTURES "x86_64")
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

project(LuaFilesApi VERSION 1.0.0)

if("${GEODE_TARGET_PLATFORM}" STREQUAL "iOS" OR IOS)
  message(STATUS "building for ios :3")
  unset(CMAKE_OSX_ARCHITECTURES)
  set(CMAKE_OSX_ARCHITECTURES arm64)
  set(CMAKE_OSX_DEPLOYMENT_TARGET "14.0")
  set(CMAKE_SYSTEM_NAME "iOS")
endif()

add_library(${PROJECT_NAME} SHARED
src/main.cpp
)

#include(FetchContent)
#FetchContent_Declare(
#    sol
#    GIT_REPOSITORY https://github.com/ThePhD/sol2.git
#    GIT_TAG eba8662
#)
#FetchContent_MakeAvailable(sol)

#include_directories(${CMAKE_SOURCE_DIR}/path/to/sol2/include)

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

set(LUA_VERSION "lua-5.3.5")

CPMAddPackage("gh:coopeeo/lua-cmake-fork#master")

target_link_libraries(${PROJECT_NAME} lua::lib)