#include "Oferta.h"

using namespace std;

Oferta::Oferta(){};

Oferta::Oferta(std::string destinatie_, float pret_, int locuridisponibile_) ///constructor de initializare
{
    destinatie=destinatie_;
    pret = pret_;
    locuridisponibile = locuridisponibile_;
}

Oferta::Oferta(const Oferta &oferta) ///constructor de copiere
{
    destinatie=oferta.destinatie;
    pret=oferta.pret;
    locuridisponibile=oferta.locuridisponibile;
};

string Oferta::getDestinatie() const
{
    return destinatie;
}

float Oferta::getPret() const
{
    return pret;
}

int Oferta::getLocuriDisponibile() const
{
    return locuridisponibile;
}

void Oferta::setDestinatie(const std::string &destinatie_) {
    Oferta::destinatie = std::move(destinatie_);
}

void Oferta::setPret(float pret_)
{
    Oferta::pret = pret_;
}

void Oferta::setLocuridisponibile(int locuridisponibile_)
{
    Oferta::locuridisponibile = locuridisponibile_;
}

void Oferta::citire_oferta()
{
    std::string d;
    float p;
    int l;
    std::cin>>d;
    cin.get();
    cin>>p>>l;
    destinatie=d;
    pret=p;
    locuridisponibile=l;
}

void Oferta::afisare_oferta()
{
    std::cout<<"Destinatia: "<<destinatie<<endl;
    cout<<"Pretul: "<<pret<<" euro "<<endl;
    cout<<"Locurile disponibile pentru aceasta oferta: "<<locuridisponibile<<endl;
    cout<<endl;
}

Oferta &Oferta::operator=(const Oferta &rhs)
{
    if(this != &rhs)
    {
        destinatie=rhs.destinatie;
        pret=rhs.pret;
        locuridisponibile=rhs.locuridisponibile;
    }
    return *this;
}

const char *Nu_avem_oferte::what() const noexcept {
    return "Nu avem oferta cu destinatia introdusa!";
}

void Nu_avem_oferte::Print(std::ostream &os) const{
    os<<"Exceptie: Nu avem oferta cu destinatia introdusa!";
}

Nu_avem_oferte::~Nu_avem_oferte(){};


Oferta::~Oferta(){};