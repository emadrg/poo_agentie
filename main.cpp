#include"Casa_la_oras.h"
#include"Casa_la_tara.h"
#include"Apartament.h"
#include"Penthouse.h"
#include<iostream>
#include<vector>


int main()
{
    int n;

    std::cout<<"Introduceti numarul de imobiliare: ";
    std::cin>>n;

    std::vector<Interfata*>vec;

    char loc[20];
    char z[20];
    int nr;
    int mp;
    int pr;
    int dim_g;
    int dist_c;
    int dim_t;

    for(int i=0; i<n; i++)
    {
        int tip;

        std::cout<<"Tastati '0' pentru a introduce o 'CASA LA TARA', '1' pentru 'CASA LA ORAS', '2' pentru 'APARTAMENT', 3 PENTRU 'PENTHOUSE': ";
        std::cin>>tip;

        if(tip == 0){
            std::cout<<"Localitate: ";
            std::cin>>loc;

            std::cout<<"Numar camere: ";
            std::cin>>nr;

            std::cout<<"Metri patrati: ";
            std::cin>>mp;

            std::cout<<"Pret: ";
            std::cin>>pr;

            std::cout<<"Dimensiune gradina: ";
            std::cin>>dim_g;

            auto *C = new Casa_la_tara(loc, nr, mp, pr, dim_g);
            vec.push_back(reinterpret_cast<Interfata *>(C));

            std::cout<<"\n";
        }

        if(tip == 1){
            std::cout<<"Localitate: ";
            std::cin>>loc;

            std::cout<<"Numar camere: ";
            std::cin>>nr;

            std::cout<<"Metri patrati: ";
            std::cin>>mp;

            std::cout<<"Pret: ";
            std::cin>>pr;

            std::cout<<"Distanta centru: ";
            std::cin>>dist_c;

            auto *C = new Casa_la_oras(loc, nr, mp, pr, dist_c);
            vec.push_back(reinterpret_cast<Interfata *>(C));

            std::cout<<"\n";
        }

        if(tip == 2){
            std::cout<<"Zona: ";
            std::cin>>z;

            std::cout<<"Numar camere: ";
            std::cin>>nr;

            std::cout<<"Metri patrati: ";
            std::cin>>mp;

            std::cout<<"Pret: ";
            std::cin>>pr;

            auto*C = new Apartament(loc, nr, mp, pr);
            vec.push_back(C);

            std::cout<<"\n";
        }

        if(tip == 3){
            std::cout<<"Zona: ";
            std::cin>>z;

            std::cout<<"Numar camere: ";
            std::cin>>nr;

            std::cout<<"Metri patrati: ";
            std::cin>>mp;

            std::cout<<"Pret: ";
            std::cin>>pr;

            std::cout<<"Dimensiune terasa: ";
            std::cin>>dim_t;

            auto *C = new Penthouse(z, nr, mp, pr, dim_t);
            vec.push_back(C);

            std::cout<<"\n";
        }

    }

    std::cout<<"\n";

    for(auto & i : vec){
        i->afisare();
        std::cout<<"\n";
    }

    std::cout<<"\n";

    int pret_total = 0;
    std::cout<<"Pretul total al imobiliarelor este: ";
    for(auto & i : vec){
        pret_total += i->getPret();
    }
    std::cout<<pret_total<<'\n';

    for(int i=0; i<vec.size(); i++){
        if(vec[i]->getDimensiune_Terasa() != -1)
        {
            std::cout<<"Proprietatea numarul "<<i+1<<" este un penthouse ce are dimensiunea terasei "<<vec[i]->getDimensiune_Terasa();
        }

    }

    int s;
    std::cout<<"Afisati imobilele cu pretul mai mic de 60000 de Euro: \n";
    for(auto & i : vec){

        try{
            s = i->getPret();
            if(s<60000){
                i->afisare();

            }
            else{
                throw(s);
            }
        }
        catch(int s){
            std::cout<<"Imobilul nu are pretul < 60000\n";
        }
        std::cout<<"\n";

    }


    return 0;
}
