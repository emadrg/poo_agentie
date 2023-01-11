//
// Created by drgem on 30/12/2022.
//

#ifndef POO_AGENTIE_APARTAMENT_H
#define POO_AGENTIE_APARTAMENT_H

#include<cstring>
#include<iostream>
#include"Interfata.h"


class Apartament: virtual public Interfata{
protected:
    char zona[20]{};
    int numar_camere;
    int metri_patrati;
    int pret;

public:
    // constructor fara parametri
    Apartament();

    // constructor cu parametri
    Apartament(char loc[], int , int , int );

    // constructor de copiere
    Apartament(const Apartament &A);

    // operator '='
    Apartament& operator=(const Apartament &A);

    [[nodiscard]] int getPret()const;
    [[nodiscard]] int getDimensiune_Terasa()const {return -1;}
    void afisare()const ;



};

#endif //POO_AGENTIE_APARTAMENT_H
