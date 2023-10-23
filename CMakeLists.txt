cmake_minimum_required(VERSION 3.23)
project(minConsumerLib CXX)

include(FetchContent)

FetchContent_Declare(
  minLib
  GIT_REPOSITORY https://github.com/psyinf/cmake_min_lib.git
  GIT_TAG        f46a822abc353a4679d74be428a35ebc597f10ca
  
  #SYSTEM
)

FetchContent_MakeAvailable(minLib)
 
add_library(${PROJECT_NAME} STATIC)
target_link_libraries(${PROJECT_NAME}
PUBLIC
    minLib::minLib
)

target_sources(${PROJECT_NAME}
PRIVATE 
    src/minConsumerLib.cpp
INTERFACE
    src/minConsumerLib.h
)


