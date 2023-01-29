//
// Created by drgem on 02/01/2023.
//

#ifndef POO_AGENTIE_CASA_LA_TARA_H
#define POO_AGENTIE_CASA_LA_TARA_H

#include <memory>
#include"Casa.h"
#pragma once

class Casa_la_tara: public Casa{
private:
    int dimensiune_gradina;

public:
    Casa_la_tara();
    Casa_la_tara(const std::string&, int , int , int);

    [[nodiscard]] int getPret()const override;

    std::string toString() override;

    [[nodiscard]] std::shared_ptr<Locuinta> clone() const override {
        return std::make_shared<Casa_la_tara>(*this);
    }
};


#endif //POO_AGENTIE_CASA_LA_TARA_H
