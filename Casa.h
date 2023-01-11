#pragma once
#include<iostream>
#include"Interfata.h"

class Casa: public  Interfata{
protected:
    char localitate[20]{};
    int numar_camere;
    int metri_patrati;
    int pret;

public:
    // constructor fara parametri
    Casa();

    // constructor cu parametri
    Casa(char loc[], int , int , int );


    // constructor de copiere
    Casa(const Casa &C);

    // operator '='
    Casa& operator=(const Casa &C);

    [[nodiscard]] int getPret()const override;
   // int getDimensiune_Terasa()const {return -1;}
    //void afisare()const override;


};
