//
// Created by Andreea Anghelache on 15.03.2021.
//

// planner = lista + backlog

#ifndef POO_LABORATOR_PLANNER_H
#define POO_LABORATOR_PLANNER_H

#include <string>
#include <ostream>
#include "Lista.h"
#include "Backlog.h"

class Planner {

private:
    std::string nume;
    std::vector<Lista> Liste;
    std::vector<Backlog> Backlogs;

public:
    explicit Planner(const std::string &nume);
    std::string getter_nume();
    void add_lista(const Lista &ToDoList);
    void add_backlog(const Backlog &backl);
    void setter_nume(const std::string& n);
    void remove_lista(Lista &ToDoList);
    void remove_backlog(Backlog &backl);
    virtual ~Planner();
    friend std::ostream &operator<<(std::ostream &os, const Planner &planner);

};


#endif //POO_LABORATOR_PLANNER_H
