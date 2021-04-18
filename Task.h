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
    Task(const std::shared_ptr<Task> &tsk);
    Task &operator=(const Task &tsk);
    std::string getter_nume();
    std::string getter_stare();
    void setter_nume(const std::string& n);
    void setter_stare(const std::string& s);
//    static void change_status_to_yes(std::unique_ptr<Task> &tsk);
    friend bool operator==(const Task &tsk1, const Task &tsk2);
    friend std::ostream &operator<<(std::ostream &os, const Task &tsk);
    virtual ~Task();
};


#endif //POO_LABORATOR_TASK_H
