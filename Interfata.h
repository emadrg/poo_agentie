//
// Created by drgem on 07/01/2023.
//

#ifndef POO_AGENTIE_INTERFATA_H
#define POO_AGENTIE_INTERFATA_H


#include <iostream>
class Interfata{
public:
    virtual int getPret()const = 0;
    virtual void afisare()const = 0;
    virtual ~Interfata() = 0;
    virtual int getDimensiune_Terasa()const = 0;
};


#endif //POO_AGENTIE_INTERFATA_H
