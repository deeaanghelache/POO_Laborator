//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Tracker.h"

Tracker::Tracker(const std::string &nume, const std::string &stare) : nume(nume), stare(stare) {}

Tracker::~Tracker() {
    std::cout << "destructor tracker " + nume + " \n";
}

std::ostream &operator<<(std::ostream &os, const Tracker &tracker) {
    os << "Nume: " << tracker.nume << " " << "Stare: " << tracker.stare << "\n";
    return os;
}

std::string Tracker::getter_nume() {
    return nume;
}

std::string Tracker::getter_stare() {
    return stare;
}
