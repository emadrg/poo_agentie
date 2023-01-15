//
// Created by drgem on 30/12/2022.
//

#include "Casa.h"
//#include<cstring>

//constructor fara parametri
Casa::Casa(){
    localitate.assign("");
    numar_camere = 0;
    metri_patrati = 0;
    pret = 0;
}

//constructor cu parametri
Casa::Casa(const std::string& loc, int nr, int mp, int pr){
    localitate.assign(loc);
    numar_camere = nr;
    metri_patrati = mp;
    pret = pr;
}

//constructor de copiere
Casa::Casa(const Casa &C){
    localitate.assign(C.localitate);
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
    localitate.assign(C.localitate);
    numar_camere = C.numar_camere;
    metri_patrati = C.metri_patrati;
    pret = C.pret;

    return *this;
}

//getPret
int Casa::getPret()const{
    return pret;
}

//overload pe << pentru afisare
std::ostream &operator<<(std::ostream &out, const Casa &casa){
    out<<"Localitate: "<< casa.localitate<<"\n";
    out<<"Numar camere: "<< casa.numar_camere<<"\n";
    out<<"Dimensiune: "<< casa.metri_patrati<<"\n";
    out<<"Pret: "<< casa.pret<<"\n";
    return out;
}

void Casa::afisare(){ std::cout << *this;}