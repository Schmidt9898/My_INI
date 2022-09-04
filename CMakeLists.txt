cmake_minimum_required(VERSION 3.10)



# set the project name
project(My_INI)

set(CMAKE_CXX_STANDARD 17)

#if (H_DEBUG=="1")
set ( CMAKE_CXX_FLAGS ${flag})
#endif()



# add the executable
add_executable(playground main.cpp
#${CMAKE_SOURCE_DIR}/
)

set(include
${CMAKE_SOURCE_DIR} 

)

target_include_directories(playground PUBLIC ${include} )

#target_link_libraries(playground PUBLIC ${CMAKE_SOURCE_DIR}/)

target_link_directories(playground PUBLIC ${CMAKE_SOURCE_DIR}/)


