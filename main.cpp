
#include <iostream>
#include  <cstdlib>
#include <ctime>
#include <iomanip>
#include "utility.h"
#include "numAleatorio.h"
#include "jogador.h"
#include "plantel.h"
#include "menu.h"

using namespace std;

int main() {
    srand(time(NULL));
    //mostrarMenu();


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