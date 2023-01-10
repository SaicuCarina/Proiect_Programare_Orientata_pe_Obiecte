#ifndef UNTITLED3_IOSTREAM_H
#define UNTITLED3_IOSTREAM_H

#include <string>

using namespace std;


class IOStream {
protected:
    virtual void Print(std::ostream &os) const = 0;

    virtual ~IOStream();

    friend std::ostream &operator<<(std::ostream &os, const IOStream &obj);
};

std::ostream &operator<<(std::ostream &os, const IOStream &obj);

#endif
