cmake_minimum_required(VERSION 3.28)
project(ArbolBinario)

set(CMAKE_CXX_STANDARD 17)

add_executable(ArbolBinario main.cpp
        BinaryTree.cpp
        BinaryTree.h)
