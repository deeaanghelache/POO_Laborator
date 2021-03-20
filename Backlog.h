//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_BACKLOG_H
#define POO_LABORATOR_BACKLOG_H

#include <string>
#include <ostream>
#include <vector>
#include "Task.h"

class Backlog {
private:
    std::string nume, data_limita;
    std::vector<Task> TaskuriNeplanificate;
public:
    Backlog(const std::string &nume, const std::string &data_limita);
    std::string getter_nume();
    std::string getter_dataLimita();
    std::vector<Task> getter_vector();
    void remove_task(const Task &tsk);
    void add_task(const Task &tsk);
    void setter_nume(const std::string& n);
    void setter_dataLimita(const std::string& dl);
    friend bool operator==(const Backlog &bck1, const Backlog &bck2);
    virtual ~Backlog();
    friend std::ostream &operator<<(std::ostream &os, const Backlog &bkl);
};


#endif //POO_LABORATOR_BACKLOG_H
