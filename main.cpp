#include  <stdlib.h>
#include <time.h>
#include <iostream>

#include "VetorString.h"
#include "utility.h"


int main () {
//    srand (time(NULL));
    VetorString lEq = leituraEquipas();
    for (int i=0;i<lEq.pos;i++)
        cout<<vetorBuscarValor(lEq, i)<<endl;
    return 0;
}
