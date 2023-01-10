#include "Generare_ID.h"

int Generare_ID::id = 0;

Generare_ID *Generare_ID::instance = nullptr;

Generare_ID::Generare_ID() {}

int Generare_ID::generareID() {
    return id++;
}

Generare_ID *Generare_ID::getInstance() {
    if (instance == nullptr)
        instance = new Generare_ID();
    return instance;
}
