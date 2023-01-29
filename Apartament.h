//
// Created by drgem on 30/12/2022.
//

#ifndef POO_AGENTIE_APARTAMENT_H
#define POO_AGENTIE_APARTAMENT_H

#include<cstring>
#include<iostream>
#include <memory>
#include"Locuinta.h"


class Apartament: virtual public Locuinta{
protected:
    std::string zona{};

    const int taxa_inregistrare = 1000;

public:
    // constructor fara parametri
    Apartament();

    // constructor cu parametri
    Apartament(std::string, int , int );

    int getPret() const override;

    std::string toString() override;

    std::shared_ptr<Locuinta> clone() const override {
        return std::make_shared<Apartament>(*this);
    }
};

#endif //POO_AGENTIE_APARTAMENT_H
