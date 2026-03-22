#ifndef PROJETO_1_PLANTEL_H
#define PROJETO_1_PLANTEL_H
#include "jogador.h"
#include "Vetor.h"

Jogador* gerarPlantel(Vetor<std::string> nomeJogadores, int numJogadoresPlantel);
void imprimirPlantel(Jogador* plantel, int numJogadoresPlantel);
int numeroJogadoresPlantel();

#endif //PROJETO_1_PLANTEL_H