#include  <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include "utility.h"
#include "jogador.h"
#include "menu.h"

using namespace std;

int main() {
    mostrarMenu();

    return 0;
}






/*
int main () {
    srand (time(NULL));



    return 0;
}
*/
/*
int main() {
    srand(time(NULL));

    int tamanhoReal = 0;
    cout << "A pedir plantel..." << endl;

    Jogador* meuPlantel = plantel(tamanhoReal);

    cout << "Tamanho recebido no main: " << tamanhoReal << endl;
    cout << "------------------------------------------" << endl;

    if (tamanhoReal == 0) {
        cout << "ERRO: O tamanho continua a zero. Verifique o '&' na funcao Plantel!" << endl;
    }

    for (int i = 0; i < tamanhoReal; i++) {
        cout << i + 1 << ". " << meuPlantel[i].nome << " [" << meuPlantel[i].posicao << "]" << endl;
    }

    delete[] meuPlantel;
    return 0;
}
*/
