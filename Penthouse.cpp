//
// Created by drgem on 02/01/2023.
//

#include "Penthouse.h"
#include<iostream>

Penthouse::Penthouse(){
    for(char & i : zona) i = '0';
    numar_camere = 0;
    metri_patrati = 0;
    pret = 0;
    dimensiune_terasa = 0;
}

Penthouse::Penthouse(char z[20], int nr, int mp, int pr, int dim_t):Apartament(z, nr, mp, pr){
    dimensiune_terasa = dim_t;
}

//constructor de copiere
Penthouse::Penthouse(const Penthouse &C): Apartament(C){
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
void Penthouse::afisare()const{
    std::cout<<"Zona: "<< zona<<"\n";
    std::cout<<"Numar camere: "<<numar_camere<<"\n";
    std::cout<<"Dimensiune: "<<metri_patrati<<"\n";
    std::cout<<"Dimensiune terasa: "<<dimensiune_terasa<<"\n";
    std::cout<<"Pret: "<<pret<<"\n";
}

//get dimensiune_terasa

int Penthouse::getDimensiune_Terasa()const{
    return dimensiune_terasa;


}
