//
// Created by drgem on 02/01/2023.
//

#ifndef POO_AGENTIE_PENTHOUSE_H
#define POO_AGENTIE_PENTHOUSE_H


#include<iostream>
#include"Apartament.h"

class Penthouse: public Apartament{
protected:
    int dimensiune_terasa;

public:
    Penthouse();
    Penthouse(char loc[], int, int, int, int);

    // constructor de copiere
    Penthouse(const Penthouse &P);

    // operator '='
    Penthouse& operator=(const Penthouse &P);

    int getPret()const override;
    void afisare()const override;

    int getDimensiune_Terasa()const override;
};



#endif //POO_AGENTIE_PENTHOUSE_H