cmake_minimum_required(VERSION 3.17)
project(POO_Laborator)

set(CMAKE_CXX_STANDARD 20)

add_executable(POO_Laborator
        main.cpp Persoana.cpp Persoana.h Lista.cpp Lista.h Task.cpp Task.h Tracker.cpp Tracker.h Backlog.cpp Backlog.h Planner.cpp Planner.h ReadingTracker.cpp ReadingTracker.h MoodTracker.cpp MoodTracker.h numar_negativ_pagini.cpp numar_negativ_pagini.h administratorAplicatie.cpp administratorAplicatie.h)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Persoane.in
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})