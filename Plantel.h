//
// Created by pablo on 22/03/2026.
//

#ifndef PROJETO_1_PLANTEL_H
#define PROJETO_1_PLANTEL_H
#include <iostream>
#include <string>
#include "jogador.h"

Jogador* gerarPlantel(std::string* nomeJogadores, int tamanho, int numJogadoresPlantel);
void imprimirPlantel(Jogador* plantel, int numJogadoresPlantel);
int numeroJogadoresPlantel();

#endif //PROJETO_1_PLANTEL_H