#ifndef UNTITLED3_PERSOANA_H
#define UNTITLED3_PERSOANA_H

#include <string>
#include <iostream>
#include <vector>
#include <map>

#include "IOStream_.h"

using namespace std;


enum class Tip_Persoana {
    Angajat,
    Client
};

class Nu_avem_pers : public std::exception, public IOStream {
public:
    virtual ~Nu_avem_pers();

    const char *what() const noexcept override;

    void Print(std::ostream &os) const override;
};

class Persoana : public IOStream {
protected:

    std::string prenume;
    std::string nume;

public:

    Persoana();

    Persoana(std::string nume_, std::string prenume_);

    Persoana(const Persoana &rhs); ///constructor de copiere

    std::string getNume() const;

    void setNume(const std::string &nume_);

    std::string getPrenume() const;

    void setPrenume(const std::string &prenume_);

    Persoana &operator=(const Persoana &rhs);

    virtual void Afla_nume() const = 0;

    virtual Tip_Persoana GetTip_Persoana() const = 0;

    virtual ~Persoana();


};

#endif
