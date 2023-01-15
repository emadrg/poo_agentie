
#include"Casa_la_oras.h"

#include <utility>
#include "Casa.h"


//constructor fara parametri
Casa_la_oras::Casa_la_oras():Casa(){
    distanta_centru = 0;
}

//constructor cu parametri
Casa_la_oras::Casa_la_oras(std::string loc, int nr, int mp, int pr, int dist ):Casa(std::move(loc),  nr, mp,  pr){
    distanta_centru = dist;
}

//constructor de copiere
[[maybe_unused]] Casa_la_oras::Casa_la_oras(const Casa_la_oras &C): Casa(C){
    distanta_centru = C.distanta_centru;
}

//operator '='
Casa_la_oras& Casa_la_oras::operator=(const Casa_la_oras &C){
    distanta_centru = C.distanta_centru;
    // (Casa)(*this) = C;
    return *this;
}

//getPret
int Casa_la_oras::getPret()const{
    return pret;
}

//getDimensiuneGradina
[[maybe_unused]] int Casa_la_oras::getDistanta_centru()const{
    return distanta_centru;
}
//overload pe << pentru afisare
std::ostream &operator<<(std::ostream &out, Casa_la_oras &casa){
    // dynamic_cast la clasa de baza pentru afisare
    out<<dynamic_cast<Casa&>(casa);
    out<<casa.distanta_centru<<"\n";
    return out;
}
void Casa_la_oras::afisare(){ std::cout << *this;}

