

#ifndef LOCUINTEPOO_AGENTIE_H
#define LOCUINTEPOO_AGENTIE_H

#include "Locuinte.h"
#include <vector>

class Agentie {
    int nrLocuinte{};
    std::vector<Locuinte*> locuinte;
public:
    void citire();
    void afisare();
    Agentie &operator=(Agentie agentia);

    [[maybe_unused]] Agentie (const Agentie& other);

    Agentie();
};


#endif //LOCUINTEPOO_AGENTIE_H
