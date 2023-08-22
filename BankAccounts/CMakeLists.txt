cmake_minimum_required(VERSION 3.26)
project(PolymorephismeChallange)

set(CMAKE_CXX_STANDARD 17)

add_executable(PolymorephismeChallange main.cpp
        Account.cpp
        Account.h
        Printable.cpp
        Printable.h
        Saving_Account.cpp
        Saving_Account.h
        Checking_Account.cpp
        Checking_Account.h
        Trust_Account.cpp
        Trust_Account.h
        Account_Utility.h
        Account_Utility.cpp
)
