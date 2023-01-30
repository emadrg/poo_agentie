//
// Created by drgem on 07/01/2023.
//

#ifndef POO_AGENTIE_INTERFATA_H
#define POO_AGENTIE_INTERFATA_H


#include <iostream>
#include <memory>

class Locuinta {
protected:
    int numar_camere;
    int metri_patrati;

    Locuinta(int nrc, int mp);

public:
    [[nodiscard]] virtual int getPret()const = 0;
    [[nodiscard]] virtual std::shared_ptr<Locuinta> clone() const = 0;

    virtual ~Locuinta() = 0;

    virtual std::string toString() = 0;

    friend std::ostream& operator<<(std::ostream& os, Locuinta& locuinta);
};


#endif
