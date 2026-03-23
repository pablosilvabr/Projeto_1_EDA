#ifndef PROJETO_1_EQUIPA_H
#define PROJETO_1_EQUIPA_H

#include "config.h"
#include "jogador.h"
#include "Vetor.h"
#include <string>
struct Equipa {
    std::string nome;
    Jogador * plantel[MAXIMO_JOGADORES];
    int num_plantel;
    Jogador * titulares[MAX_TITULARES];
    Jogador * suplentes[MAX_SUPLENTES];
    Vetor<Jogador*> lesionados;
    Vetor<Jogador*> suspensos;
    Vetor<Jogador*> transferencias;
};
#endif //PROJETO_1_EQUIPA_H