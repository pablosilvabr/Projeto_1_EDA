//
// Created by jesus on 03/19/2026.
#include <iostream>
#include "utility.h"
#include "jogador.h"
#include "stdlib.h"
using namespace std;
// struct Jogador {
//     int numero;
//     std::string* nome;
//     int posicao;
//     int idade;
//     int qualidade;
//     int probLes;
//     int probSus;
// };
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


Jogador gerarUmJogador() {
    Jogador novo;

    novo.nome = nomeAleatorio();
    novo.idade = 18 + (rand() % 17);
    novo.qualidade = 50 + (rand() % 51);
    novo.numero = 1 + (rand() % 99);//após estar criado o plantel, devemos verificar numeros repetidos
    novo.probSus = 5 + (rand()%6);
    novo.probLes = 5 + (rand()%6);
    novo.posicao = (rand() % 5);

    return novo;
}

void gerarPlantel(Jogador* plantel, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        plantel[i] = gerarUmJogador();
    }
}

