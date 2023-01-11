
#include"Casa_la_oras.h"
#include "Casa.h"


//constructor fara parametri
Casa_la_oras::Casa_la_oras(){
    for(char & i : localitate) i = '0';
     numar_camere = 0;
     metri_patrati = 0;
     pret = 0;
    distanta_centru = 0;
}

//constructor cu parametri
Casa_la_oras::Casa_la_oras(char loc[20], int nr, int mp, int pr, int dist ):Casa(loc,  nr, mp,  pr){
    distanta_centru = dist;
}

//constructor de copiere
[[maybe_unused]] Casa_la_oras::Casa_la_oras(const Casa_la_oras &C): Casa(C){
    distanta_centru = C.distanta_centru;
}

//operator '='
Casa_la_oras& Casa_la_oras::operator=(const Casa_la_oras &C){
    distanta_centru = C.distanta_centru;
   // (Casa)(*this) = C;
    return *this;
}

//getPret
int Casa_la_oras::getPret()const{
    return pret;
}

//afisare
//void Casa_la_oras::afisare()const{
//    std::cout<<"Localitate: "<< localitate<<"\n";
//    std::cout<<"Numar camere: "<<numar_camere<<"\n";
//    std::cout<<"Dimensiune: "<<metri_patrati;
//    std::cout<<"Distanta centru: "<<distanta_centru<<"\n";
//    std::cout<<"Pret: "<<pret<<"\n";
//}

//getDimensiuneGradina
[[maybe_unused]] int Casa_la_oras::getDistanta_centru()const{
    return distanta_centru;
}

void Casa_la_oras::afisare() const {

}

