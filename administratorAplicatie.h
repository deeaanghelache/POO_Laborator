
#ifndef POO_LABORATOR_ADMINISTRATORAPLICATIE_H
#define POO_LABORATOR_ADMINISTRATORAPLICATIE_H

#include <iostream>
#include <vector>
#include <cstddef>
#include "Persoana.h"


class administratorAplicatie {
    administratorAplicatie() = default;
//    std::vector<std::shared_ptr<Persoana>> utilizatori;
    std::vector<std::string> utilizatori;
    static administratorAplicatie* adm;
public:
    administratorAplicatie(const administratorAplicatie&) = delete;
    administratorAplicatie& operator=(const administratorAplicatie&) = delete;
    void adauga_persoana(Persoana pers);
    void stergere_persoana(const Persoana& pers);
    void afisare_utilizatori_care_au_platit();
    static administratorAplicatie& get_administrator();
};


#endif //POO_LABORATOR_ADMINISTRATORAPLICATIE_H
