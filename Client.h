#ifndef UNTITLED3_CLIENT_H
#define UNTITLED3_CLIENT_H

#include <string>
#include <memory>
#include "Persoana.h"
#include "IOStream_.h"

using namespace std;

class Client : public virtual Persoana {
private:
    std::string e_mail;

public:

    Client();

    Client(std::string nume_, std::string prenume_, std::string e_mail_);

    Client(const Client &rhs);

    std::string getEMail() const;

    void setEMail(const std::string &eMail);

    Tip_Persoana GetTip_Persoana() const override;

    void Afla_nume() const override;

    static void Cit_Cli(int p, Client cli[]);

    static void Cit_Afis_Clienti(int p, Client cli[]);

    Client &operator=(const Client &rhs);

    void Print(std::ostream &os) const override;

    ~Client();

};

#endif
