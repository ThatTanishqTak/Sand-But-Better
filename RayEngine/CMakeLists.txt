cmake_minimum_required(VERSION 3.20)
project(RayEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${OutputDir}")

add_library(${PROJECT_NAME} STATIC 
    "src/Window/WindowsWindow.h" "src/Window/WindowsWindow.cpp" "src/Grid/Grid.h" "src/Grid/Grid.cpp")

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_SOURCE_DIR}/RayEngine/src
    ${CMAKE_SOURCE_DIR}/RayEngine/vendor/raylib/include)

target_link_libraries(${PROJECT_NAME} PUBLIC
    winmm.lib
    ${CMAKE_SOURCE_DIR}/RayEngine/vendor/raylib/lib/raylib.lib)