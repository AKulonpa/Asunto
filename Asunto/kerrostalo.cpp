#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
   eka.maaritaAsunnot();
   toka.maaritaAsunnot();
   kolmas.maaritaAsunnot();
}

double Kerrostalo::laskekulutus(double p)
{
    return (eka.laskekulutus(1) + toka.laskekulutus(p) + kolmas.laskekulutus(p))*p;
}
