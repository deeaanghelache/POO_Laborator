#include <iostream>
#include <fstream>
#include <unordered_map>
#include "Persoana.h"
#include "Lista.h"
#include "Task.h"
#include "Tracker.h"
#include "Backlog.h"
#include "Planner.h"


int main()
{
//{   Task task1("task1", "yes"), task2("task2", "no"), task3("task3", "maybe");
//    Tracker tracker1("nume", "stare"), tracker2("nume", "stare");
//    Lista ToDoList("Lista 1", "15.01.2021"), ToDoList2("Lista 2", "16.01.2021");
//    ToDoList2.add_trackers(tracker1);
//    ToDoList2.add_trackers(tracker2);
//    ToDoList.add_trackers(tracker1);
//    ToDoList.add_task(task1);
//    ToDoList.add_task(task2);
//    ToDoList.add_task(task3);
//    ToDoList.remove_task(task2);
////    operator<<(std::cout, ToDoList);
//    Backlog backlog1("back1", "data_limita");
//    backlog1.add_task(task1);
//    backlog1.add_task(task2);
//    Planner planner_pers_1("Planner1");
//    planner_pers_1.add_lista(ToDoList);
//    planner_pers_1.add_lista(ToDoList2);
////    planner_pers_1.remove_lista(ToDoList);
//    planner_pers_1.add_backlog(backlog1);
////    planner_pers_1.remove_backlog(backlog1);
////    operator<<(std::cout, planner_pers_1);
//
////    ToDoList.add_task(task1);
////    ToDoList.add_task(task2);
////    ToDoList.add_task(task3);
////    backlog1.add_task(task1);
////    backlog1.add_task(task2);
////    operator<<(std::cout, ToDoList);
//    Persoana persoana1("nume", planner_pers_1);
////    Planner planner_pers1( "nume");
////    Lista ToDoList("Lista 1", "15.01.2021");
////    Task task1("task1", "yes"), task2("task2", "no"), task3("task3", "maybe");
////    Tracker tracker1("nume", "stare"), tracker2("nume", "stare");
////    Backlog backlog1("nume", "data_limita");
//
////    ToDoList.add_task(task1);
////    ToDoList.add_task(task2);
////    ToDoList.add_task(task3);
////
//    operator<<(std::cout, persoana1);
////    operator<<(std::cout, tracker1);
////    operator<<(std::cout, ToDoList);
//
    std::ifstream Persoane("Persoane.in");
    std::string nume, prenume, nume_planner;
    std::unordered_map<std::string, std::string> PeoplePlanners;

    while(std::getline(Persoane, nume))
    {
        std::getline(Persoane, nume_planner);
        PeoplePlanners.insert({nume, nume_planner});
    }

//    for (auto x : PeoplePlanners)
//        std::cout << x.first << " " << x.second << std::endl;

    Persoane.close();
    return 0;

}

