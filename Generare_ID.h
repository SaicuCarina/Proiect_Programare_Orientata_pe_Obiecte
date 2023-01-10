#ifndef UNTITLED3_GENERARE_ID_H
#define UNTITLED3_GENERARE_ID_H


class Generare_ID {
private:

    static int id;

    Generare_ID();

    static Generare_ID *instance;

public:

    static int generareID();

    static Generare_ID *getInstance();

};

#endif
