cmake_minimum_required(VERSION 3.23)
project(minConsumerLib CXX)

include(FetchContent)

FetchContent_Declare(
  minLib
  GIT_REPOSITORY https://github.com/psyinf/cmake_min_lib.git
  GIT_TAG        HEAD
  
  #SYSTEM
)
FetchContent_MakeAvailable(minLib)

add_library(${PROJECT_NAME} STATIC)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME}
PUBLIC
    minLib::minLib
)


target_sources(${PROJECT_NAME}
PRIVATE 
    src/minConsumerLib.cpp
PUBLIC
    src/minConsumerLib.h
)


