cmake_minimum_required(VERSION 3.5)

project(ebayAnzeige LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB source_files
    "*.h"
    "*.cpp")

add_executable( ebayAnzeige ${source_files})
