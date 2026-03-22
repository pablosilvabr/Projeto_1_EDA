//
// Created by andre on 21/03/2026.
//

#ifndef PROJETO_1_PLANTEL_H
#define PROJETO_1_PLANTEL_H
#include <iostream>
#include <string>
#include "jogador.h"

Jogador* gerarPlantel(std::string* nomeJogadores, int tamanho, int numJogadoresPlantel);
void imprimirPlantel(Jogador* plantel, int numJogadoresPlantel);
int numeroJogadoresPlantel();
int numeroGR();
int numeroDEF();
int numeroMED();
int numeroAVA();
Jogador* criarGR(std::string* nomeJogadores, int tamanho, int numGR, int* numeroCamisaGR);
Jogador* criarDEF(std::string* nomeJogadores, int tamanho, int numDEF, int* numeroCamisaDEF);
Jogador* criarMED(std::string* nomeJogadores, int tamanho, int numMED, int* numeroCamisaMED);
Jogador* criarAVA(std::string* nomeJogadores, int tamanho, int numAVA, int* numeroCamisaAVA);
Jogador* gerarPlantel(Jogador* gr, Jogador* def, Jogador* med, Jogador* ava, int numGR, int numDEF, int numMED, int numAVA);


#endif //PROJETO_1_PLANTEL_H