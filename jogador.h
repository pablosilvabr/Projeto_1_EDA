
#ifndef PROJETO_1_JOGADOR_H
#define PROJETO_1_JOGADOR_H
#include <string>
struct Jogador {
    int numero;
    std::string nome;
    std::string posicao;
    int idade;
    int qualidade;
    int probLes;
    int probSus;
    int diasTreino;
};
std::string nomeAleatorio(std::string* nomeJogadores, int tamanho);
Jogador gerarUmJogadorPlantel(std::string* nomeJogadores, int tamanho, std:: string posicao, int numeroCamisa);
void imprimirJogador(Jogador jogador);
bool compararNumJogador(Jogador* array,int numComparar, int tamanho);
void ordenarPorNumero(Jogador* array, int tamanho);

void inserirJogador(Jogador** array, int& tamTotal, Jogador* novo, int capacidadeMax );
//Jogador* plantel(int& tam);
//Jogador gerarUmJogador();
//void gerarJogadores(Jogador* destino, int quantidade);
//Jogador* transferencia();
#endif //PROJETO_1_JOGADOR_H