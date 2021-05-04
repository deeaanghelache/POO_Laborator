//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_LISTA_H
#define POO_LABORATOR_LISTA_H

#include <string>
#include <ostream>
#include <vector>
#include "Task.h"
#include "Tracker.h"
#include "ReadingTracker.h"
#include "MoodTracker.h"
#include <memory>
#include <optional>

class Lista {

private:
    std::string nume, data;
    std::vector<std::shared_ptr<Task>> Taskuri;
//    std::vector<Tracker> tracks;
    ReadingTracker rt;
    MoodTracker md;
public:
    Lista(const std::string &nume, const std::string &data, ReadingTracker &rt, MoodTracker &md);
//    Lista(const std::unique_ptr<Lista> &lista);
    void add_task(const std::shared_ptr<Task> &tsk);
//    void add_trackers(const Tracker &tracks);
    std::string getter_nume();
    std::string getter_data();
    std::optional<ReadingTracker> getter_rt();
    std::optional<MoodTracker> getter_md();
    void setter_nume(const std::string& n);
    void setter_data(const std::string& d);
    void setter_rt(ReadingTracker& rt1);
    void setter_md(MoodTracker& md1);
    void remove_task(std::shared_ptr<Task> &tsk);
//    void remove_tracker(Tracker &track);
    std::vector<std::shared_ptr<Task>> getter_tasks();
//    std::vector<Tracker> getter_tracks();
    friend bool operator==(const Lista &lst1, const Lista &lst2);  //verifica daca 2 obiecte de tip lista sunt egale
    friend std::ostream &operator<<(std::ostream &os, const Lista &lst);
    virtual ~Lista();

};


#endif //POO_LABORATOR_LISTA_H
