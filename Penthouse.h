//
// Created by drgem on 02/01/2023.
//

#ifndef POO_AGENTIE_PENTHOUSE_H
#define POO_AGENTIE_PENTHOUSE_H


#include<iostream>
#include"Apartament.h"

class Penthouse: public Apartament{
private:

    float dimensiune_terasa;

public:
    Penthouse();

    Penthouse(const std::string &z, int nr, float mp, float dim_t);

    [[nodiscard]] float getPret() const override;

    std::string toString() override;

    [[nodiscard]] std::shared_ptr<Locuinta> clone() const override {
        return std::make_shared<Penthouse>(*this);
    }
};



#endif //POO_AGENTIE_PENTHOUSE_H
