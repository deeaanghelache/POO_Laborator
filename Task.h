//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_TASK_H
#define POO_LABORATOR_TASK_H

#include <string>
#include <ostream>

class Task {
private:
    std::string nume, stare;
public:
    Task(const std::string &nume, const std::string &stare);
    Task(const Task &tsk);
    Task &operator=(const Task &tsk);
    std::string getter_nume();
    std::string getter_stare();
    friend std::ostream &operator<<(std::ostream &os, const Task &tsk);
    virtual ~Task();
};


#endif //POO_LABORATOR_TASK_H
