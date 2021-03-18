//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Planner.h"

Planner::Planner(const std::string &nume) : nume(nume) {}

Planner::~Planner()
{
    std::cout << "destructor planner " + nume + " \n";
}

std::ostream &operator<<(std::ostream &os, const Planner &planner) {
    os << "Nume: " << planner.nume << "\n";
    return os;
}

std::string Planner::getter_nume() {
    return nume;
}

