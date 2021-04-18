//
// Created by Andreea Anghelache on 11.04.2021.
//

#ifndef POO_LABORATOR_READINGTRACKER_H
#define POO_LABORATOR_READINGTRACKER_H

#include"Tracker.h"
#include "numar_negativ_pagini.h"

class ReadingTracker : public Tracker{
private:
    int nr_pagini;
public:
    ReadingTracker(const std::string &nume, const std::string &stare, int nr_pagini);
    void setter_stare(const std::string& s) override;
    void setter_pagini(int& pagini);
    int getter_pagini();
    static void verifica_pagini(ReadingTracker& rt);
    friend std::ostream &operator<<(std::ostream &os, const ReadingTracker &rt);
};


#endif //POO_LABORATOR_READINGTRACKER_H
