cmake_minimum_required(VERSION 3.5)
project(bp CXX ASM-ATT)

set(CMAKE_BUILD_TYPE Debug)

set(PY_LIBRARIES_DIR /usr/lib/x86_64-linux-gnu)
set(PY_INCLUDE_DIR  /usr/include/python3.4m)

link_directories(${PY_LIBRARIES_DIR})
include_directories(${PY_INCLUDE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Income.h Income.cpp mxt.s)

add_library(bp SHARED ${SOURCE_FILES})

#set_target_properties(bp PROPERTIES COMPILE_FLAGS "-save-temps")
target_link_libraries(bp -lpython3.4m -lboost_python-py34)