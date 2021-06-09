//
// Created by Andreea Anghelache on 15.03.2021.
//


#include <iostream>
#include "Planner.h"

Planner::Planner(const std::string &nume) : nume(nume) {}

Planner::~Planner()=default;
//{
//    std::cout << "destructor planner " + nume + " \n";
//}

std::ostream &operator<<(std::ostream &os, const Planner &planner) {
    os << "\tNume Planner: " << planner.nume << "\n";
    os<<"\t\tToDoLists:\n";
    for(auto &lst : planner.Liste)
        os<<" "<<*lst;
    os << "\n\t\tBacklogs:\n";
    for(auto &bckl : planner.Backlogs)
        os<<" "<<*bckl;
    return os;
}

std::string Planner::getter_nume() {
    return nume;
}

void Planner::setter_nume(const std::string &n) {
    nume = n;
}

void Planner::add_lista(const std::shared_ptr<Lista> &ToDoList) {
    Liste.push_back(ToDoList);
}

void Planner::add_backlog(const std::shared_ptr<Backlog> &backl) {
    Backlogs.push_back(backl);
}

void Planner::remove_lista(std::shared_ptr<Lista> &ToDoList) {
    for(auto i=Liste.begin(); i != Liste.end(); ++i)
        if(operator==(ToDoList, *i))
        {
            Liste.erase(i);
            break;
        }
}

void Planner::remove_backlog(std::shared_ptr<Backlog> &backl) {
    for(auto i=Backlogs.begin(); i != Backlogs.end(); ++i)
        if(operator==(backl, *i))
        {
            Backlogs.erase(i);
            break;
        }
}

std::vector<std::shared_ptr<Lista>> Planner::getter_liste() {
    return Liste;
}

std::vector<std::shared_ptr<Backlog>> Planner::getter_backlogs() {
    return Backlogs;
}

//bool Planner::operator==(const Planner &rhs) const {
//    return nume == rhs.nume &&
//           Liste == rhs.Liste &&
//           Backlogs == rhs.Backlogs;
//}


