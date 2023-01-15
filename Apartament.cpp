
#include"Apartament.h"

//constructor fara parametri
Apartament::Apartament(){
    zona.assign("");
    numar_camere = 0;
    metri_patrati = 0;
    pret = 0;
}

//constructor cu parametri
Apartament::Apartament(std::string zona, int nr, int mp, int pr){
    zona.assign(zona);
    numar_camere = nr;
    metri_patrati = mp;
    pret = pr;
}

//constructor de copiere
Apartament::Apartament(const Apartament &A){
    zona.assign(A.zona);
    numar_camere = A.numar_camere;
    metri_patrati = A.metri_patrati;
    pret = A.pret;
}

//operator '='
Apartament& Apartament::operator=(const Apartament& A){
    if(this!=&A){
        numar_camere = 0;
        metri_patrati = 0;
        pret = 0;
    }
    zona.assign(A.zona);
    numar_camere = A.numar_camere;
    metri_patrati = A.metri_patrati;
    pret = A.pret;

    return *this;
}

//getPret
int Apartament::getPret()const{
    return pret;
}

//afisare
// afisare
std::ostream &operator<<(std::ostream &out, Apartament &apartament){
    out<<"Zona: "<< apartament.zona<<"\n";
    out<<"Numar camere: "<<apartament.numar_camere<<"\n";
    out<<"Dimensiune: "<<apartament.metri_patrati<<"\n";
    out<<"Pret: "<<apartament.pret<<"\n";
    return out;
}

void Apartament::afisare(){ std::cout << *this;}