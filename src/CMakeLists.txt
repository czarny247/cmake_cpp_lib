cmake_minimum_required(VERSION 3.1.0)

add_library(ProjectLib SHARED projectLib/ProjectExample.cpp)

target_include_directories(ProjectLib
	PRIVATE ${PROJECT_SOURCE_DIR}/src/projectLib 
	PUBLIC ${PROJECT_SOURCE_DIR}/include/projectLib)

#make it cross-compiling compatsible - use variable for destination path
install(TARGETS ProjectLib 
	LIBRARY DESTINATION /usr/lib)
install(FILES ${PROJECT_SOURCE_DIR}/include/projectLib/ProjectExample.h DESTINATION /usr/include/projectLib)