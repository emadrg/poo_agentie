//
// Created by drgem on 02/01/2023.
//

#include<iostream>
#include <utility>
#include"Casa_la_tara.h"
#include "Casa.h"

//constructor fara parametri
Casa_la_tara::Casa_la_tara():Casa(){
    dimensiune_gradina = 0;
}

//constructor cu parametri
Casa_la_tara::Casa_la_tara(std::string loc, int nr, int mp, int pr, int dim ):Casa(std::move(loc),  nr, mp,  pr){
    dimensiune_gradina = dim;
}

//constructor de copiere
[[maybe_unused]] Casa_la_tara::Casa_la_tara(const Casa_la_tara &C): Casa(C){
    dimensiune_gradina = C.dimensiune_gradina;
}

//operator '='
Casa_la_tara& Casa_la_tara::operator=(const Casa_la_tara &C){
    dimensiune_gradina = C.dimensiune_gradina;
    //(Casa)(*this) = C;
    return *this;
}

//getPret
int Casa_la_tara::getPret()const{
    return pret;
}

//afisare
//overload pe << pentru afisare
std::ostream &operator<<(std::ostream &out, Casa_la_tara &casa){
    out<<dynamic_cast<Casa&>(casa);
    out<<casa.dimensiune_gradina<<"\n";
    return out;
}

void Casa_la_tara::afisare(){ std::cout << *this;}

//getDimensiuneGradina
[[maybe_unused]] int Casa_la_tara::getDimensiune_Gradina()const{
    return dimensiune_gradina;
}
