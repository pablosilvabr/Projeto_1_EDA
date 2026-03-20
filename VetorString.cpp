//
// Created by abili on 19/03/2026.
//

#include "VetorString.h"

void vetorDestruir(VetorString &vetor) {
    delete[] vetor.array;
    vetor.array = 0;
}

void vetorInserirValor(VetorString &vetor, const string &valor) {
    if (vetor.pos==vetor.tam) {
        int nTam = vetor.tam*2;
        string * nArray = new string[nTam];
        for (int i=0;i<vetor.pos;i++)
            nArray[i] = vetor.array[i];
        delete[] vetor.array;
        vetor.array = nArray;
        vetor.tam = nTam;
    }
    vetor.array[vetor.pos++] = valor;
}

void vetorRemoverValor(VetorString &vetor, const int &indice) {
    if (indice < 0 || indice >= vetor.pos)
        return;
    for (int i=indice;i<vetor.pos-1;i++)
        vetor.array[i] = vetor.array[i+1];
    vetor.array[--vetor.pos]="";
}

string vetorBuscarValor(const VetorString &vetor, const int &indice) {
    if (indice < 0 || indice >= vetor.pos)
        return "";
    return vetor.array[indice];
}
