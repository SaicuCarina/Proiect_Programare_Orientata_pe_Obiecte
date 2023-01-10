#include "Persoana.h"
#include <iostream>

using namespace std;


const char *Nu_avem_pers::what() const noexcept {
    return "Nu avem o persoana cu numele si prenumele introduse!";
}

void Nu_avem_pers::Print(std::ostream &os) const {
    os << "Exceptie: Nu avem o persoana cu numele si prenumele introduse!";
}

Nu_avem_pers::~Nu_avem_pers() {};

Persoana::Persoana() {};

Persoana::Persoana(std::string nume_, std::string prenume_) {
    nume = nume_;
    prenume = prenume_;
}

Persoana::Persoana(const Persoana &rhs) ///constructor de copiere
        : nume(rhs.nume), prenume(rhs.prenume) {

}

string Persoana::getNume() const {
    return nume;
}

void Persoana::setNume(const std::string &nume_) {
    Persoana::nume = nume_;
}

string Persoana::getPrenume() const {
    return prenume;
}

void Persoana::setPrenume(const std::string &prenume_) {
    Persoana::prenume = prenume_;
}

Persoana &Persoana::operator=(const Persoana &rhs) {
    if (this != &rhs) {
        nume = rhs.nume;
        prenume = rhs.prenume;
    }
    return *this;
}

void Persoana::Afla_nume() const {
    std::cout << "Nume: " << nume << endl;
    std::cout << "Prenume: " << prenume << endl;
    cout << endl;
}

Persoana::~Persoana() = default;