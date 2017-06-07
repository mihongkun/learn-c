cmake_minimum_required(VERSION 3.7)
project(learn-c)

set(CMAKE_C_STANDARD 99)

#set(SOURCE_FILES main.c)
#set(SOURCE_FILES 0001.operating.c)
#set(SOURCE_FILES 0002.operating.c)
#set(SOURCE_FILES 0003.operating.c)
#set(SOURCE_FILES 0004.operating.c)
set(SOURCE_FILES 0005.operating.c)


add_executable(learn-c ${SOURCE_FILES})