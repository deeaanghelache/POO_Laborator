//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Lista.h"

Lista::Lista(const std::string &nume, const std::string &data) : nume(nume), data(data) {}

Lista::~Lista() {
    std::cout << "destructor lista " + nume +"\n";
}

std::ostream &operator<<(std::ostream &os, const Lista &lst) {
    os << "Nume: " << lst.nume << " " << "Date: " << lst.data << "\n";
    for(auto &tsk : lst.Taskuri)
        os<<" "<<tsk;
    return os;
}

void Lista::add_task(const Task &tsk) {
    Taskuri.push_back(tsk);
}

std::string Lista::getter_nume() {
    return nume;
}

std::string Lista::getter_data() {
    return data;
}

std::vector<Task> Lista::getter_vector() {
    return Taskuri;
}

