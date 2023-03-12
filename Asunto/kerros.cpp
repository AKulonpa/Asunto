#include "kerros.h"
kerros::kerros()
{
    cout<<"Kerros luotu"<<endl;
}

void kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    cout<<"Maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double kerros::laskekulutus(double p)
{
    return (as1.laskekulutus(p) + as2.laskekulutus(p) + as3.laskekulutus(p) + as4.laskekulutus(p))*p;
}

