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
    Casa_la_oras(std::string, int , int , int, int );

    [[maybe_unused]] Casa_la_oras(const Casa_la_oras &C);
    Casa_la_oras& operator=(const Casa_la_oras &C);

    [[nodiscard]] int getPret()const override;

    //[[maybe_unused]] [[nodiscard]] int getDistanta_centru()const;
    [[nodiscard]] int getDimensiune_Terasa()const override{return -1;}

    // afisare
    friend std::ostream &operator<<(std::ostream &out, Casa_la_oras &casa);
    void afisare()override;
};


#endif //POO_AGENTIE_CASA_LA_ORAS_H
