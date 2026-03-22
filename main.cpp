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

    //depois jogar em um ficheiro separado com uma função para inicialização
    int tamanho = tamArq("nomes.txt") ;
    string* nomeJogadores = leituraArq("nomes.txt", tamanho);
    Jogador jogador1 = gerarUmJogador(nomeJogadores, tamanho);
    imprimirJogador(jogador1);
    int numJugadorPlantel = numeroJogadoresPlantel();
    cout << numJugadorPlantel << endl;
    Jogador* plantel = gerarPlantel(nomeJogadores, tamanho, numJugadorPlantel);
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