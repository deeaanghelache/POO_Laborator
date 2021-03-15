//
// Created by Andreea Anghelache on 15.03.2021.
//

#include "Task.h"
#include <iostream>

Task::Task(const std::string &nume1, const std::string &stare1) {
    this->nume=nume;
    this->stare=stare;
}


// Constructor de copiere
Task::Task(const Task &tsk) {
    nume=tsk.nume;
    stare=tsk.stare;}

Task::~Task() {
    std::cout << "destructor task" + nume + "\n";
}

