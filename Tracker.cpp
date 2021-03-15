//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Tracker.h"

Tracker::Tracker(const std::string &nume, const std::string &stare) {
    this->nume=nume;
    this->stare=stare;
}

Tracker::~Tracker() {
    std::cout << "destructor tracker" + nume + "\n";
}
