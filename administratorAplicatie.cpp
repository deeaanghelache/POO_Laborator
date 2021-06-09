

#include "administratorAplicatie.h"

void administratorAplicatie::adauga_persoana(Persoana pers) {
    if(a_platit(pers))
        utilizatori.push_back(pers.getter_nume());
}

void administratorAplicatie::stergere_persoana(const Persoana& pers) {
    for(auto i = 0; i < utilizatori.size(); i++)
    {
//        std::cout<<*it;
        if (utilizatori[i] == pers.getNume())
        {
            std::string aux = utilizatori[i];
            utilizatori[i] = utilizatori[utilizatori.size()-1];
            utilizatori[utilizatori.size()-1] = aux;
            utilizatori.pop_back();
        }
    }
}

administratorAplicatie &administratorAplicatie::get_administrator() {
//        if(adm == nullptr)
//        {
//            adm = new administratorAplicatie;
//        }
//        return adm;
    static administratorAplicatie adm;
    return adm;
}

void administratorAplicatie::afisare_utilizatori_care_au_platit() {
    std::cout<<"Au platit abonament urmatorii utilizatori:\n";
    for(auto i = 0; i < utilizatori.size(); i++)
    {
        std::cout<<utilizatori[i]<<", ";
    }
}

