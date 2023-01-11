//
// Created by drgem on 02/01/2023.
//

#ifndef POO_AGENTIE_CASA_LA_TARA_H
#define POO_AGENTIE_CASA_LA_TARA_H

#include"Casa.h"
#pragma once

class Casa_la_tara: public Casa{
protected:

    int dimensiune_gradina;

public:
    Casa_la_tara();
    Casa_la_tara(char loc[], int , int , int, int );

    [[maybe_unused]] Casa_la_tara(const Casa_la_tara &C);
    Casa_la_tara& operator=(const Casa_la_tara &C);

    [[nodiscard]] int getPret()const override;
    void afisare()const override;

    [[maybe_unused]] [[nodiscard]] int getDimensiune_Gradina()const;
    [[nodiscard]] int getDimensiune_Terasa()const override {return -1;}
};


#endif //POO_AGENTIE_CASA_LA_TARA_H
