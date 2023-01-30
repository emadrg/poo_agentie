
#include "Apartament.h"
#include "Agentie.h"
#include "Exceptii.h"

//constructor fara parametri
Apartament::Apartament() : Locuinta(0, 0){
    zona.assign("");
    numar_camere = 0;
    metri_patrati = 0;
}

//constructor cu parametri
Apartament::Apartament(std::string _zona, int nr, int mp) : Locuinta(nr, mp) {
    if (nr < 0 || mp < 0)
        throw ApartamentException("Numar de mp sau camere invalid!");

    zona.assign(_zona);
    numar_camere = nr;
    metri_patrati = mp;
}

//getPret
int Apartament::getPret()const{
    return metri_patrati*Agentie::pret_mp_oras + taxa_inregistrare;
}

std::string Apartament::toString() {
    return "Zona: " + this->zona + "\n" +
           "Numar camere: " + std::to_string(this->numar_camere) + "\n" +
           "Dimensiune: " + std::to_string(this->metri_patrati) + "\n" +
           "Pret: " + std::to_string(this->getPret()) + "\n";
}

