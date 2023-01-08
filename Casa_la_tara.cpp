//
// Created by drgem on 02/01/2023.
//

#include<iostream>
#include"Casa_la_tara.h"

//constructor fara parametri
Casa_la_tara::Casa_la_tara(){
    for(char & i : localitate) i = '0';
    numar_camere = 0;
    metri_patrati = 0;
    pret = 0;
    dimensiune_gradina = 0;
}

//constructor cu parametri
Casa_la_tara::Casa_la_tara(char loc[20], int nr, int mp, int pr, int dim ):Casa(loc,  nr, mp,  pr){
    dimensiune_gradina = dim;
}

//constructor de copiere
Casa_la_tara::Casa_la_tara(const Casa_la_tara &C): Casa(C){
    dimensiune_gradina = C.dimensiune_gradina;
}

//operator '='
Casa_la_tara& Casa_la_tara::operator=(const Casa_la_tara &C){
    dimensiune_gradina = C.dimensiune_gradina;
    //(Casa)(*this) = C;
    return *this;
}

//getPret
int Casa_la_tara::getPret()const{
    return pret;
}

//afisare
void Casa_la_tara::afisare()const{
    std::cout<<"Localitate: "<< localitate<<"\n";
    std::cout<<"Numar camere: "<<numar_camere<<"\n";
    std::cout<<"Dimensiune: "<<metri_patrati<<"\n";
    std::cout<<"Dimensiune gradina: "<<dimensiune_gradina<<"\n";
    std::cout<<"Pret: "<<pret<<"\n";
}

//getDimensiuneGradina
int Casa_la_tara::getDimensiune_Gradina()const{
    return dimensiune_gradina;
}










