#include "Oferta.h"
#include "Agentie_de_turism.h"
#include "Persoana.h"

using namespace std;

Agentie_de_turism::Agentie_de_turism() {};

Agentie_de_turism::Agentie_de_turism(std::string nume_, int nr_oferte_) ///constructor de initializare
{
    nume=nume_;
    nr_oferte=nr_oferte_;
}

std::string Agentie_de_turism::getNume() const
{
    return nume;
}

int Agentie_de_turism::getNrOferte() const
{
    return nr_oferte;
}

void Agentie_de_turism::setNume(const std::string &nume_)
{
    Agentie_de_turism::nume = std::move(nume_);
}

void Agentie_de_turism::setNrOferte(int nrOferte)
{
    nr_oferte = nrOferte;
}

void Agentie_de_turism::afisare_agentie()
{
    std::cout<<"Numele agentiei este: "<<nume<<endl;
    cout<<"Numarul ofertelor din agentie este: "<<nr_oferte;
}

void Agentie_de_turism::citest_agentie()
{
    std::string n;
    int nr_of;
    Oferta off[100];
    std::cin>>n;
    cin.get();
    cin>>nr_of;
    nume=n;
    nr_oferte=nr_of;
}

void Agentie_de_turism::cauta_oferta(std::string destinatie, Oferta a[], int n)
{
    std::cout<<"Destinatia cautata este: "<<destinatie<<endl;
    int ok=0;
    for(int i=0;i<n;i++)
        if(destinatie==a[i].getDestinatie())
        {
            ok++;
            cout<<"Optiunea cu numarul "<<ok<<" este: "<<endl;
            cout<<"Pretul pentru destinatia cautata este: "<<a[i].getPret()<<" euro "<<endl;
            cout<<"Locurile disponibile pentru locatia cautata sunt:"<<a[i].getLocuriDisponibile()<<endl<<endl;
        }
    if(ok==0)
        cout<<"Nu exista oferte pentru destinatia cautata!";
}

Agentie_de_turism::~Agentie_de_turism() {};