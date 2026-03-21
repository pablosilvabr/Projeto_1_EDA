#include <iostream>
#include "utility.h"
#include "jogador.h"
#include "stdlib.h"
using namespace std;

Jogador gerarUmJogador() {
    Jogador novo;

    novo.nome = nomeAleatorio();
    novo.idade = 18 + (rand() % 17);
    novo.qualidade = 50 + (rand() % 46);//50 à 95 é possível melhorar em 5 qualidade dos jogadores
    novo.numero = 1 + (rand() % 99);//após estar criado o plantel, devemos verificar numeros repetidos
    novo.probSus = 5 + (rand()%6);
    novo.probLes = 5 + (rand()%6);
    novo.posicao = (rand() % 4);

    return novo;
}
//gera uma lista de jogadores, dependendo da necessidade
void gerarJogadores(Jogador* destino, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        destino[i] = gerarUmJogador();
    }
}

//Precisa criar regras de Jogadores Mínimos por posição
//precisa ordenar
Jogador* plantel(int& tam) {
    tam = 20;
    Jogador* novoPlantel = new Jogador[tam];
    gerarJogadores(novoPlantel, tam);
    return novoPlantel;
}

//precisa limpar depois no main
//precisa ordenar por posição do jogador
Jogador* transferencia() {
    int tam = 2;

    Jogador* novoTransferencia = new Jogador[tam];
    gerarJogadores(novoTransferencia, tam);
    return novoTransferencia;
}