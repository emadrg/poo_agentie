#include "Agentie.h"


float Agentie::pret_mp_oras = 1000;
float Agentie::pret_mp_tara = 800;
float Agentie::valoare_distanta_mare = 0.8;
float Agentie::valoare_distanta_medie = 1.05;
float Agentie::valoare_distanta_mica = 1.3;

int main() {

    Agentie agentia_mea("Agentie Ema");

    agentia_mea.citire();
    agentia_mea.afisare();

    return 0;
}
