
#include"Casa_la_oras.h"
#include "Agentie.h"
#include "Casa.h"
#include "Exceptii.h"


//constructor fara parametri
Casa_la_oras::Casa_la_oras(): Casa(){
    distanta_centru = 0;
}

//constructor cu parametri
Casa_la_oras::Casa_la_oras(const std::string& loc, int nr, float mp, int dist ): Casa(loc, nr, mp){
    if (distanta_centru < 0)
        throw CasaOrasException("Dimensiunea gradinii e negativa!");

    distanta_centru = dist;
}

//getPret
float Casa_la_oras::getPret() const {
    float pret_baza = metri_patrati*Agentie::pret_mp_oras;
    if (distanta_centru < 10)
        pret_baza *= Agentie::valoare_distanta_mica;
    else if (distanta_centru < 100)
        pret_baza *= Agentie::valoare_distanta_medie;
    else
        pret_baza *= Agentie::valoare_distanta_mare;
    // se trunchiaza preturile

    return pret_baza + pret_baza*taxa_teren;
}

std::string Casa_la_oras::toString() {
    return Casa::toString() + "Distanta de centru: " + std::to_string(distanta_centru) + "\n";
}
