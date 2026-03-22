
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
    int diasTreino;
};
std::string nomeAleatorio(std::string* nomeJogadores, int tamanho);
Jogador gerarUmJogador(std::string* nomeJogadores, int tamanho);
void imprimirJogador(Jogador jogador);

void inserirJogador(Jogador** array, int& tamTotal, Jogador* novo, int capacidadeMax );
//Jogador* plantel(int& tam);
//Jogador gerarUmJogador();
//void gerarJogadores(Jogador* destino, int quantidade);
//Jogador* transferencia();
#endif //PROJETO_1_JOGADOR_H