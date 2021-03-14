cmake_minimum_required(VERSION 3.10)
project(programa VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

set(src_include
    
)

set(src_files

)

set(sources
    ${src_include}
    ${src_files}
)

add_executable(${PROJECT_NAME} ${source} src/source.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE include)
