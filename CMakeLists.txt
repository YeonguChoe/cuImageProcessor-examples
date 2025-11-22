cmake_minimum_required(VERSION 3.2)
project(cuImageProcessor_examples)

set(CMAKE_CXX_STANDARD 26)

add_executable(cuImageProcessor_examples src/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_link_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(${PROJECT_NAME} PRIVATE
        cuImageProcessor
)