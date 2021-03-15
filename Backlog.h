//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_BACKLOG_H
#define POO_LABORATOR_BACKLOG_H

#include <string>

class Backlog {
private:
    std::string nume, data_limita;
public:
    Backlog(std::string &nume, std::string &data_limita);
    virtual ~Backlog();
};


#endif //POO_LABORATOR_BACKLOG_H
