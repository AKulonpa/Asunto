#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{

    Kerrostalo * ptr = new Kerrostalo;
    cout<<"Kerrostalon kulutus, = "<<ptr->laskekulutus(1)<<endl;
    return 0;
}
