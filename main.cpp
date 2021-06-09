#include <iostream>
#include <fstream>
#include <memory>
#include <unordered_map>
#include "Persoana.h"
#include "Lista.h"
#include "Task.h"
#include "Tracker.h"
#include "Backlog.h"
#include "Planner.h"
#include "ReadingTracker.h"
#include "MoodTracker.h"
#include "numar_negativ_pagini.h"
#include "administratorAplicatie.h"

template<class T> T afisare_pret_abonament(T pret){
    std::cout<<"Pretul abonamentului este: "<< pret <<" lei";
};


std::ifstream Persoane("Persoane.in");

std::unordered_map<std::string, std::string> citire_persoane(){
    std::string nume, nume_planner;
    std::unordered_map<std::string, std::string> PeoplePlanners;
    while(std::getline(Persoane, nume))
    {
        std::getline(Persoane, nume_planner);
        PeoplePlanners.insert({nume, nume_planner});
    }
    return PeoplePlanners;
}

void try_catch_pagini(ReadingTracker &rt)
{
    try{
        rt.verifica_pagini();
    }
    catch(std::exception &err) {
        std::cout << "in catch: " << err.what() << "\n";
    }
}

int main()
{

//    TaskUrgent tu1;
//    TaskMediu td1;
//    TaskMinor tm1;
//    administratorAplicatie ap;

    auto PeoplePlanners = citire_persoane();
    std::ifstream in("plati.in");
    int pret;

    auto& administrator = administratorAplicatie::get_administrator();

    int crt=0;
    for (const auto& pers : PeoplePlanners)
//        std::cout << x.first << " " << x.second << std::endl;
    {
        //pers.first = numele persoanei
        //pers.second = numele planner-ului

        crt++;

        if(crt==1)

        {
            in>>pret;
//            std::cout<<pret;

            Planner planner_1(pers.second);

            std::shared_ptr<Task> task1 = std::make_shared<Task>("Tema Mate", "no");
            std::shared_ptr<Task> task2 = std::make_shared<Task>("Tema Romana", "no");
            std::shared_ptr<Task> task3 = std::make_shared<Task>("Proiect Engleza", "no");
            ReadingTracker rt2("nume2", "star2e", 1001);
            MoodTracker md2("nume21", "star2e");
            std::shared_ptr<Lista> ToDoList = std::make_shared<Lista>("Teme", "15.01.2021", rt2, md2);
            ToDoList->add_task(task1);
            ToDoList->add_task(task2);
            ToDoList->add_task(task3);

            planner_1.add_lista(ToDoList);

            std::shared_ptr<Task> task4 = std::make_shared<Task>("Cumparaturi", "no");
            std::shared_ptr<Task> task5 = std::make_shared<Task>("Curatenie", "no");
            std::shared_ptr<Task> task6 = std::make_shared<Task>("Invatat pentru simularea la romana", "no");
            std::shared_ptr<Task> task7 = std::make_shared<Task>("Modele subiecte mate", "no");

            ReadingTracker rt1("nume", "stare", -100);
            MoodTracker md1("nume", "stare");

            ReadingTracker rt3("numeRt2", "stare_rt3", -200);
            MoodTracker md3("numemd3", "stare_md3");


            try_catch_pagini(rt1);

//            try{
//                ReadingTracker::verifica_pagini(rt1);
//            }
//            catch(std::exception &err) {
//                std::cout << "in catch: " << err.what() << "\n";
//            }

            std::shared_ptr<Lista> ToDoList2 = std::make_shared<Lista>("To Do", "16.01.2021", rt1, md1);

            ToDoList2->add_task(task4);
            ToDoList2->add_task(task5);

            planner_1.add_lista(ToDoList2);

            std::shared_ptr<Backlog> backlog1 = std::make_shared<Backlog>("Simulari Probe Bac", "30.03.2021");
            backlog1->add_task(task6);
            backlog1->add_task(task7);

            planner_1.add_backlog(backlog1);
            Persoana persoana_1(pers.first, planner_1, pret);


            std::vector<Tracker *> trackere_extra; //vector de pointeri
            trackere_extra.push_back(&rt3);
            trackere_extra.push_back(&md3);

            for(auto &track : trackere_extra)
                std::cout << track->getter_stare() << "\n";

            administrator.adauga_persoana(persoana_1);

            if (a_platit(persoana_1))
            {
                std::cout<<persoana_1<<"\n";
                afisare_pret_abonament(pret);
            }
            else
            {
                std::cout<<"Persoana nu a platit, i se suspenda abonamentul";
                administrator.stergere_persoana(persoana_1);
            }

            std::cout<<"\n";
        }

//        if(crt==2)
//        {
//            Planner planner_2(pers.second);
//
//            std::unique_ptr<Task> task1 = std::make_unique<Task>("Tema Mate", "no"), task2 = std::make_unique<Task>("Tema Romana", "yes"), task3 = std::make_unique<Task>("Proiect Geografie", "yes"), task4 = std::make_unique<Task>("Proiect Istorie", "yes"), task5 = std::make_unique<Task>("Proiect engleza", "no"), task6 = std::make_unique<Task>("Proiect Franceza", "no");
//            std::unique_ptr<Lista> ToDo1 = std::make_unique<Lista>("Teme", "18.02.2020");
//
////            Task::change_status_to_yes(task1);
//
//            ToDo1->add_task(task1); ToDo1->add_task(task2); ToDo1->add_task(task3); ToDo1->add_task(task4);
//
//            planner_2.add_lista(ToDo1);
//
//            std::unique_ptr<Backlog> back1 = std::make_unique<Backlog>("Proiecte", "20.08.2020");
//            back1->add_task(task5);
//            back1->add_task(task6);
//
//            planner_2.add_backlog(back1);
//            Persoana persoana_2(pers.first, planner_2);
//
//            operator<<(std::cout, persoana_2);
//        }
//
//        if(crt==3)
//        {
//            Planner planner_3(pers.second);
//
//            std::unique_ptr<Task> task5 = std::make_unique<Task>("Proiect POO", "no"), task6 = std::make_unique<Task>("Proiect TW", "no");
//
//            std::unique_ptr<Backlog> back1 = std::make_unique<Backlog>("Proiecte", "20.08.2020");
//            back1->add_task(task5);
//            back1->add_task(task6);
//
//            planner_3.add_backlog(back1);
//            Persoana persoana_3(pers.first, planner_3);
//            operator<<(std::cout, persoana_3);
//        }

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

    administrator.afisare_utilizatori_care_au_platit();

    Persoane.close();
    return 0;

}

