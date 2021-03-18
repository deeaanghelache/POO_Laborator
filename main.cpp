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
    Planner planner_pers1( "nume");
    Lista ToDoList("Lista 1", "15.01.2021");
    Task task1("task1", "yes"), task2("task2", "no"), task3("task3", "maybe");
    Tracker tracker1("nume", "stare"), tracker2("nume", "stare");
    Backlog backlog1("nume", "data_limita");

    ToDoList.add_task(task1);
    ToDoList.add_task(task2);
    ToDoList.add_task(task3);

//    operator<<(std::cout, tracker1);
//    operator<<(std::cout, ToDoList);

    return 0;

}

