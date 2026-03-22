//
// Created by abili on 19/03/2026.
//
#include "Vetor.h"

using namespace std;

template <typename T>
void vetorDestruir(Vetor<T> &vetor) {
    delete[] vetor.array;
    vetor.array = nullptr;
}
template <typename T>
void redimensionarVetor(Vetor<T> &vetor, const int &tam) {
    int nTam = vetor.tam*tam;
    T * nArray = new T[nTam];
    for (int i=0;i<vetor.pos;i++)
        nArray[i] = vetor.array[i];
    delete[] vetor.array;
    vetor.array = nArray;
    vetor.tam = nTam;
}
template <typename T>
void vetorInserirValor(Vetor<T> &vetor, const T &valor,const int &indice) {
    if (vetor.pos==vetor.tam)
        redimensionarVetor(vetor, 2);
    vetor.array[vetor.pos++] = valor;
}
template <typename T>
void vetorRemoverValor(Vetor<T> &vetor, const int &indice) {
    if (indice < 0 || indice >= vetor.pos)
        return;
    for (int i=indice;i<vetor.pos-1;i++)
        vetor.array[i] = vetor.array[i+1];
    vetor.array[--vetor.pos]=T();
}
template <typename T>
string vetorBuscarValor(const Vetor<T> &vetor, const int &indice) {
    if (indice < 0 || indice >= vetor.pos)
        return T();
    return vetor.array[indice];
}
