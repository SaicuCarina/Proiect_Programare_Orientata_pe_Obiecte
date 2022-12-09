#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>

#include "Oferta.h"
#include "Agentie_de_turism.h"
#include "Persoana.h"
#include "Angajat.h"
#include "Client.h"
#include "Persoana.h"
#include "Agentie.h"
#include "IOStream_.h"


using namespace std;

int main()
{
    Oferta of1; ///constructor de initializare

    Agentie_de_turism ag;

    vector<shared_ptr<Oferta>> oferta;

    Oferta of[50];
    int n;

    int m;
    Angajat ang[20];

    int p;
    Client cli[20];

    Angajat angajat;
    Client client;

    auto A1 = std::make_shared<Angajat>("Pop", "David", 4000);
    auto A2 = std::make_shared<Angajat>("Matei", "Andreea", 3500);
    auto A3 = std::make_shared<Angajat>("Lupu", "Mihai", 3000);


    auto C1 = std::make_shared<Client>("Anghel", "Tudor", "Tudor@gmail.com");
    auto C2 = std::make_shared<Client>("Bucur", "Maria", "MariaA@gmail.com");
    auto C3 = std::make_shared<Client>("Iancu", "Vlad", "Iancu.Vlad@yahoo.com.com");

    Agentie::Adauga_Persoana(A1);
    Agentie::Adauga_Persoana(A2);
    Agentie::Adauga_Persoana(A3);

    Agentie::Adauga_Persoana(C1);
    Agentie::Adauga_Persoana(C2);
    Agentie::Adauga_Persoana(C3);

    std::map<std::string, std::shared_ptr<Persoana>> pers = {
            {"Pop", A1},
            {"Matei", A2},
            {"Lupu", A3},

            {"Anghel", A1},
            {"Bucur", A2},
            {"Iancu", A3}

    };


    shared_ptr<Oferta> Ag2(new Oferta("Japonia", 800, 1));
    shared_ptr<Oferta> Ag3(new Oferta("Croatia", 600, 3));
    shared_ptr<Oferta> Ag4(new Oferta("Italia", 500, 2));

    Agentie::Adauga_Oferta(Ag2);
    Agentie::Adauga_Oferta(Ag3);
    Agentie::Adauga_Oferta(Ag4);

    std::map<std::string, std::shared_ptr<Oferta>> ofer = {
            {"Japonia", Ag2},
            {"Croatia", Ag3},
            {"Italia", Ag4}

    };

    bool quit=false;
    do
    {
        cout<<endl;


        cout<<"0.Exit"<<endl;
        cout<<endl;

        cout<<"Tema 1"<<endl;
        cout<<endl;

        cout<<"1.Afisarea constructorul de initializare!"<<endl;
        cout<<"2.Afisarea contructorul de copiere!"<<endl;
        cout<<"3.Afisarea operatorului de atribuire!"<<endl;
        cout<<"4.Citirea si afisarea n obiecte!"<<endl;
        cout<<"5.Cautarea ofertelor cu o anumita destinatie, din cele n oferte citite la punctul 3!"<<endl;
        cout<<"6.Adaugarea unei oferte in vectorul de oferte deja existente!"<<endl;

        cout<<endl;

        cout<<"Tema 2"<<endl;
        cout<<endl;

        cout<<"7.Afisarea constructorul de initializare!"<<endl;
        cout<<"8.Afisarea contructorul de copiere!"<<endl;
        cout<<"9.Afisarea operatorului de atribuire!"<<endl;
        cout<<"10.Adaugarea unui numar m de angajati in agentie si afisarea acestora!"<<endl;
        cout<<"11.Adaugarea unui numar p de clienti in agentie si afisarea acestora!"<<endl;
        cout<<"12.Apelare operator <<!"<<endl;
        cout<<"13.Cauta angajatul 1 si clientul 1!"<<endl;
        cout<<"14.Gaseste persoana dupa nume si prenume+exceptie!"<<endl;
        cout<<"15.Smart pointers pt clienti si angajati!"<<endl;
        cout<<"16.Gaseste oferta dupa destinatie+exceptie!"<<endl;

        cout<<endl<<endl;

        int roll;
        cout<<"Introduce un numar de la 1 la 16:";
        cout<<endl;
        cin>>roll;
        switch(roll)
        {
            case 1:
            {
                cout<<"Constructorul de initializare are vlaorile: "<<endl;

                of1.setDestinatie("Malta");
                of1.setPret(400);
                of1.setLocuridisponibile(3);

                of1.afisare_oferta();
                cout<<endl;

                break;
            }
            case 2:
            {
                Oferta of2(of1); ///constructor de copiere
                cout<<"Constructorul de copiere are vlaorile: "<<endl;

                of2.afisare_oferta();
                cout<<endl;

                break;
            }
            case 3:
            {
                Oferta of3;
                cout<<"Operatorul de atribuire '=' atribuie valorile: "<<endl;

                of3 = of1; /// operator de atribuire =
                of3.afisare_oferta();
                cout<<endl;

                break;
            }
            case 4:
            {
                cout<<"Introduceti o agentie noua(numele+nr de oferte din acea agentie): ";
                ///Agentie_de_turism ag1("Veltravel", n);
                ag.citest_agentie();
                ag.afisare_agentie();
                cout<<endl<<endl;


                cout<<"Cele "<<ag.getNrOferte()<<" oferte din agentia "<<ag.getNume()<<" sunt: "<<endl;
                for(int i=0;i<ag.getNrOferte();i++)
                {
                    cout<<i+1<<": ";
                    of[i].citire_oferta();
                }

                for(int i=0;i<ag.getNrOferte();i++)
                {
                    cout<<"Oferta cu numarul "<<i+1<<" este: "<<endl;
                    of[i].afisare_oferta();
                }

                break;
            }
            case 5:
            {
                string destinatie_cautata;
                cout<<"Introduceti ce destinatie cautati: ";
                cin>>destinatie_cautata;
                cin.get();
                cout<<endl;

                ag.cauta_oferta(destinatie_cautata, of , ag.getNrOferte());
                break;
            }
            case 6:
            {
                ///adaugarea unei oferte in vectorul de oferte deja existente
                Oferta oferta_de_adaugat;

                ag.setNrOferte(ag.getNrOferte()+1);
                cout<<ag.getNrOferte()<<endl;

                int p=ag.getNrOferte();

                of[p-1].setDestinatie("Franta");
                of[p-1].setPret(800);
                of[p-1].setLocuridisponibile(1);


                for(int i=0;i<ag.getNrOferte();i++)
                {
                    cout<<"Oferta cu numarul "<<i+1<<" este: "<<endl;
                    of[i].afisare_oferta();
                }

                break;
            }
            case 7:
            {
                cout<<"Constructorul de initializare are vlaorile: "<<endl;

                angajat.setNume("Grigore");
                angajat.setPrenume("Florin");
                angajat.setSalariu(3000);

                client.setNume("Vasile");
                client.setPrenume("Alexandru");
                client.setEMail("V.Alexandru@yahoo.com");

                cout<<angajat;
                cout<<endl;

                cout<<client;
                cout<<endl;

                break;
            }
            case 8:
            {
                Angajat ang2(angajat); ///constructor de copiere
                Client cli2(client);

                cout<<"Constructorul de copiere are vlaorile: "<<endl;

                cout<<ang2;
                cout<<endl;

                cout<<cli2;

                break;
            }
            case 9:
            {
                Angajat ang3;
                Client cli3;

                cout<<"Operatorul de atribuire '=' atribuie valorile: "<<endl;

                ang3 = angajat; /// operator de atribuire =
                cli3 = client;

                cout<<ang3;
                cout<<endl;

                cout<<cli3;
                cout<<endl;

                break;
            }
            case 10:
            {
                cout<<"Numarul de angajati din agentie este: ";
                cin>>m;
                Angajat::Cit_Afis_Angajati(m, ang);

                break;
            }
            case 11:
            {
                cout<<"Numarul de clienti din agentie este: ";
                cin>>p;
                Client::Cit_Afis_Clienti(p, cli);

                break;
            }
            case 12:
            {
                cout<<"Angajatii sunt: ";
                cout<<*A1<<endl;
                cout<<*A2<<endl;
                cout<<*A3<<endl;

                cout<<"Clientii sunt: ";
                cout<<*C1<<endl;
                cout<<*C2<<endl;
                cout<<*C3<<endl;

                break;

            }
            case 13:
            {
                A1->Afla_nume();
                cout<<endl;

                C1->Afla_nume();
                cout<<endl;

                break;
            }
            case 14:
            {
                try{
                    Agentie::Gaseste_pers("Pop", "David");

                }catch(const Nu_avem_pers &err)
                {
                    std::cout<<"Nu s-a gasit persoana cu numele si prenumele introduse!"<<endl;
                    break;
                }
                std::cout<<"Persoana a fost gasita cu succes!"<<endl;
                break;
            }
            case 15:
            {
                shared_ptr<Client> C4(new Client("Surdu", "Gianina", "SG@gmail.com"));
                shared_ptr<Angajat> A4(new Angajat("Baciu", "Lorelai", 4000));

                shared_ptr<Client> C5;
                shared_ptr<Angajat> A5;

                C5 = C4;
                A5 = A4;

                cout<<*A5;
                cout<<*C5;

                shared_ptr<Oferta> Ag5(new Oferta("Danemarca", 1000, 5));

                Agentie::Adauga_Oferta(Ag5);

                break;
            }
            case 16:
            {
                try{
                    Agentie::Gaseste_Oferta("Croatia");

                }catch(const Nu_avem_oferte &err)
                {
                    std::cout<<"Nu s-a gasit oferta cu destinatia cautata!"<<endl;
                    break;
                }
                std::cout<<"Oferta a fost gasita cu succes!"<<endl;

                try{
                    Agentie::Gaseste_Oferta("Malta");

                }catch(const Nu_avem_oferte &err)
                {
                    std::cout<<"Nu s-a gasit oferta cu destinatia cautata!"<<endl;
                    break;
                }
                std::cout<<"Oferta a fost gasita cu succes!"<<endl;
                break;
            }
            default:
            {
                cout<<"Nu ai introdus un numar intre 1 si 16!";
                break;
            }
	    case 0:
                quit=true;
        }
    }while(!quit);

    return 0;
}

