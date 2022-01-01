cmake_minimum_required(VERSION 3.5)

project(myls)

include_directories(include /usr/local/include)

add_executable(${PROJECT_NAME} myls.c)
