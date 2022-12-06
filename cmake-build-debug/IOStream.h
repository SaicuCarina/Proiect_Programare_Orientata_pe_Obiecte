#ifndef UNTITLED3_IOSTREAM_H
#define UNTITLED3_IOSTREAM_H

#include <string>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class IOStream {
protected:
    virtual void Print(std::ostream& os) const=0;

    virtual ~IOStream();

    friend std::ostream& operator<<(std::ostream& os, const IOStream& obj);
};

IOStream::~IOStream()=default;

std::ostream& operator<<(std::ostream& os, const IOStream& obj)
{
    obj.Print(os);
    return os;
}


#endif //UNTITLED3_IOSTREAM_H
