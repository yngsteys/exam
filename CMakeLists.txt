cmake_minimum_required(VERSION 3.2...3.27.5)

project(exam)
set(LIB_NAME AS_LIB)
add_library(${LIB_NAME} "")

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(src)
add_subdirectory(test)

