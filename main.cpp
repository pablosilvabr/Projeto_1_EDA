
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

#include <windows.h>
#include "menu.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));
    //mostrarMenu();


    int tamanho = tamArq("nomes.txt") ;
    string* nomeJogadores = leituraArq("nomes.txt", tamanho);
    int numeroCamisaGR[3] = { 1, 13, 30 };
    int numeroCamisaDEF[10] = { 2, 3, 4, 5, 12, 15, 22, 24, 25, 26 };
    int numeroCamisaMED[10] = { 6, 8, 10, 14, 16, 17, 20, 21, 23, 28 };
    int numeroCamisaAVA[7] = { 7, 9, 11, 18, 19, 27, 29 };


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
    int numGR = numeroGR();
    int numDEF = numeroDEF();
    int numMED = numeroMED();
    int numAVA = numeroAVA();
    int numJugadorPlantel = numGR + numDEF + numMED + numAVA;
    cout << numJugadorPlantel << endl;
    cout << "Número de GR: " << numGR << endl;
    cout << "Número de DEF: " << numDEF << endl;
    cout << "Número de MED: " << numMED << endl;
    cout << "Número de AVA: " << numAVA << endl;

    Jogador* gr = criarGR(nomeJogadores, tamanho, numGR, numeroCamisaGR);
    Jogador* def = criarDEF(nomeJogadores, tamanho, numDEF, numeroCamisaDEF);
    Jogador* med = criarMED(nomeJogadores, tamanho, numMED, numeroCamisaMED);
    Jogador* ava = criarAVA(nomeJogadores, tamanho, numAVA, numeroCamisaAVA);
    Jogador* plantel = gerarPlantel(gr, def, med, ava, numGR, numDEF, numMED, numAVA);

    imprimirPlantel(plantel, numJugadorPlantel);

    /**
    //Fase 1 (17 jogos)
    for (int i=0; i<CAMPEONATO_N_EQUIPAS; i++ ) {
        string adversarioJornada= escolher(adversarios, numJogosPorFase);
        adversariosFase2[i]= adversarioJornada;

        cout << "Jogo " << i + 1 << " contra: " << adversarioJornada << endl;
    }
    //Fase 2 (17 jogos, com as mesmas equipas da fase 1)
   for (int i=0; i<numJogosPorFase; i++ ) {
        string adversarioJornada= escolher(adversariosFase2, numJogosPorFase);

        cout << "Jogo " << i + 1 << " contra: " << adversarioJornada << endl;
    }
**/
    delete[] gr;
    delete[] def;
    delete[] med;
    delete[] ava;
    delete[] plantel;
    delete[] nomeJogadores;

    //delete [] adversarios;
    //delete [] adversariosFase2;
    //delete [] nomeJogadores;
    //delete[] plantel;

    return 0;
}