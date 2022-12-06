#ifndef UNTITLED3_OFERTA_H
#define UNTITLED3_OFERTA_H

#include <vector>
#include <string>
#include <map>
#include <iostream>

#include "Persoana.h"

using namespace std;

class Oferta
{
    std::string destinatie; ///pentru locatiile formate din mai multe cuvinte, spatiile vor fi inlocuite cu "_"
    float pret; /// in euro
    int locuridisponibile; ///locuri disponibile, maximul pestru oferta respectiva
public:

    Oferta();

    Oferta(std::string destinatie_, float pret_, int locuridisponibile_);


    Oferta(const Oferta &oferta);

    std::string getDestinatie() const;

    float getPret() const;

    int getLocuriDisponibile() const;

    void setDestinatie(const std::string &destinatie);

    void setPret(float pret_);

    void setLocuridisponibile(int locuridisponibile_);

    void citire_oferta();

    void afisare_oferta();

    Oferta& operator=(const Oferta &rhs);

    ~Oferta();

};


class Nu_avem_oferte : public std::exception, public IOStream{
public:

    virtual ~Nu_avem_oferte();

    const char* what() const noexcept override;

    void Print(std::ostream &os) const override;
};

const char what()noexcept;

void Print(std::ostream &os);

#endif
