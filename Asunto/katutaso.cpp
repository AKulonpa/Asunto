#include "katutaso.h"

katutaso::katutaso()
{
    cout<<"Katutaso luotu"<<endl;

}

void katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1.maarita(1,200);
    as2.maarita(1,200);

}

double katutaso::laskekulutus(double p)
{
 return (as1.laskekulutus(p)+ as2.laskekulutus(p))*p;
}
