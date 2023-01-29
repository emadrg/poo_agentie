#pragma once
#include<iostream>
#include<cstring>
#include"Locuinta.h"

class Casa: public Locuinta{
protected:
    std::string localitate{};

    const float taxa_teren = 0.15; // se adauga la pretul standard al casei o taxa de 15% si apoi se trunchiaza

public:
    // constructor fara parametri
    Casa();

    // constructor cu parametri
    Casa(const std::string&, int , float );

    std::string toString() override;
};
