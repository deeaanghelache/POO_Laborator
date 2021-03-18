//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_LISTA_H
#define POO_LABORATOR_LISTA_H

#include <string>
#include <ostream>
#include <vector>
#include "Task.h"

class Lista {

private:
    std::string nume, data;
    std::vector<Task> Taskuri;

public:
    Lista(const std::string &nume, const std::string &data);
    void add_task(const Task &tsk);
    std::string getter_nume();
    std::string getter_data();
    std::vector<Task> getter_vector();
    friend std::ostream &operator<<(std::ostream &os, const Lista &lst);
    virtual ~Lista();

};


#endif //POO_LABORATOR_LISTA_H
