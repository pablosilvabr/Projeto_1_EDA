//
// Created by pablo on 22/03/2026.
//
#include <fstream>
#include <string>
#include <iostream>
#include "plantel.h"
#include "jogador.h"
#include "utility.h"
#include "config.h"


using namespace std;

/**
 * Gerar um plantel de jogadores, com um número aleatório de jogadores entre 20 e 30.
 * Cada jogador deve ter um nome, idade, qualidade, número, posição, probabilidade de suspensão e lesão, e dias de treino.
 * O nome dos jogadores deve ser escolhido aleatoriamente a partir de um arquivo de texto contendo uma lista de nomes.
 * Imprimir o plantel gerado.
 */
int numeroJogadoresPlantel() {
    return numAleatorio(MINIMO_JOGADORES, MAXIMO_JOGADORES);
}

/**
 * Gerar um plantel de jogadores, com um número aleatório de jogadores entre 20 e 30.
 * Cada jogador deve ter um nome, idade, qualidade, número, posição, probabilidade de suspensão e lesão, e dias de treino.
 * O nome dos jogadores deve ser escolhido aleatoriamente a partir de um arquivo de texto contendo uma lista de nomes.
 * Imprimir o plantel gerado.
 */
Jogador** gerarPlantel(Vetor<string> nomeJogadores, int numJogadoresPlantel) {
    Jogador** plantel = new Jogador*[numJogadoresPlantel];

    for (int i = 0; i < numJogadoresPlantel; i++) {
        plantel[i] = new Jogador;
        *plantel[i] = gerarJogador(vetorBuscar(nomeJogadores, i));
    }

    return plantel;
}

/**
 * Imprimir o plantel gerado.
 */
void imprimirPlantel(Jogador** plantel, int numJogadoresPlantel) {
    for (int i = 0; i < numJogadoresPlantel; i++) {
        cout << "Jogador " << i + 1 << ":" << endl;
        imprimirJogador(plantel[i]);
        cout << endl;
    }
}

int index_melhor(Jogador** plantel, int tipo, int tamanho) {
    int best = -1;

    for (int i = 0; i < tamanho; i++) {
        if (plantel[i]->posicao == tipo) {
            if (best == -1 || plantel[i]->qualidade > plantel[best]->qualidade)
                best = i;
        }
    }
    return best;
}