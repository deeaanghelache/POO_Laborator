//
// Created by Andreea Anghelache on 18.04.2021.
//

#ifndef POO_LABORATOR_NUMAR_NEGATIV_PAGINI_H
#define POO_LABORATOR_NUMAR_NEGATIV_PAGINI_H

#include <stdexcept>

class numar_negativ_pagini : public std::runtime_error {
public:
    numar_negativ_pagini(int pagini) noexcept;
};


#endif //POO_LABORATOR_NUMAR_NEGATIV_PAGINI_H
