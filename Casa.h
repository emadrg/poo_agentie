#pragma once
#include<iostream>
#include<cstring>
#include"Locuinte.h"

class Casa: public  Locuinte{
protected:
    std::string localitate{};
    int numar_camere;
    int metri_patrati;
    int pret;

public:
    // constructor fara parametri
    Casa();

    // constructor cu parametri
    Casa(const std::string&, int , int , int );

    // constructor de copiere
    Casa(const Casa &C);

    // operator '='
    Casa& operator=(const Casa &C);
    // operator <<
    friend std::ostream &operator<<(std::ostream &out, const Casa &casa);
    void afisare()override;
    [[nodiscard]] int getPret()const override;
    // int getDimensiune_Terasa()const {return -1;}

};
