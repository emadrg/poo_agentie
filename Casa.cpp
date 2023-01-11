//
// Created by drgem on 30/12/2022.
//

#include "Casa.h"
#include<iostream>
#include<cstring>

//constructor fara parametri
Casa::Casa(){
    for (char & i : localitate)
        i = '0';
    numar_camere = 0;
    metri_patrati = 0;
    pret = 0;
}

//constructor cu parametri
Casa::Casa(char loc[20], int nr, int mp, int pr){
    strcpy(localitate, loc);
    numar_camere = nr;
    metri_patrati = mp;
    pret = pr;
}

//constructor de copiere
Casa::Casa(const Casa &C){
    strcpy(localitate, C.localitate);
    numar_camere = C.numar_camere;
    metri_patrati = C.metri_patrati;
    pret = C.pret;
}

//operator '='
Casa& Casa::operator=(const Casa& C){
    if(this!=&C){
        numar_camere = 0;
        metri_patrati = 0;
        pret = 0;
    }
    strcpy(localitate, C.localitate);
    numar_camere = C.numar_camere;
    metri_patrati = C.metri_patrati;
    pret = C.pret;

    return *this;
}

//getPret
int Casa::getPret()const{
    return pret;
}

//afisare
//void Casa::afisare()const{
//    std::cout<<"Localitate: "<< localitate<<"\n";
//    std::cout<<"Numar camere: "<<numar_camere<<"\n";
//    std::cout<<"Dimensiune: "<<metri_patrati<<"\n";
//    std::cout<<"Pret: "<<pret<<"\n";
//}