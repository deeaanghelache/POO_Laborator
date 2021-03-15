//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Planner.h"

Planner::Planner(std::string &nume) {
    this->nume=nume;
}

Planner::~Planner()
{
    std::cout << "destructor planner" + nume + "\n";
}
