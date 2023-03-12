#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"
#include <iostream>
using namespace std;


class katutaso : public kerros
{
public:
    katutaso();
    virtual void maaritaAsunnot() override;
    double laskekulutus(double);

    asunto as1;
    asunto as2;
};

#endif // KATUTASO_H
