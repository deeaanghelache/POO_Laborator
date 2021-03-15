cmake_minimum_required(VERSION 3.17)
project(POO_Laborator)

set(CMAKE_CXX_STANDARD 20)

add_executable(POO_Laborator
        main.cpp Persoana.cpp Persoana.h Lista.cpp Lista.h Task.cpp Task.h Tracker.cpp Tracker.h Backlog.cpp Backlog.h Planner.cpp Planner.h)
