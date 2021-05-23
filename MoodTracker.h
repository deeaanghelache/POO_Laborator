//
// Created by Andreea Anghelache on 11.04.2021.
//

#ifndef POO_LABORATOR_MOODTRACKER_H
#define POO_LABORATOR_MOODTRACKER_H

#include"Tracker.h"

class MoodTracker : public Tracker {
public:
    void setter_stare(const std::string &s) override;
    std::string getter_stare() override;
    friend std::ostream &operator<<(std::ostream &os, const MoodTracker &rt);

    MoodTracker(const std::string &nume, const std::string &stare);
};


#endif //POO_LABORATOR_MOODTRACKER_H
