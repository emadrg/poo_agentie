

#ifndef LOCUINTEPOO_AGENTIE_H
#define LOCUINTEPOO_AGENTIE_H

#include "Locuinta.h"
#include <vector>

#include <memory>


class Agentie {
    std::string numeAgentie;

    std::vector<std::shared_ptr<Locuinta>> locuinte;

public:
    static int pret_mp_oras;
    static int pret_mp_tara;
    static float valoare_distanta_mare;
    static float valoare_distanta_medie;
    static float valoare_distanta_mica;

    [[maybe_unused]] explicit Agentie(std::string nume);

    void citire();
    void afisare();

    Agentie &operator=(Agentie agentia);

    [[maybe_unused]] Agentie (const Agentie& other);

    friend void swap(Agentie& a1, Agentie& a2);
};


#endif
