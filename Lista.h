//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_LISTA_H
#define POO_LABORATOR_LISTA_H

#include <string>

class Lista {

private:
    std::string nume, data;

public:
    Lista(std::string &nume, std::string &data);
    virtual ~Lista();

};


#endif //POO_LABORATOR_LISTA_H
