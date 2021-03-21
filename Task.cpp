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
//    std::cout<<"cc"<<nume<<"\n";
}

Task::~Task()=default;
//{
//    std::cout << "destructor task " + nume + "\n";
//}

std::ostream &operator<<(std::ostream &os, const Task &tsk) {
    os << "\t\t\t\tNume Task: " << tsk.nume << " " << "Stare Task: " << tsk.stare << "\n";
    return os;
}

Task &Task::operator=(const Task &tsk) {
    if(this != &tsk) {
        nume=tsk.nume;
        stare=tsk.stare;
    }
//    std::cout<<"op= task "<<nume<<"\n";
    return *this;
}

std::string Task::getter_nume() {
    return nume;
}

std::string Task::getter_stare() {
    return stare;
}

void Task::setter_nume(const std::string &n) {
    nume = n;
}

void Task::setter_stare(const std::string &s) {
    stare = s;
}

bool operator==(const Task &tsk1, const Task &tsk2) {
    if (tsk2.nume==tsk1.nume && tsk2.stare==tsk1.stare)
        return true;
    return false;
}

void Task::change_status_to_yes(Task &tsk) {
    tsk.stare = "yes";
}


