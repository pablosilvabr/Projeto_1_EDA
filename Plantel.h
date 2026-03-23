#ifndef PROJETO_1_PLANTEL_H
#define PROJETO_1_PLANTEL_H
#include "jogador.h"
#include "Vetor.h"

Jogador** gerarPlantel(Vetor<std::string> nomeJogadores, int numJogadoresPlantel);
void imprimirPlantel(Jogador** plantel, int numJogadoresPlantel);
int numeroJogadoresPlantel();
int index_melhor(Jogador** plantel, int tipo, int tamanho);
#endif //PROJETO_1_PLANTEL_H