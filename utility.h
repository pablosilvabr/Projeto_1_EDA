//
// Created by jesus on 17/03/2026.
//

#ifndef PROJETO_1_UTK_H
#define PROJETO_1_UTK_H

#include "Vetor.h"
#include <string>
#include <fstream>
#include <iostream>
#include "utility.h"

using namespace std;


/**
 * @brief Lê o ficheiro nomes.txt e armazena o nome dos atletas em um array dinâmico.
 * @return Um ponteiro string para o array vetorJogadores
 */
//Vetor<std::string> leituraNomesA();

// int tamArqEquipas();
// int tamArqNomes();
// std::string* leituraNomes();
// std::string nomeAleatorio();

int numAleatorio(int x, int y);
int tamArq(std::string nomeFicheiro);
std::string* leituraArq(std::string path, int& tamanho);
void troca(std::string& a, std::string& b);
std::string escolher(std::string* array, int& disponiveis);

#endif //PROJETO_1_UTK_H
