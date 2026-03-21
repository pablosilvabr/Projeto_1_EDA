//
// Created by jesus on 03/19/2026.
//

#ifndef PROJETO_1_JOGADOR_H
#define PROJETO_1_JOGADOR_H
#include <string>
struct Jogador {
    int numero;
    std::string nome;
    int posicao;
    int idade;
    int qualidade;
    int probLes;
    int probSus;
};

Jogador* plantel(int& tam);
Jogador gerarUmJogador();
void gerarJogadores(Jogador* destino, int quantidade);
Jogador* transferencia();
#endif //PROJETO_1_JOGADOR_H