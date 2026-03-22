#ifndef PROJETO_1_UTK_H
#define PROJETO_1_UTK_H

#include "Vetor.h"
#include <string>


Vetor<std::string> leituraEquipas();
Vetor<std::string> leituraNomes();

/**
 * Gera um número aleatorio entre o minimo e o maximo
 * @param min Valor minimo
 * @param max Valor maximo
 * @return Valor gerado
 */
int numAleatorio(int min = 0, int max = 100);

/**
 * Retorna um elemento aleatorio de um vetor e apaga esse elemento do vetor
 * @param vetor Vetor de strings
 * @return Elemento aleatorio
 */
std::string escolher(Vetor<std::string> &vetor);

#endif //PROJETO_1_UTK_H
