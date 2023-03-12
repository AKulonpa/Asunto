#include "asunto.h"

asunto::asunto()
{
    cout<<"Asunto luotu"<<endl;
}

void asunto::maarita(int a, int n)
{
    asukasmaara = a;
    neliot = n;
    a= 2;
    n= 100;
    cout<<"Asunto maaritetty asukkaita= "<<a<<" nelioita= "<<n<<endl;
}

double asunto::laskekulutus(double p)
{
    return asukasmaara*neliot*p;
}
