#include "Angajat.h"

#include <iostream>
#include <string>

using namespace std;

Angajat::Angajat(){};

Angajat::Angajat(std::string nume_, std::string prenume_, float salariu_)
    :Persoana(nume_, prenume_)
{
    salariu=salariu_;
}

Angajat::Angajat(const Angajat &rhs) ///constructor de copiere
    : Persoana(rhs.nume, rhs.prenume), salariu(rhs.salariu){

}


float Angajat::getSalariu() const
{
    return salariu;
}

void Angajat::setSalariu(float salariu_) {
    Angajat::salariu = salariu_;
}

void Angajat::Cit_Afis_Angajati(int m, Angajat ang[])
{
    for(int i=0;i<m;i++)
    {
        cout<<"Angajatul cu numarul "<<i+1<<" este: "<<endl;
        std::string num;
        std::string pre;
        float s;

        cout<<"Nume, Prenume, Salariu: "<<endl;
        std::cin>>num;
        cin.get();
        ang[i].setNume(num);

        std::cin>>pre;
        cin.get();
        ang[i].setPrenume(pre);

        cin>>s;
        ang[i].setSalariu(s);

        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        cout<<"Angajatul cu numarul "<<i+1<<" este: "<<endl;
        cout<<"Nume: "<<ang[i].getNume()<<endl;
        cout<<"Prenume: "<<ang[i].getPrenume()<<endl;
        cout<<"Salariu: "<<ang[i].getSalariu()<<endl;
        cout<<endl;
    }
}

Angajat& Angajat::operator=(const Angajat& rhs)
{
    if(this != &rhs)
    {
        Persoana::operator=(rhs);
        salariu=rhs.salariu;
    }
    return *this;
}

Tip_Persoana Angajat::GetTip_Persoana() const
{
    return Tip_Persoana::Angajat;
}

void Angajat::Afla_nume() const
{
    cout<<"Angajat: "<<endl;
    std::cout<<"Nume: "<<nume<<", prenume: "<<prenume<<", salariu: "<<salariu;
}

void Angajat::Print(std::ostream &os) const
{
    os<<"Angajat: "<<endl;
    os<<nume<<" "<<prenume<<" - "<<salariu<<" lei"<<endl;
    os<<endl;
}

Angajat::~Angajat(){};