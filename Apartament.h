//
// Created by drgem on 30/12/2022.
//

#ifndef POO_AGENTIE_APARTAMENT_H
#define POO_AGENTIE_APARTAMENT_H

#include<cstring>
#include<iostream>
#include"Locuinte.h"


class Apartament: virtual public Locuinte{
protected:
    std::string zona{};
    int numar_camere;
    int metri_patrati;
    int pret;

public:
    // constructor fara parametri
    Apartament();

    // constructor cu parametri
    Apartament(std::string, int , int , int );

    // constructor de copiere
    Apartament(const Apartament &A);

    // operator '='
    Apartament& operator=(const Apartament &A);

    [[nodiscard]] int getPret()const override;
    [[nodiscard]] int getDimensiune_Terasa()const override {return -1;}

    // afisare
    friend std::ostream &operator<<(std::ostream &out, Apartament &apartament);
    void afisare()override;
};

#endif //POO_AGENTIE_APARTAMENT_H
