//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Backlog.h"

Backlog::~Backlog() {
    std::cout << "destructor backlog " + nume + "\n";
}

Backlog::Backlog(const std::string &nume, const std::string &data_limita) : nume(nume), data_limita(data_limita) {}

std::ostream &operator<<(std::ostream &os, const Backlog &bkl)
{
    os << "\t\t\tNume Backlog: " << bkl.nume << " " << "Data limita: " << bkl.data_limita << "\n";
    for(auto &tsk : bkl.TaskuriNeplanificate)
        os<<" "<<tsk;
    return os;
}

std::string Backlog::getter_nume() {
    return nume;
}

std::string Backlog::getter_dataLimita() {
    return data_limita;
}

std::vector<Task> Backlog::getter_vector() {
    return TaskuriNeplanificate;
}

void Backlog::add_task(const Task &tsk) {
    TaskuriNeplanificate.push_back(tsk);
}

void Backlog::setter_nume(const std::string& n) {
    nume = n;
}

void Backlog::setter_dataLimita(const std::string& dl) {
    data_limita = dl;
}

void Backlog::remove_task(const Task &tsk) {
    for(auto i=TaskuriNeplanificate.begin(); i != TaskuriNeplanificate.end(); ++i)
        if(operator==(tsk, *i))
        {
            TaskuriNeplanificate.erase(i);
            break;
        }
}

bool operator==(const Backlog &bck1, const Backlog &bck2) {
    int ok1=0;
    if (bck1.TaskuriNeplanificate.size() != bck2.TaskuriNeplanificate.size())
        return false;

    if (bck1.TaskuriNeplanificate == bck2.TaskuriNeplanificate)
        ok1=1;

    if (bck1.nume==bck2.nume && bck2.data_limita==bck1.data_limita && ok1 == 1)
        return true;
    return false;
}


