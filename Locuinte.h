//
// Created by drgem on 07/01/2023.
//

#ifndef POO_AGENTIE_INTERFATA_H
#define POO_AGENTIE_INTERFATA_H


#include <iostream>
class Locuinte{
public:
    [[nodiscard]] virtual int getPret()const = 0;
    virtual void afisare() = 0;
    virtual ~Locuinte() = 0;
    [[nodiscard]] virtual int getDimensiune_Terasa()const = 0;
};


#endif //POO_AGENTIE_INTERFATA_H
