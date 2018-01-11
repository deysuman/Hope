cmake_minimum_required(VERSION 3.9)
project(Hope)

set(APP_INCLUDE include)

set(CMAKE_CXX_STANDARD 17)

#Include the directories and now your cpp files will recognize your headers
include_directories(include)
include_directories(module)

set(
        SOURCE_FILES
        cli/main.c
        include/hope.h
        module/os.c module/os.h cli/vm.c module/io.c)

add_executable(Hope ${SOURCE_FILES})