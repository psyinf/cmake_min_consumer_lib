cmake_minimum_required(VERSION 3.23)
set(PROJECT minConsumerLib)
project(${PROJECT} CXX)

include(FetchContent)

FetchContent_Declare(
  minLib
  GIT_REPOSITORY https://github.com/psyinf/cmake_min_lib.git
  GIT_TAG        HEAD
  GIT_PROGRESS ON
)

FetchContent_GetProperties(minLib)
if(NOT minLib)
  # Fetch the content using previously declared details
  FetchContent_Populate(minLib)

  # Set custom variables, policies, etc.
  # ...

  # Bring the populated content into the build
  #add_subdirectory(${minLib_SOURCE_DIR} ${minLib_BINARY_DIR})
endif()
FetchContent_MakeAvailable(minLib)
add_library(${PROJECT} STATIC)

target_link_libraries(${PROJECT}
PUBLIC
    minLib::minLib
)

target_sources(${PROJECT}
PRIVATE 
    src/minConsumerLib.cpp
INTERFACE
    src/minConsumerLib.h
)


