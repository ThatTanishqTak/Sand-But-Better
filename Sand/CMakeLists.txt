cmake_minimum_required(VERSION 3.20)
project(Sand LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${OutputDir}")

add_executable(Sand)

file(GLOB_RECURSE APP_SRC "src/EntryPoint.cpp" "src/RayEngine.cpp" "src/RayEngine.h" )
target_sources(Sand PRIVATE ${APP_SRC})

target_link_libraries(Sand PUBLIC RayEngine)