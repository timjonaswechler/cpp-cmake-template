cmake_minimum_required(VERSION 3.21)

project(MeinProjekt)

# Setzen der C++-Standardversion
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Hinzufügen der Quelldateien
add_executable(MeinProjekt Source/main.cpp)
