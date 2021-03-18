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
    os << "Nume: " << bkl.nume << " " << "Data limita: " << bkl.data_limita << "\n";
    return os;
}

std::string Backlog::getter_nume() {
    return nume;
}

std::string Backlog::getter_dataLimita() {
    return data_limita;
}


