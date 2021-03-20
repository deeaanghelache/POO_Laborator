//
// Created by Andreea Anghelache on 15.03.2021.
//

// lista = taskuri + trackers

#include <iostream>
#include "Lista.h"

Lista::Lista(const std::string &nume, const std::string &data) : nume(nume), data(data) {}

Lista::~Lista() {
    std::cout << "destructor lista " + nume +"\n";
}

std::ostream &operator<<(std::ostream &os, const Lista &lst) {
    os << "\t\t\tNume: " << lst.nume << " " << "Date: " << lst.data << "\n"<<"\n";
    for(auto &tsk : lst.Taskuri)
        os<<" "<<tsk;
    os<<"\n";
    for(auto &tracks : lst.tracks)
        os<<" "<<tracks;
    return os;
}

void Lista::add_task(const Task &tsk) {
    Taskuri.push_back(tsk);
}

std::string Lista::getter_nume() {
    return nume;
}

std::string Lista::getter_data() {
    return data;
}

std::vector<Task> Lista::getter_tasks() {
    return Taskuri;
}

void Lista::setter_nume(const std::string &n) {
    nume = n;
}

void Lista::setter_data(const std::string &d) {
    data = d;
}


void Lista::remove_task(Task &tsk) {
    for(auto i=Taskuri.begin(); i != Taskuri.end(); ++i)
        if(operator==(tsk, *i))
        {
            Taskuri.erase(i);
            break;
        }
}

void Lista::add_trackers(const Tracker &track) {
    tracks.push_back(track);
}

//operator== pentru liste

bool operator==(const Lista &lst1, const Lista &lst2) {
    int ok1=0, ok2=0;
    if ((lst1.tracks.size() != lst2.tracks.size()) || (lst1.Taskuri.size() != lst2.Taskuri.size()))
        return false;

    if (lst1.tracks == lst2.tracks)
        ok1=1;

    if (lst1.Taskuri == lst2.Taskuri)
        ok2=1;

    if (lst1.nume==lst2.nume && lst2.data==lst1.data && ok1 == 1 && ok2 == 1)
        return true;
    return false;
}

void Lista::remove_tracker(Tracker &track) {
    for(auto i=tracks.begin(); i != tracks.end(); ++i)
        if(operator==(track, *i))
        {
            tracks.erase(i);
            break;
        }
}

std::vector<Tracker> Lista::getter_tracks() {
    return tracks;
}




