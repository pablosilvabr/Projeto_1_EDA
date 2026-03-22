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
        Jogador novo = gerarJogador(vetorBuscar(nomeJogadores,numAleatorio(0,114)));//precisa alterar para o tamanho do arquivo

        vetorInserir(mercadoTransferencia, novo);
    }
    return mercadoTransferencia.array;
}



