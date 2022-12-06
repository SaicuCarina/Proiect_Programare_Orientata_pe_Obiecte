#ifndef UNTITLED3_AGENTIE_H
#define UNTITLED3_AGENTIE_H

#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <memory>

#include "Persoana.h"
#include "Angajat.h"
#include "Client.h"
#include "Oferta.h"

using namespace std;

class Agentie {

    static std::vector<std::shared_ptr<Persoana>> pers;

    static std::vector<std::shared_ptr<Oferta>> ofer;


public:
    Agentie() = delete;

    static void Adauga_Persoana(std::shared_ptr<Persoana> per);

    static std::shared_ptr<Persoana> Gaseste_pers(const std::string &name, const std::string &prenume);

    static std::vector<std::shared_ptr<Angajat>> Get_Angajati();

    static std::vector<std::shared_ptr<Client>> Get_Clienti();

    friend class Oferta;

    static void Adauga_Oferta(std::shared_ptr<Oferta> of);

    static std::shared_ptr<Oferta> Gaseste_Oferta(const std::string &destinatie);


};


#endif