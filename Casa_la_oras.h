//
// Created by drgem on 02/01/2023.
//

#ifndef POO_AGENTIE_CASA_LA_ORAS_H
#define POO_AGENTIE_CASA_LA_ORAS_H

#include"Casa.h"
#pragma once

class Casa_la_oras: public Casa{
protected:

    int distanta_centru;

public:
    Casa_la_oras();
    Casa_la_oras(char loc[], int , int , int, int );

    Casa_la_oras(const Casa_la_oras &C);
    Casa_la_oras& operator=(const Casa_la_oras &C);

    int getPret()const;
    void afisare()const;

    int getDistanta_centru()const;
    int getDimensiune_Terasa()const {return -1;}
};


#endif //POO_AGENTIE_CASA_LA_ORAS_H
