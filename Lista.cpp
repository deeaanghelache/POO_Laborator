//
// Created by Andreea Anghelache on 15.03.2021.
//

// lista = taskuri + trackers

#include <iostream>
#include "Lista.h"

Lista::Lista(const std::string &nume, const std::string &data, ReadingTracker &rt, MoodTracker &md) : nume(nume), data(data), rt(rt), md(md){}

Lista::~Lista()=default;
//{
//    std::cout << "destructor lista " + nume +"\n";
//}

std::ostream &operator<<(std::ostream &os, const Lista &lst) {
    os << "\t\t\tNume: " << lst.nume << " " << "Data: " << lst.data << "\n"<<"\n";
    for(auto &tsk : lst.Taskuri)
        os<<" "<<*tsk;
    os<<"\n";
//    for(auto &tracks : lst.tracks)
//        os<<" "<<tracks;

    os<<lst.rt<<"\n"<<lst.md<<"\n";

    return os;
}

//void add_task(const std::unique_ptr<Task> &tsk) {
//    Taskuri.push_back(tsk);
//}

std::string Lista::getter_nume() {
    return nume;
}

std::string Lista::getter_data() {
    return data;
}

std::vector<std::shared_ptr<Task>> Lista::getter_tasks() {
    return Taskuri;
}

void Lista::setter_nume(const std::string &n) {
    nume = n;
}

void Lista::setter_data(const std::string &d) {
    data = d;
}

void Lista::remove_task(std::shared_ptr<Task> &tsk) {
    for(auto i=Taskuri.begin(); i != Taskuri.end(); ++i)
        if(operator==(tsk, *i))
        {
            Taskuri.erase(i);
            break;
        }
}

// operator== pentru liste

bool operator==(const Lista &lst1, const Lista &lst2) {
    int ok1=0;

    if(lst1.Taskuri.size() != lst2.Taskuri.size())
        return false;

    if (lst1.Taskuri == lst2.Taskuri)
        ok1=1;

    if (lst1.nume==lst2.nume && lst2.data==lst1.data && ok1 == 1)
        return true;
    return false;
}

void Lista::add_task(const std::shared_ptr<Task> &tsk) {
    Taskuri.push_back(tsk);
}

std::optional<ReadingTracker> Lista::getter_rt() {
    return rt;
}

std::optional<MoodTracker> Lista::getter_md() {
    return md;
}

void Lista::setter_rt(ReadingTracker &rt1) {
    rt = rt1;
}

void Lista::setter_md(MoodTracker &md1) {
    md = md1;
}

void Lista::progres(Tracker &tr) {
    std::cout << "progresul: " << tr.getter_stare();
}

//Lista::Lista(const std::unique_ptr<Lista> &lista) {
//    nume=lista->nume;
//    data=lista->data;
//    Taskuri=lista->Taskuri;
//}

//void Lista::remove_tracker(Tracker &track) {
//    for(auto i=tracks.begin(); i != tracks.end(); ++i)
//        if(operator==(track, *i))
//        {
//            tracks.erase(i);
//            break;
//        }
//}
//
//std::vector<Tracker> Lista::getter_tracks() {
//    return tracks;
//}




