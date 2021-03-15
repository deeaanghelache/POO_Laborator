//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_PLANNER_H
#define POO_LABORATOR_PLANNER_H

#include <string>

class Planner {
private:
    std::string nume, stare;
public:
    explicit Planner(std::string &nume);
    virtual ~Planner();
};


#endif //POO_LABORATOR_PLANNER_H
