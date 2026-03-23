#include  <stdlib.h>
#include <time.h>
#include "Vetor.h"
#include "utility.h"
#include <iostream>
#include  <cstdlib>
#include <ctime>
#include <iomanip>
#include "utility.h"
#include "jogador.h"
#include "plantel.h"
#include "menu.h"

using namespace std;

int main() {
    srand(time(NULL));
    //mostrarMenu();
    Vetor<string> nomeJogadores = leituraNomes();
    int numJugadorPlantel = numeroJogadoresPlantel();
    cout << numJugadorPlantel << endl;
    Jogador** plantel = gerarPlantel(nomeJogadores, numJugadorPlantel);
    imprimirPlantel(plantel, numJugadorPlantel);
    return 0;
}


// int main () {
//     srand (time(NULL));
//     // cout<<true<<endl;
//     // VetorString lEq = leituraEquipas();
//     // for (int i=0;i<lEq.pos;i++)
//     //     cout<<vetorBuscarValor(lEq, i)<<endl;
//     // cout<<"contagem na lista: "<<lEq.pos<<endl;
//     // cout << "lista cheia: "<<lEq.tam<<endl;
//     // while (!vetorBuscarValor(lEq, 0).empty())
//     //     vetorRemoverValor(lEq, 0);
//     // cout << "lista vazia: "<<lEq.tam<<endl;
//     // vetorDestruir(lEq);
//
//     //exemplo de criação
//     //Vetor<Jogador> jogadores;
//
//
//
//     return 0;
// }