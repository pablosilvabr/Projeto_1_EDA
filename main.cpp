#include  <stdlib.h>
#include <time.h>
#include <iostream>

#include "VetorString.h"
#include "utility.h"

using namespace std;

int main () {
//    srand (time(NULL));
    cout<<true<<endl;
    VetorString lEq = leituraEquipas();
    for (int i=0;i<lEq.pos;i++)
        cout<<vetorBuscarValor(lEq, i)<<endl;
    cout<<"contagem na lista: "<<lEq.pos<<endl;
    cout << "lista cheia: "<<lEq.tam<<endl;
    while (!vetorBuscarValor(lEq, 0).empty())
        vetorRemoverValor(lEq, 0);
    cout << "lista vazia: "<<lEq.tam<<endl;
    vetorDestruir(lEq);

    return 0;
}