//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Persoana.h"
#include <string>

Persoana::Persoana(const std::string &nume) : nume(nume) {}

Persoana::~Persoana() {
    std::cout << "destructor persoana " + nume + " \n";
}

std::ostream &operator<<(std::ostream &os, const Persoana &pers) {
    os << "Nume: " << pers.nume << "\n";
    return os;
}

std::string Persoana::getter_nume() {
    return nume;
}


