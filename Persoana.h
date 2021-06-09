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
        // presupunem ca o persoana are un singur planner
        int suma_plata;
public:
    const std::string &getNume() const;
    explicit Persoana(const std::string &nume, const Planner& planner);

    Persoana(const std::string &nume, const Planner &planner, int sumaPlata);

    std::string getter_nume();
    void setter_nume(const std::string& n);
    friend bool a_platit(const Persoana& persoana);

    bool operator==(const Persoana &rhs) const;

    bool operator!=(const Persoana &rhs) const;

    virtual ~Persoana();
        friend std::ostream &operator<<(std::ostream &os, const Persoana &pers);
};


#endif //POO_LABORATOR_PERSOANA_H
