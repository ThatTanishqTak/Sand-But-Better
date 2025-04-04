cmake_minimum_required(VERSION 3.20)
project(App LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${OutputDir}")

add_executable(App)

file(GLOB_RECURSE APP_SRC "src/EntryPoint.cpp")
target_sources(App PRIVATE ${APP_SRC})

target_link_libraries(App PUBLIC RayEngine)