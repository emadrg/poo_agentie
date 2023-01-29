//
// Created by drgem on 07/01/2023.
//

#include"Locuinta.h"

Locuinta::~Locuinta()= default;

Locuinta::Locuinta(int nrc, float mp) {
    this->numar_camere = nrc;
    this->metri_patrati = mp;
}

std::ostream &operator<<(std::ostream &os, Locuinta &locuinta) {
    return os << locuinta.toString();
}
