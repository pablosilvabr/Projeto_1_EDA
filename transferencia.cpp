//
// Created by pablo on 22/03/2026.
//
#include <string>
#include "jogador.h"
#include "utility.h"
#include "config.h"
#include "Vetor.h"
#include "transferencia.h"
#include <iostream>


using namespace std;

Jogador* mercadoTransferencias (Vetor<Jogador> &mercadoTransferencia, Vetor<string> nomeJogadores) {

    for (int i = 0; i < MAXIMO_ADD_TRANSFERENCIA; i++) {
        Jogador novo = gerarJogador(vetorBuscar(nomeJogadores,numAleatorio(0,nomeJogadores.pos-1)));

        vetorInserir(mercadoTransferencia, novo);
    }
    return mercadoTransferencia.array;
}

void imprimirMercado(Vetor<Jogador> &mercado) {

    if (mercado.pos == 0) {
        cout << "O mercado está vazio no momento." << endl;
    }
    else {
        for (int i = 0; i < mercado.pos; i++) {
            cout << " Nome: " << mercado.array[i].nome << " Posicao: " << mercado.array[i].posicao << " Idade: " << mercado.array[i].idade
            << " Qualidade: " << mercado.array[i].qualidade << " Prob Lesao: " << mercado.array[i].probLes << "% "
            << " Prob Suspensao: " << mercado.array[i].probSus << "% " << endl;
        }
    }
}