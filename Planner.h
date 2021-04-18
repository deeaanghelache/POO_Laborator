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
    std::vector<std::shared_ptr<Lista>> Liste;
    std::vector<std::shared_ptr<Backlog>> Backlogs;

public:
    explicit Planner(const std::string &nume);
    std::string getter_nume();
    std::vector<std::shared_ptr<Lista>> getter_liste();
    std::vector<std::shared_ptr<Backlog>> getter_backlogs();
    void add_lista(const std::shared_ptr<Lista> &ToDoList);
    void add_backlog(const std::shared_ptr<Backlog> &backl);
    void setter_nume(const std::string& n);
    void remove_lista(std::shared_ptr<Lista> &ToDoList);
    void remove_backlog(std::shared_ptr<Backlog> &backl);
    virtual ~Planner();
    friend std::ostream &operator<<(std::ostream &os, const Planner &planner);

};


#endif //POO_LABORATOR_PLANNER_H
