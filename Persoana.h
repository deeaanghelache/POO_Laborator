//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_PERSOANA_H
#define POO_LABORATOR_PERSOANA_H

#include <string>

class Persoana {
    private:
        std::string nume;

    public:
        explicit Persoana(const std::string &nume);
        virtual ~Persoana();
};


#endif //POO_LABORATOR_PERSOANA_H
