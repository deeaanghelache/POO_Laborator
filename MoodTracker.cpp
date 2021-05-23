//
// Created by Andreea Anghelache on 11.04.2021.
//

#include "MoodTracker.h"

void MoodTracker::setter_stare(const std::string &s) {
    stare = s;
//    stare = Tracker::setter_stare(s);
}

std::ostream &operator<<(std::ostream &os, const MoodTracker &mt) {
    os << "\t\t\t\tNume Mood Tracker: " << mt.nume << "\n\t\t\t\t\t" << "Stare Mood Tracker: " << mt.stare << "\n";
    return os;
}

MoodTracker::MoodTracker(const std::string &nume, const std::string &stare) : Tracker(nume, stare) {}

std::string MoodTracker::getter_stare() {
    return Tracker::getter_stare()+":)";
}
