//
// Created by Andreea Anghelache on 15.03.2021.
//

#ifndef POO_LABORATOR_TRACKER_H
#define POO_LABORATOR_TRACKER_H

#include <string>

class Tracker {
private:
    std::string nume, stare;
public:
    Tracker(const std::string &nume, const std::string &stare);
    virtual ~Tracker();


};


#endif //POO_LABORATOR_TRACKER_H
