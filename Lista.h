//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_LISTA_H
#define POO_LABORATOR_LISTA_H

#include <string>
#include <ostream>
#include <vector>
#include "Task.h"
#include "Tracker.h"

class Lista {

private:
    std::string nume, data;
    std::vector<Task> Taskuri;
    std::vector<Tracker> tracks;
public:
    Lista(const std::string &nume, const std::string &data);
    void add_task(const Task &tsk);
    void add_trackers(const Tracker &tracks);
    std::string getter_nume();
    std::string getter_data();
    void setter_nume(const std::string& n);
    void setter_data(const std::string& d);
    void remove_task(Task &tsk);
    void remove_tracker(Tracker &track);
    std::vector<Task> getter_tasks();
    std::vector<Tracker> getter_tracks();
    friend bool operator==(const Lista &lst1, const Lista &lst2);  //verifica daca 2 obiecte de tip lista sunt egale
    friend std::ostream &operator<<(std::ostream &os, const Lista &lst);
    virtual ~Lista();

};


#endif //POO_LABORATOR_LISTA_H
