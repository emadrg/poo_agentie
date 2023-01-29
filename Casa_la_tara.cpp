//
// Created by drgem on 02/01/2023.
//

#include"Casa_la_tara.h"
#include "Casa.h"
#include "Agentie.h"
#include "Exceptii.h"

//constructor fara parametri
Casa_la_tara::Casa_la_tara(): Casa(){
    dimensiune_gradina = 0;
}

//constructor cu parametri
Casa_la_tara::Casa_la_tara(const std::string& loc, int nr, float mp, int dim ): Casa(loc, nr, mp){
    if (dim < 0)
        throw CasaTaraException("Dimensiunea gradinii e negativa!");

    dimensiune_gradina = dim;
}

//getPret
float Casa_la_tara::getPret()const {
    float pret_baza = metri_patrati * Agentie::pret_mp_tara;
    return pret_baza + pret_baza*taxa_teren;
}

std::string Casa_la_tara::toString() {
    return Casa::toString() + "Dimensiune gradina: " + std::to_string(dimensiune_gradina) + "\n";
}