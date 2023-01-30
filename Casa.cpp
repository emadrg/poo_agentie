//
// Created by drgem on 30/12/2022.
//

#include "Casa.h"
#include "Agentie.h"
#include "Exceptii.h"

//constructor fara parametri
Casa::Casa() : Locuinta(0, 0){
    localitate.assign("");
    numar_camere = 0;
    metri_patrati = 0;
}

//constructor cu parametri
Casa::Casa(const std::string& loc, int nr, int mp) : Locuinta(nr, mp) {

    if (nr < 0)
        throw CasaException("Numar de camere negativ!");
    if (mp < 0)
        throw CasaException("Numar de metri patrati negativ!");

    localitate.assign(loc);
    numar_camere = nr;
    metri_patrati = mp;
}

std::string Casa::toString() {
    return "Localitate: " + localitate + "\n" +
           "Numar camere: " + std::to_string(numar_camere) + "\n" +
           "Dimensiune: " + std::to_string(metri_patrati) + "\n" +
           "Pret: " + std::to_string(getPret()) + "\n";
}
