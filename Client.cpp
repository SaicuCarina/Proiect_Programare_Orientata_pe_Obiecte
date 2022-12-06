#include "Client.h"

#include <iostream>
#include <string>

using namespace std;

Client::Client(){};

Client::Client(std::string nume_, std::string prenume_, std::string e_mail_)
    :Persoana(nume_, prenume_)
    {
        e_mail=e_mail_;
    }

Client::Client(const Client& rhs) ///constructor de copiere
    : Persoana(rhs.nume, rhs.prenume), e_mail(rhs.e_mail){

}

std::string Client::getEMail() const
{
    return e_mail;
}

void Client::setEMail(const std::string &eMail)
{
    e_mail = eMail;
}

void Client::Afla_nume() const
{
    cout<<"Client: "<<endl;
    std::cout<<"Nume: "<<nume<<", prenume: "<<prenume<<", e-mail: "<<e_mail;
}

void Client::Cit_Afis_Clienti(int p, Client cli[])
{
    for(int i=0;i<p;i++)
    {
        cout<<"Clientul cu numarul "<<i+1<<" este: "<<endl;
        std::string num;
        std::string pre;
        std::string e;

        cout<<"Nume, Prenume, E-mail: "<<endl;
        std::cin>>num;
        cin.get();
        cli[i].setNume(num);

        std::cin>>pre;
        cin.get();
        cli[i].setPrenume(pre);

        cin>>e;
        cin.get();
        cli[i].setEMail(e);

        cout<<endl;
    }
    for(int i=0;i<p;i++)
    {
        cout<<"Clientul cu numarul "<<i+1<<" este: "<<endl;
        cout<<"Nume: "<<cli[i].getNume()<<endl;
        cout<<"Prenume: "<<cli[i].getPrenume()<<endl;
        cout<<"E-mail: "<<cli[i].getEMail()<<endl;
        cout<<endl;
    }
}


Tip_Persoana Client::GetTip_Persoana() const
{
    return Tip_Persoana::Client;
}

Client& Client::operator=(const Client &rhs){
    if(this != &rhs)
    {
        Persoana::operator=(rhs);
        e_mail=rhs.e_mail;
    }
    return *this;
}

void Client::Print(std::ostream& os) const
{
    os<<"Client: "<<endl;
    os<<nume<<" "<<prenume<<" - "<<e_mail<<" lei"<<endl;
    os<<endl;
}

Client::~Client(){};