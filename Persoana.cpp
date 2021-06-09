//
// Created by Andreea Anghelache on 15.03.2021.
//

#include <iostream>
#include "Persoana.h"
#include <string>

Persoana::Persoana(const std::string &nume, const Planner& planner) : nume(nume), planner(planner){}

Persoana::~Persoana()=default;
//{
//    std::cout << "destructor persoana " + nume + " \n";
//}

std::ostream &operator<<(std::ostream &os, const Persoana &pers) {
    os << "Nume persoana: " << pers.nume << "\n" << pers.planner << "\n";
    return os;
}

std::string Persoana::getter_nume() {
    return nume;
}

void Persoana::setter_nume(const std::string& n) {
    nume = n;
}

bool a_platit(const Persoana &persoana) {
    if(persoana.suma_plata != 0)
        return true; //persoana a platit planner-ul daca suma platii e != 0
    else
        return false;
}

bool Persoana::operator==(const Persoana &rhs) const {
    return nume == rhs.nume;
}

bool Persoana::operator!=(const Persoana &rhs) const {
    return !(rhs == *this);
}

const std::string &Persoana::getNume() const {
    return nume;
}

Persoana::Persoana(const std::string &nume, const Planner &planner, int sumaPlata) : nume(nume), planner(planner),
                                                                                     suma_plata(sumaPlata) {}



