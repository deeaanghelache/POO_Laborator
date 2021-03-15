//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Lista.h"

Lista::Lista(std::string &nume, std::string &data) {
    this->nume=nume;
    this->data=data;
}

Lista::~Lista() {
    std::cout << "destructor lista " + nume +"\n";
}

