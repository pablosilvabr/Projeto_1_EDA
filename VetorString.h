//
// Created by abili on 19/03/2026.
//

#ifndef PROJETO_1_VETOR_H
#define PROJETO_1_VETOR_H
#include <string>

using namespace std;

struct VetorString {
    string * array = new string[4];
    int tam = 4;
    int pos = 0;
};

void vetorDestruir(VetorString &vetor);
void vetorInserirValor(VetorString &vetor, const string &valor);
void vetorRemoverValor(VetorString &vetor, const int &indice);
string vetorBuscarValor(const VetorString &vetor, const int &indice);

#endif //PROJETO_1_VETOR_H