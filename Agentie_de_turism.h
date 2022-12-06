#ifndef UNTITLED3_AGENTIE_DE_TURISM_H
#define UNTITLED3_AGENTIE_DE_TURISM_H

#include <string>
#include <iostream>
#include <vector>
#include <memory>

#include "Oferta.h"

using namespace std;

class Agentie_de_turism {

    std::string nume;
    int nr_oferte = 0;
    Oferta oferta[50];

public:

    Agentie_de_turism();

    Agentie_de_turism(std::string nume_, int nr_oferte_);

    std::string getNume() const;

    int getNrOferte() const;

    void setNume(const std::string &nume);

    void setNrOferte(int nrOferte);

    void afisare_agentie();

    void citest_agentie();

    void cauta_oferta(std::string destinatie, Oferta a[], int n);

    friend class Oferta;

    ~Agentie_de_turism();
};


#endif //UNTITLED3_AGENTIE_DE_TURISM_H
