#include<iostream>
#include<string.h>
#include"Apartament.h"

//constructor fara parametri
Apartament::Apartament(){
    for(int i = 0; i<20; i++) zona[i] = '0';
    numar_camere = 0;
    metri_patrati = 0;
    pret = 0;
}

//constructor cu parametri
Apartament::Apartament(char z[20], int nr, int mp, int pr){
    strcpy(zona, z);
    numar_camere = nr;
    metri_patrati = mp;
    pret = pr;
}

//constructor de copiere
Apartament::Apartament(const Apartament &A){
    strcpy(zona, A.zona);
    numar_camere = A.numar_camere;
    metri_patrati = A.metri_patrati;
    pret = A.pret;
}

//operator '='
Apartament& Apartament::operator=(const Apartament& A){
    if(this!=&A){
        numar_camere = 0;
        metri_patrati = 0;
        pret = 0;
    }
    strcpy(zona, A.zona);
    numar_camere = A.numar_camere;
    metri_patrati = A.metri_patrati;
    pret = A.pret;

    return *this;
}

//getPret
int Apartament::getPret()const{
    return pret;
}

//afisare
void Apartament::afisare()const{
    std::cout<<"Zona: "<< zona<<"\n";
    std::cout<<"Numar camere: "<<numar_camere<<"\n";
    std::cout<<"Dimensiune: "<<metri_patrati<<"\n";
    std::cout<<"Pret: "<<pret<<"\n";
}
