#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include "plantel.h"
#include "jogador.h"
#include "numAleatorio.h"


using namespace std;

/**
 * Gerar um plantel de jogadores, com um número aleatório de jogadores entre 20 e 30.
 * Cada jogador deve ter um nome, idade, qualidade, número, posição, probabilidade de suspensão e lesão, e dias de treino.
 * O nome dos jogadores deve ser escolhido aleatoriamente a partir de um arquivo de texto contendo uma lista de nomes.
 * Imprimir o plantel gerado.

int numeroJogadoresPlantel() {
    return numAleatorio(20, 30);
}
*/
int numeroGR() {
    return numAleatorio(2, 3);
}
int numeroDEF() {
    return numAleatorio(7, 10);
}
int numeroMED() {
    return numAleatorio(7, 10);
}
int numeroAVA() {
    return numAleatorio(4, 7);
}

Jogador* criarGR(string* nomeJogadores, int tamanho, int numGR, int* numeroCamisaGR) {
    Jogador* gr = new Jogador[numGR];
    string posicao = "GR";

    for (int i = 0; i < numGR; i++) {
        bool numeroRepetido = true;
        int num = 0;

        while (numeroRepetido == true) {
            int numero = numAleatorio(0, 2);
            num = numeroCamisaGR[numero];

            numeroRepetido = compararNumJogador(gr, num, i);
        }


        Jogador jugador = gerarUmJogadorPlantel(nomeJogadores, tamanho, posicao, num);
        gr[i] = jugador;
    }

    return gr;
}

Jogador* criarDEF(string* nomeJogadores, int tamanho, int numDEF, int* numeroCamisaDEF) {
    Jogador* def = new Jogador[numDEF];
    string posicao = "DEF";

    for (int i = 0; i < numDEF; i++) {
        bool numeroRepetido = true;
        int num = 0;

        while (numeroRepetido == true) {
            int numero = numAleatorio(0, 9);
            num = numeroCamisaDEF[numero];

            numeroRepetido = compararNumJogador(def, num, i);
        }


        Jogador jugador = gerarUmJogadorPlantel(nomeJogadores, tamanho, posicao, num);
        def[i] = jugador;
    }

    return def;
}

Jogador* criarMED(string* nomeJogadores, int tamanho, int numMED, int* numeroCamisaMED) {
    Jogador* med = new Jogador[numMED];
    string posicao = "MED";
    for (int i = 0; i < numMED; i++) {
        bool numeroRepetido = true;
        int num = 0;
        while (numeroRepetido == true) {
            int numero = numAleatorio(0, 9);
            num = numeroCamisaMED[numero];

            numeroRepetido = compararNumJogador(med, num, i);
        }

        Jogador jugador = gerarUmJogadorPlantel(nomeJogadores, tamanho, posicao, num);
        med[i] = jugador;
    }
    return med;
}

Jogador* criarAVA(string* nomeJogadores, int tamanho, int numAVA, int* numeroCamisaAVA) {
    Jogador* ava = new Jogador[numAVA];
    string posicao = "AVA";
    for (int i = 0; i < numAVA; i++) {
        bool numeroRepetido = true;
        int num = 0;
        while (numeroRepetido == true) {
            int numero = numAleatorio(0, 6);
            num = numeroCamisaAVA[numero];
            numeroRepetido = compararNumJogador(ava, num, i);
        }

        Jogador jugador = gerarUmJogadorPlantel(nomeJogadores, tamanho, posicao, num);
        ava[i] = jugador;
    }
    return ava;
}



Jogador* gerarPlantel(Jogador* gr, Jogador* def, Jogador* med, Jogador* ava, int numGR, int numDEF, int numMED, int numAVA) {

    ordenarPorNumero(gr, numGR);
    ordenarPorNumero(def, numDEF);
    ordenarPorNumero(med, numMED);
    ordenarPorNumero(ava, numAVA);


    int totalJogadores = numGR + numDEF + numMED + numAVA;
    Jogador* plantel = new Jogador[totalJogadores];
    int index = 0;
    for (int i = 0; i < numGR; i++) {
        plantel[index++] = gr[i];
    }
    for (int i = 0; i < numDEF; i++) {
        plantel[index++] = def[i];
    }
    for (int i = 0; i < numMED; i++) {
        plantel[index++] = med[i];
    }
    for (int i = 0; i < numAVA; i++) {
        plantel[index++] = ava[i];
    }
    return plantel;
}
void imprimirPlantel(Jogador* plantel, int numJogadoresPlantel) {
    cout << "\n*********** Plantel Disponível: ***********\n";

    // Encabezado exacto
    cout << "Nome                      | Nº  | Posição | Idade | ProbLesão | ProbCastigo | Qualidade | Dias-Treino\n";
    cout << "----------------------------------------------------------------------------------------------------\n";

    if (numJogadoresPlantel > 0) {
        string posicionActual = plantel[0].posicao;

        for (int i = 0; i < numJogadoresPlantel; i++) {
            if (plantel[i].posicao != posicionActual) {
                cout << endl;
                posicionActual = plantel[i].posicao;
            }


            string strLesao = to_string(plantel[i].probLes) + "%";
            string strCastigo = to_string(plantel[i].probSus) + "%";


            cout << left
                << setw(26) << plantel[i].nome << "| "
                << setw(4) << plantel[i].numero << "| "
                << setw(8) << plantel[i].posicao << "| "
                << setw(6) << plantel[i].idade << "| "
                << setw(10) << strLesao << "| "
                << setw(12) << strCastigo << "| "
                << setw(10) << plantel[i].qualidade << "| "
                << plantel[i].diasTreino << endl;
        }
    }
    cout << "----------------------------------------------------------------------------------------------------\n";
}



/**
 * Gerar um plantel de jogadores, com um número aleatório de jogadores entre 20 e 30.
 * Cada jogador deve ter um nome, idade, qualidade, número, posição, probabilidade de suspensão e lesão, e dias de treino.
 * O nome dos jogadores deve ser escolhido aleatoriamente a partir de um arquivo de texto contendo uma lista de nomes.
 * Imprimir o plantel gerado.

Jogador* gerarPlantel(string* nomeJogadores, int tamanho,int numJogadoresPlantel) {
    Jogador* plantel = new Jogador[numJogadoresPlantel];
    for (int i = 0; i < numJogadoresPlantel; i++) {
        Jogador jogador = gerarUmJogador(nomeJogadores, tamanho);
        plantel[i] = jogador;
    }
    return plantel;
}

**/