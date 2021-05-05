//
// Created by Andreea Anghelache on 11.04.2021.
//

#include "ReadingTracker.h"

void ReadingTracker::setter_stare(const std::string &s) {
//    stare = s;
    if (this->nr_pagini != 0)
        stare = "yes";
    else
        stare = "no";
}

void ReadingTracker::setter_pagini(int &pagini) {
    nr_pagini = pagini;
}

std::ostream &operator<<(std::ostream &os, const ReadingTracker &rt) {
    if (rt.nr_pagini >= 0)
        os << "\t\t\t\tNume Reading Tracker: " << rt.nume << "\n\t\t\t\t\t" << "Stare Reading Tracker: " << rt.stare
           << "\n\t\t\t\t\t" << "Numar Pagini Citite: " << rt.nr_pagini << "\n";
    else
        os << "\t\t\t\tNume Reading Tracker: " << rt.nume
           << " !!!!numarul de pagini pentru Reading Tracker a fost introdus gresit!!!!";
    return os;
}

ReadingTracker::ReadingTracker(const std::string &nume, const std::string &stare, int nr_pagini) : Tracker(nume, stare),
                                                                                                   nr_pagini(
                                                                                                           nr_pagini) {}

int ReadingTracker::getter_pagini() {
    return nr_pagini;
}

void ReadingTracker::verifica_pagini() {
    if (this->getter_pagini() < 0)
        throw numar_negativ_pagini(this->getter_pagini());
}
