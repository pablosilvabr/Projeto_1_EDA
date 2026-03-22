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
    int semanas_ate_retorno;
};

/**
 * Gera um jogador com atributos aleatorios definidos na config
 * @param nome Nome do jogador
 * @return Jogador gerado
 */
Jogador gerarJogador(const std::string &nome);

void imprimirJogador(const Jogador& jogador);

void inserirJogador(Jogador** array, int& tamTotal, Jogador* novo, int capacidadeMax );
//Jogador* plantel(int& tam);
//Jogador gerarUmJogador();
//void gerarJogadores(Jogador* destino, int quantidade);
//Jogador* transferencia();

#endif //PROJETO_1_JOGADOR_H