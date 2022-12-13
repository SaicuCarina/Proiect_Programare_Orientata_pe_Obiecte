#ifndef UNTITLED3_ANGAJAT_H
#define UNTITLED3_ANGAJAT_H

#include <string>

#include "Persoana.h"
#include "IOStream_.h"

using namespace std;

class Angajat : public virtual Persoana
{
private:

    float salariu;

public:

    Angajat();

    Angajat(std::string nume_, std::string prenume_, float salariu_);

    Angajat(const Angajat &rhs);

    float getSalariu() const;

    void setSalariu(float salariu_);

    static void Cit_Afis_Angajati(int m, Angajat ang[]);

    Angajat& operator=(const Angajat& rhs);

    Tip_Persoana GetTip_Persoana() const override;

    void Afla_nume() const override;

    void Print(std::ostream& os) const override;

    ~Angajat();



};

#endif
