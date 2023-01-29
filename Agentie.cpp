
#include "Agentie.h"
#include "Casa_la_tara.h"
#include "Casa_la_oras.h"
#include "Apartament.h"
#include "Penthouse.h"
#include "Exceptii.h"
#include <iostream>
#include <utility>

void Agentie::citire() {
    std::string loc,z;
    int nr,mp,dim_g,dist_c,dim_t,nrLocuinte;
    std::cout << "Introduceti numarul de imobiliare: ";

    std::cin >> nrLocuinte;

    if (std::cin.fail()) {
        std::cout << "\n\nDate de tip gresit!\n\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        nrLocuinte = 0;
    }

    for(int i=0; i<nrLocuinte; i++)
    {
        int tip;

        std::cout<<"Tastati:"<<std::endl;
        std::cout<<"-> '0' pentru a introduce o 'CASA LA TARA'"<<std::endl;
        std::cout<<"-> '1' pentru 'CASA LA ORAS'"<<std::endl;
        std::cout<<"-> '2' pentru 'APARTAMENT'"<<std::endl;
        std::cout<<"-> '3' PENTRU 'PENTHOUSE':";

        std::cin>>tip;

        if (std::cin.fail()) {
            std::cout << "\n\nDate de tip gresit!\n\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            --i;
            continue;
        }

        if (0 > tip || tip > 3) {
            std::cout << "Numar invalid!\n";
            --i;
            continue;
        }

        if(tip == 0){
            std::cout<<"Localitate: ";
            std::cin>>loc;

            std::cout<<"Numar camere: ";
            std::cin>>nr;

            std::cout<<"Metri patrati: ";
            std::cin>>mp;

            std::cout<<"Dimensiune gradina: ";
            std::cin>>dim_g;

            if (std::cin.fail()) {
                std::cout << "\n\nDate de tip gresit!\n\n";
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                --i;
                continue;
            }

            try {
                auto C =  std::make_shared<Casa_la_tara>(Casa_la_tara(loc, nr, mp, dim_g));
                locuinte.push_back(C);
            } catch (CasaTaraException &e) {
                std::cout << "Eroare: " << e.what() << '\n';
                --i;
                continue;
            } catch (CasaException &e) {
                std::cout << "Eroare: " << e.what() << '\n';
                --i;
                continue;
            }


            std::cout<<"\n";
        }

        if(tip == 1){
            std::cout<<"Localitate: ";
            std::cin>>loc;

            std::cout<<"Numar camere: ";
            std::cin>>nr;

            std::cout<<"Metri patrati: ";
            std::cin>>mp;

            std::cout<<"Distanta centru: ";
            std::cin>>dist_c;

            if (std::cin.fail()) {
                std::cout << "\n\nDate de tip gresit!\n\n";
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                --i;
                continue;
            }

            try {
                auto C = std::make_shared<Casa_la_oras>(Casa_la_oras(loc, nr, mp, dist_c));
                locuinte.push_back(C);
            } catch (CasaOrasException &e) {
                std::cout << "Eroare: " << e.what() << '\n';
                --i;
                continue;
            } catch (CasaException &e) {
                std::cout << "Eroare: " << e.what() << '\n';
                --i;
                continue;
            }

            std::cout<<"\n";
        }

        if(tip == 2){
            std::cout<<"Zona: ";
            std::cin>>z;

            std::cout<<"Numar camere: ";
            std::cin>>nr;

            std::cout<<"Metri patrati: ";
            std::cin>>mp;

            if (std::cin.fail()) {
                std::cout << "\n\nDate de tip gresit!\n\n";
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                --i;
                continue;
            }

            try {
                auto C = std::make_shared<Apartament>(z, nr, mp);
                locuinte.push_back(C);
            } catch (ApartamentException &e) {
                std::cout << "Eroare: " << e.what() << '\n';
                --i;
                continue;
            }

            std::cout<<"\n";
        }

        if(tip == 3){
            std::cout<<"Zona: ";
            std::cin>>z;

            std::cout<<"Numar camere: ";
            std::cin>>nr;

            std::cout<<"Metri patrati: ";
            std::cin>>mp;

            std::cout<<"Dimensiune terasa: ";
            std::cin>>dim_t;

            if (std::cin.fail()) {
                std::cout << "\n\nDate de tip gresit!\n\n";
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                --i;
                continue;
            }

            try {
                auto C = std::make_shared<Penthouse>(z, nr, mp, dim_t);
                locuinte.push_back(C);
            } catch (PenthouseException &e) {
                std::cout << "Eroare: " << e.what() << '\n';
                --i;
                continue;
            } catch (ApartamentException &e) {
                std::cout << "Eroare: " << e.what() << '\n';
                --i;
                continue;
            }

            std::cout<<"\n";
        }

    }

    std::cout<<"\n";
}

void Agentie::afisare() {
    std::cout << "Agentia are locuintele:\n";

    for(const auto& i : locuinte){
        std::cout << *i << '\n';
    }

    std::cout<<"\n";

    int pret_total = 0;
    std::cout<<"Pretul total al imobiliarelor este: ";
    for(auto & i : locuinte){
        pret_total += i->getPret();
    }
    std::cout<<pret_total<<'\n';

    //int s;
    std::cout<<"Afisati imobilele cu pretul intre 10000 si 60000 de Euro: \n";
    for(const auto& i : locuinte){
        //s = i->getPret();
        if(10000 < i->getPret() && i->getPret() < 60000){
            std::cout << *i << '\n';
        }

        std::cout<<"\n";
    }
}

Agentie &Agentie::operator=(Agentie other) {
    swap(*this, other);
    return *this;
}

[[maybe_unused]] Agentie::Agentie (const Agentie& other)
{
    for (const auto& loc: other.locuinte)
        locuinte.emplace_back(loc->clone());
    numeAgentie=other.numeAgentie;
}

[[maybe_unused]] Agentie::Agentie(std::string nume) {
    this->numeAgentie = std::move(nume);
}

void swap(Agentie &a1, Agentie &a2) {
    std::swap(a1.locuinte, a2.locuinte);
    std::swap(a1.numeAgentie, a2.numeAgentie);
}
