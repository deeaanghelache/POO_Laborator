//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_PERSOANA_H
#define POO_LABORATOR_PERSOANA_H

#include <string>
#include <ostream>

class Persoana {
    private:
        std::string nume;

    public:
        explicit Persoana(const std::string &nume);
        std::string getter_nume();
        virtual ~Persoana();
        friend std::ostream &operator<<(std::ostream &os, const Persoana &pers);
};


#endif //POO_LABORATOR_PERSOANA_H
