
#include <iostream>
#include  <cstdlib>
#include <ctime>
#include <iomanip>
#include "utility.h"
#include "numAleatorio.h"
#include "jogador.h"
#include "plantel.h"
#include "adversarios.h"
#include "constante.h"
#include "menu.h"

using namespace std;

int main() {
    srand(time(NULL));
    //mostrarMenu();


    //int tamanho = tamArq("nomes.txt") ;
    //string* nomeJogadores = leituraArq("nomes.txt", tamanho);

    int numJogosPorFase= 17;
    int numEquipas=tamArq("equipas.txt") ;
    string*adversarios= leituraArq("equipas.txt", numEquipas);
    string* adversariosFase2= new string[numEquipas];


/**    int numJugadorPlantel = numeroJogadoresPlantel();
    Jogador jogador1 = gerarUmJogador(nomeJogadores, tamanho);
    imprimirJogador(jogador1);
    cout << numJugadorPlantel << endl;
    Jogador* plantel = gerarPlantel(nomeJogadores, tamanho, numJugadorPlantel);
    imprimirPlantel(plantel, numJugadorPlantel);

**/


    //Fase 1 (17 jogos)
    for (int i=0; i<CAMPEONATO_N_EQUIPAS; i++ ) {
        string adversarioJornada= escolher(adversarios, numJogosPorFase);
        adversariosFase2[i]= adversarioJornada;

        cout << "Jogo " << i + 1 << " contra: " << adversarioJornada << endl;
    }
    //Fase 2 (17 jogos, com as mesmas equipas da fase 1)
/**    for (int i=0; i<numJogosPorFase; i++ ) {
        string adversarioJornada= escolher(adversariosFase2, numJogosPorFase);

        cout << "Jogo " << i + 1 << " contra: " << adversarioJornada << endl;
    }
**/

    delete [] adversarios;
    delete [] adversariosFase2;
    //delete [] nomeJogadores;
    //delete[] plantel;

    return 0;
}