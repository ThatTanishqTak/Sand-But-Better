cmake_minimum_required(VERSION 3.20)
project(Sand)

set(OS "")
set(ARCH "")

# Get system name
if(CMAKE_SYSTEM_NAME MATCHES "Windows")
    set(OS "Windows")
        set(ARCH x86)
    if(CMAKE_SIZEOF_VOID_P EQUAL 8)
        set(ARCH x64)
    endif()
endif()

# Combine into a single variable
set(PLATFORM "${OS}-${ARCH}")
set(OutputDir "${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}-${PLATFORM}/${PROJECT_NAME}")

add_subdirectory(RayEngine)
add_subdirectory(Sand)