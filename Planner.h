//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_PLANNER_H
#define POO_LABORATOR_PLANNER_H

#include <string>
#include <ostream>

class Planner {
private:
    std::string nume;
public:
    explicit Planner(const std::string &nume);
    std::string getter_nume();
    virtual ~Planner();
    friend std::ostream &operator<<(std::ostream &os, const Planner &planner);
};


#endif //POO_LABORATOR_PLANNER_H
