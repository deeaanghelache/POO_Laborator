//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Backlog.h"

Backlog::~Backlog() {
    std::cout << "destructor backlog " + nume + "\n";
}

Backlog::Backlog(std::string &nume, std::string &data_limita) {
    this->nume=nume;
    this->data_limita=data_limita;
}
