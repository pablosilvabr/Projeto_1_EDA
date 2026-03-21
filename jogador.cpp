//
// Created by jesus on 03/19/2026.
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

/*
Vetor<Jogador> pullJogadores(Vetor<Jogador> lista_jogadores, int& numero_jogadores) {
    //Vetor<string> lista = leituraNomes();//passar tamanho
    int num_por_posicao[4];

    num_por_posicao[0] = GR_MIN;
    num_por_posicao[1] = DEF_MIN;
    num_por_posicao[2] = MED_MIN;
    num_por_posicao[3] = AVA_MIN;

    for (int i=0; i<tamArqNomes(); i++) {
        //incompleto fui dormir, continuo dps :)

        //lista_jogadores[i].nome = nomeAleatorio(); //conflito de char* e char -DEBUG

        //Informações Jogador

        lista_jogadores[i].idade = 18 + (rand() % 17);

        //Atributos do jogador

        int pos = rand() % 4;
        //lista_jogadores[i].posicao = (rand()%4);
        lista_jogadores[i].qualidade = (rand() % MAX_QUALIDADE) + 1;
        lista_jogadores[i].probLes = (rand() % MAX_PROBLES) + 1; //pablo
        lista_jogadores[i].probSus = (rand() % MAX_PROBSUS) + 1; //pablo

        //lista_jogadores[i].posicao = (num_por_posicao[pos]>enum[pos]);

    }
    return lista_jogadores;
}
*/



