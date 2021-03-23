cmake_minimum_required(VERSION 3.10)
project(programa VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)


set(src_include_cppconmenu
	include/conmenu/menu.hpp
	include/conmenu/opcion.hpp
)

set(src_cppconmenu
	${src_include_cppconmenu}
	src/cppconmenu/menu.cpp
)

set(src_include_universidad
	include/universidad/universidad.hpp
)
set(src_universidad
	${src_include_universidad}
	src/universidad/universidad.cpp
)

set(src_files
	${src_cppconmenu}
	${src_universidad}
)

set(sources
	${src_files}
)

add_executable(${PROJECT_NAME} ${sources} src/source.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE include)
