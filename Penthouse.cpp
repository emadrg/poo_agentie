//
// Created by drgem on 02/01/2023.
//

#include "Penthouse.h"
#include<iostream>
#include <utility>

Penthouse::Penthouse():Apartament(){
    zona.assign("");
    numar_camere = 0;
    metri_patrati = 0;
    pret = 0;
    dimensiune_terasa = 0;
}

Penthouse::Penthouse(std::string z, int nr, int mp, int pr, int dim_t):Apartament(std::move(z), nr, mp, pr){
    dimensiune_terasa = dim_t;
}

//constructor de copiere
[[maybe_unused]] Penthouse::Penthouse(const Penthouse &C): Apartament(C){
    dimensiune_terasa = C.dimensiune_terasa;
}

//operator '='
Penthouse& Penthouse::operator=(const Penthouse &P){
    dimensiune_terasa = P.dimensiune_terasa;
    //(Apartament)(*this) = P;
    return *this;
}

//getPret
int Penthouse::getPret()const{
    return pret;
}

//afisare
std::ostream &operator<<(std::ostream &out, Penthouse &penthouse){
    out<<"Zona: "<< penthouse.zona<<"\n";
    out<<"Numar camere: "<<penthouse.numar_camere<<"\n";
    out<<"Dimensiune: "<<penthouse.metri_patrati<<"\n";
    out<<"Dimensiune terasa: "<<penthouse.dimensiune_terasa<<"\n";
    out<<"Pret: "<<penthouse.pret<<"\n";
    return out;
}
void Penthouse::afisare(){ std::cout << *this;}
//get dimensiune_terasa

//int Penthouse::getDimensiune_Terasa()const{
//    return dimensiune_terasa;
//}
