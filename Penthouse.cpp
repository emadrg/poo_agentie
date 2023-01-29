//
// Created by drgem on 02/01/2023.
//

#include "Penthouse.h"
#include "Agentie.h"
#include "Exceptii.h"
#include<iostream>
#include <utility>

Penthouse::Penthouse() : Locuinta(0, 0), Apartament() {
    zona.assign("");
    numar_camere = 0;
    metri_patrati = 0;
    dimensiune_terasa = 0;
}

Penthouse::Penthouse(std::string z, int nr, int mp, int dim_t) : Locuinta(nr, mp),
                                                                 Apartament(std::move(z), nr, mp) {
    if (nr < 0 || mp < 0 || dim_t < 0)
        throw PenthouseException("Dimansiune negativa!");

    dimensiune_terasa = dim_t;
}

//getPret
int Penthouse::getPret()const{
    return metri_patrati*Agentie::pret_mp_oras + dimensiune_terasa*Agentie::pret_mp_oras + taxa_inregistrare;
}

std::string Penthouse::toString() {
    return Apartament::toString() + "Dimensiune terasa: " + std::to_string(dimensiune_terasa) + "\n";
}
