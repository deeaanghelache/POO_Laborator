//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_TASK_H
#define POO_LABORATOR_TASK_H

#include <string>

class Task {
private:
    std::string nume, stare;
public:
    Task(const std::string &nume1, const std::string &stare1);
    Task(const Task &tsk);
    virtual ~Task();

};


#endif //POO_LABORATOR_TASK_H
