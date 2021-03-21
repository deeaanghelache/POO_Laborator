//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Tracker.h"

Tracker::Tracker(const std::string &nume, const std::string &stare) : nume(nume), stare(stare) {}

Tracker::~Tracker()=default;
//{
//    std::cout << "destructor tracker " + nume + " \n";
//}

std::ostream &operator<<(std::ostream &os, const Tracker &tracker) {
    os << "\t\t\t\tNume Tracker: " << tracker.nume << " " << "Stare Tracker: " << tracker.stare << "\n";
    return os;
}

std::string Tracker::getter_nume() {
    return nume;
}

std::string Tracker::getter_stare() {
    return stare;
}

void Tracker::setter_nume(const std::string &n) {
    nume = n;
}

void Tracker::setter_stare(const std::string &s) {
    stare = s;
}

bool operator==(const Tracker &track1, const Tracker &track2) {
    if (track2.nume==track1.nume && track2.stare==track1.stare)
        return true;
    return false;
}
