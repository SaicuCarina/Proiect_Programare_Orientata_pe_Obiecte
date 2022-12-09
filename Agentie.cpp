#include "Agentie.h"
#include "Persoana.h"
#include "Oferta.h"

#include<bits/stdc++.h>

using namespace std;

std::vector<std::shared_ptr<Persoana>> Agentie::pers;

std::vector<std::shared_ptr<Oferta>> Agentie::ofer;

void Agentie::Adauga_Persoana(std::shared_ptr<Persoana> per)
{
    pers.push_back(per);

}

std::shared_ptr<Persoana> Agentie::Gaseste_pers(const std::string &nume, const std::string &prenume)
{
    for (auto &per : pers)
    {
        if (per->getNume() == nume and per->getPrenume() == prenume)
            return per;
    }

    throw Nu_avem_pers();
}


std::vector<std::shared_ptr<Angajat>> Agentie::Get_Angajati() {
    std::vector<std::shared_ptr<Angajat>> ang;

    for (auto &per : pers)
    {
        if (typeid(*per) == typeid(Angajat))
            ang.push_back(std::dynamic_pointer_cast<Angajat>(per));
    }

    return ang;
}

std::vector<std::shared_ptr<Client>> Agentie::Get_Clienti() {
    std::vector<std::shared_ptr<Client>> cli;

    for (auto &per : pers)
    {
        if (typeid(*per) == typeid(Client))
            cli.push_back(std::dynamic_pointer_cast<Client>(per));
    }

    return cli;
}

void Agentie::Adauga_Oferta(std::shared_ptr<Oferta> of)
{
    ofer.push_back(of);

}

std::shared_ptr<Oferta> Agentie::Gaseste_Oferta(const std::string &destinatie)
{
    for (auto &of : ofer)
    {
        if (of->getDestinatie() == destinatie)
            return of;
    }

    throw Nu_avem_oferte();
}