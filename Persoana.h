//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_PERSOANA_H
#define POO_LABORATOR_PERSOANA_H

#include <string>
#include <ostream>
#include "Planner.h"

class Persoana {
    private:
        std::string nume;
        Planner planner;
    public:
        explicit Persoana(const std::string &nume, const Planner& planner);
        std::string getter_nume();
        void setter_nume(const std::string& n);
        virtual ~Persoana();
        friend std::ostream &operator<<(std::ostream &os, const Persoana &pers);
};


#endif //POO_LABORATOR_PERSOANA_H
