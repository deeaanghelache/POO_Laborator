//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_BACKLOG_H
#define POO_LABORATOR_BACKLOG_H

#include <string>
#include <ostream>

class Backlog {
private:
    std::string nume, data_limita;
public:
    Backlog(const std::string &nume, const std::string &data_limita);
    std::string getter_nume();
    std::string getter_dataLimita();
    virtual ~Backlog();
    friend std::ostream &operator<<(std::ostream &os, const Backlog &bkl);
};


#endif //POO_LABORATOR_BACKLOG_H
