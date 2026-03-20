//
// Created by abili on 19/03/2026.
//

#ifndef PROJETO_1_VETOR_H
#define PROJETO_1_VETOR_H
#include <string>

struct VetorString {
    std::string * array = new std::string[4];
    int tam = 4;
    int pos = 0;
};

/**
 * Liberta a memoria heap ocupada pelo vetor
 * @param vetor Vetor a ser destruido
 */
void vetorDestruir(VetorString &vetor);

/**
 * Insere string no vetor
 * @param vetor Vetor a ser modificado
 * @param valor String que vai ser inserida
 */
void vetorInserirValor(VetorString &vetor, const std::string &valor);

/**
 * Remove valor no indice do vetor e re-organiza o vetor
 * @param vetor Vetor a ser modificado
 * @param indice Indice do elemento a ser removido
 */
void vetorRemoverValor(VetorString &vetor, const int &indice);

/**
 * Retorna o valor do indice no vetor
 * @param vetor Vetor alvo
 * @param indice Indice do vetor
 * @return String contida no indice
 */
std::string vetorBuscarValor(const VetorString &vetor, const int &indice);

#endif //PROJETO_1_VETOR_H