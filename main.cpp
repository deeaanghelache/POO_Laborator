#include <iostream>
#include "Persoana.h"
#include "Lista.h"
#include "Task.h"
#include "Tracker.h"
#include "Backlog.h"
#include "Planner.h"


int main()
{
    Persoana persoana1("nume");
    Planner planner_pers1((std::string &) "nume");
    Lista ToDoList((std::string &) "nume", (std::string &)"data");
    Task task1((std::string &)"nume", (std::string &)"stare"), task2((std::string &)"nume", (std::string &)"stare"), task3((std::string &)"nume", (std::string &)"nume");
    Tracker tracker1("nume", "stare"), tracker2("nume", "stare");
    Backlog backlog1((std::string &)"nume", (std::string &)"data_limita");

    return 0;

}

