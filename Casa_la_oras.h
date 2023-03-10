//
// Created by drgem on 02/01/2023.
//

#ifndef POO_AGENTIE_CASA_LA_ORAS_H
#define POO_AGENTIE_CASA_LA_ORAS_H

#include"Casa.h"
#pragma once

class Casa_la_oras: public Casa{
private:

    int distanta_centru;

public:
    Casa_la_oras();
    Casa_la_oras(const std::string&, int , int , int);

    [[nodiscard]] int getPret()const override;

    std::string toString() override;

    [[nodiscard]] std::shared_ptr<Locuinta> clone() const override {
        return std::make_shared<Casa_la_oras>(*this);
    }
};


#endif //POO_AGENTIE_CASA_LA_ORAS_H
