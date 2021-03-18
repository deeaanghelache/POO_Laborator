//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_TRACKER_H
#define POO_LABORATOR_TRACKER_H

#include <string>
#include <ostream>

class Tracker {
private:
    std::string nume, stare;
public:
    Tracker(const std::string &nume, const std::string &stare);
    std::string getter_nume();
    std::string getter_stare();
    virtual ~Tracker();
    friend std::ostream &operator<<(std::ostream &os, const Tracker &tracker);
};


#endif //POO_LABORATOR_TRACKER_H
