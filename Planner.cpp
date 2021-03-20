//
// Created by Andreea Anghelache on 15.03.2021.
//


#include <iostream>
#include "Planner.h"

Planner::Planner(const std::string &nume) : nume(nume) {}

Planner::~Planner()
{
    std::cout << "destructor planner " + nume + " \n";
}

std::ostream &operator<<(std::ostream &os, const Planner &planner) {
    os << "\tNume Planner: " << planner.nume << "\n";
    os<<"\t\tToDoLists:\n";
    for(auto &lst : planner.Liste)
        os<<" "<<lst;
    os << "\n\t\tBacklogs:\n";
    for(auto &bckl : planner.Backlogs)
        os<<" "<<bckl;
    return os;
}

std::string Planner::getter_nume() {
    return nume;
}

void Planner::setter_nume(const std::string &n) {
    nume = n;
}

void Planner::add_lista(const Lista &ToDoList) {
    Liste.push_back(ToDoList);
}

void Planner::add_backlog(const Backlog &backl) {
    Backlogs.push_back(backl);
}

void Planner::remove_lista(Lista &ToDoList) {
    for(auto i=Liste.begin(); i != Liste.end(); ++i)
        if(operator==(ToDoList, *i))
        {
            Liste.erase(i);
            break;
        }
}

void Planner::remove_backlog(Backlog &backl) {
    for(auto i=Backlogs.begin(); i != Backlogs.end(); ++i)
        if(operator==(backl, *i))
        {
            Backlogs.erase(i);
            break;
        }
}

