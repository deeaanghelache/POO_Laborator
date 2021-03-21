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

    std::ifstream Persoane("Persoane.in");
    std::string nume, nume_planner;
    std::unordered_map<std::string, std::string> PeoplePlanners;

    while(std::getline(Persoane, nume))
    {
        std::getline(Persoane, nume_planner);
        PeoplePlanners.insert({nume, nume_planner});
    }

    int crt=0;
    for (const auto& pers : PeoplePlanners)
//        std::cout << x.first << " " << x.second << std::endl;
    {
        //pers.first = numele persoanei
        //pers.second = numele planner-ului

        crt++;

        if(crt==1)

        {
            Planner planner_1(pers.second);

            Task task1("Tema Mate", "yes"), task2("Tema Romana", "no"), task3("Proiect Engleza", "no");
            Lista ToDoList("Teme", "15.01.2021");
            ToDoList.add_task(task1);
            ToDoList.add_task(task2);
            ToDoList.add_task(task3);
            ToDoList.remove_task(task2);
            Tracker tracker1("Reading Tracker", "Am citit 50 de pagini");
            ToDoList.add_trackers(tracker1);

            planner_1.add_lista(ToDoList);

            Task task4("Cumparaturi", "no"), task5("Curatenie", "no"), task6("Invatat pentru simularea la romana", "no"), task7("Modele subiecte mate", "no");
            Task::change_status_to_yes(task5);
            Task::change_status_to_yes(task6);
            Task::change_status_to_yes(task7);

            Lista ToDoList2("To Do", "16.01.2021");
            ToDoList2.add_task(task4);
            ToDoList2.add_task(task5);

            Tracker tracker2("Mood Tracker", "happy");

            ToDoList2.add_trackers(tracker2);

            planner_1.add_lista(ToDoList2);

            Backlog backlog1("Simulari Probe Bac", "30.03.2021");
            backlog1.add_task(task6);
            backlog1.add_task(task7);

            planner_1.add_backlog(backlog1);
            Persoana persoana_1(pers.first, planner_1);

            operator<<(std::cout, persoana_1);

            std::cout<<"\n";
        }

        if(crt==2)
        {
            Planner planner_2(pers.second);

            Task task1("Tema Mate", "no"), task2("Tema Romana", "yes"), task3("Proiect Geografie", "yes"), task4("Proiect Istorie", "yes"), task5("Proiect engleza", "no"), task6("Proiect Franceza", "no");
            Lista ToDo("Teme", "18.02.2020");

            Task::change_status_to_yes(task1);

            ToDo.add_task(task1); ToDo.add_task(task2); ToDo.add_task(task3); ToDo.add_task(task4);

            planner_2.add_lista(ToDo);

            Backlog back1("Proiecte", "20.08.2020");
            back1.add_task(task5);
            back1.add_task(task6);

            planner_2.add_backlog(back1);
            Persoana persoana_2(pers.first, planner_2);

            operator<<(std::cout, persoana_2);
        }

        if(crt==3)
        {
            Planner planner_3(pers.second);


            Task task5("Proiect POO", "no"), task6("Proiect TW", "no");

            Backlog back1("Proiecte", "20.08.2020");
            back1.add_task(task5);
            back1.add_task(task6);

            planner_3.add_backlog(back1);
            Persoana persoana_3(pers.first, planner_3);
            operator<<(std::cout, persoana_3);
        }

//        if(crt==4)
//        {
//            Planner planner_4(pers.second);
//            Persoana persoana_4(pers.first, planner_4);
//
//            operator<<(std::cout, persoana_4);
//        }
//
//        if(crt==5)
//        {
//            Planner planner_5(pers.second);
//            Persoana persoana_5(pers.first, planner_5);
//
//            operator<<(std::cout, persoana_5);
//        }
    }

    Persoane.close();
    return 0;

}

