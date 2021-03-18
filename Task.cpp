//
// Created by Andreea Anghelache on 15.03.2021.
//

#include "Task.h"
#include <iostream>

Task::Task(const std::string &nume, const std::string &stare) : nume(nume), stare(stare) {}


// Constructor de copiere
Task::Task(const Task &tsk) {
    nume=tsk.nume;
    stare=tsk.stare;
    std::cout<<"cc"<<nume<<"\n";
}

Task::~Task() {
    std::cout << "destructor task " + nume + "\n";
}

std::ostream &operator<<(std::ostream &os, const Task &tsk) {
    os << "Nume: " << tsk.nume << " " << "Stare: " << tsk.stare << "\n";
    return os;
}

Task &Task::operator=(const Task &tsk) {
    if(this != &tsk) {
        nume=tsk.nume;
        stare=tsk.stare;
    }
    std::cout<<"op= task "<<nume<<"\n";
    return *this;
}

std::string Task::getter_nume() {
    return nume;
}

std::string Task::getter_stare() {
    return stare;
}

