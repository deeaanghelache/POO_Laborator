//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_TRACKER_H
#define POO_LABORATOR_TRACKER_H

#include <string>
#include <ostream>

class Tracker {
protected:
    std::string nume, stare;
public:
    Tracker(const std::string &nume, const std::string &stare);
    std::string getter_nume();
    std::string getter_stare();
    void setter_nume(const std::string& n);
    virtual void setter_stare(const std::string& s)=0;  //functie pur virtuala
    friend bool operator==(const Tracker &track1, const Tracker &track2);
    virtual ~Tracker();
//    friend std::ostream &operator<<(std::ostream &os, const Tracker &tracker);
};


#endif //POO_LABORATOR_TRACKER_H
