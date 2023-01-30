//
// Created by drgem on 02/01/2023.
//

#ifndef POO_AGENTIE_CASA_LA_TARA_H
#define POO_AGENTIE_CASA_LA_TARA_H

#include <utility>

#include"Casa.h"
#include "Exceptii.h"

#pragma once

class Casa_la_tara: public Casa{
private:
    int dimensiune_gradina;

    friend class Casa_la_tara_builder;

public:
    Casa_la_tara();
    Casa_la_tara(const std::string&, int , int , int);

    [[nodiscard]] int getPret() const override;

    std::string toString() override;

    [[nodiscard]] std::shared_ptr<Locuinta> clone() const override {
        return std::make_shared<Casa_la_tara>(*this);
    }
};

class Casa_la_tara_builder {
private:
    Casa_la_tara casaLaTara;

public:
    Casa_la_tara_builder() = default;

    Casa_la_tara_builder& localitate(std::string loc) {
        casaLaTara.localitate = std::move(loc);
        return *this;
    }

    Casa_la_tara_builder& nrCamere(int cam) {
        casaLaTara.numar_camere = cam;
        return *this;
    }

    Casa_la_tara_builder& metriPatrati(int mp) {
        casaLaTara.metri_patrati = mp;
        return *this;
    }

    Casa_la_tara_builder& dimGradina(int dim) {
        casaLaTara.dimensiune_gradina = dim;
        return *this;
    }

    Casa_la_tara build() {
        if (casaLaTara.localitate.empty() || casaLaTara.dimensiune_gradina < 0 || casaLaTara.metri_patrati <= 0 || casaLaTara.numar_camere <= 0)
            throw CasaTaraException("Valoare invalida!");
        return casaLaTara;
    }
};

#endif //POO_AGENTIE_CASA_LA_TARA_H
