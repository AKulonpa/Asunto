#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"
#include <iostream>
using namespace std;


class Kerrostalo
{
public:
    Kerrostalo();
    double laskekulutus(double);

private:

    katutaso eka;
    kerros toka;
    kerros kolmas;
};

#endif // KERROSTALO_H
