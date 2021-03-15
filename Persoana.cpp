//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Persoana.h"
#include <string>

Persoana::Persoana(const std::string &nume) {
    this->nume=nume;
}

Persoana::~Persoana() {
    std::cout << "destructor persoana " + nume + "\n";
}


