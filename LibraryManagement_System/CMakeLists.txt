cmake_minimum_required(VERSION 3.26)
project(LibraryManagement_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(LibraryManagement_System main.cpp
        Book.cpp
        Book.h
        MangeBooks.h)
