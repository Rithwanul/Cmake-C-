cmake_minimum_required(VERSION 3.16)

project(App VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(App
    src/main.cpp
    src/car.cpp
    src/bus.cpp
    src/bike.cpp
)

target_include_directories(App PRIVATE include)

add_custom_target(run ALL
    COMMAND $<TARGET_FILE:App>
    DEPENDS App
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    COMMENT "Running App after build"
)
