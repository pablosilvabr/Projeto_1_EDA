#ifndef PROJETO_1_VETOR_H
#define PROJETO_1_VETOR_H

template <typename T>
struct Vetor {
    T * array = new T[4];
    int tam = 4;
    int pos = 0; // ISTO PODE SER USADO PARA SABER O TAMANHO DO ARRAY
};

/**
 * Liberta a memoria heap ocupada pelo vetor
 * @param vetor Vetor a ser destruido
 */
template <typename T>
void vetorDestruir(Vetor<T> &vetor) {
    delete[] vetor.array;
    vetor.array = nullptr;
}

/**
 * Insere string no vetor
 * @param vetor Vetor a ser modificado
 * @param valor String que vai ser inserida
 */
template <typename T>
void vetorInserirValor(Vetor<T> &vetor, const T &valor) {
    if (vetor.pos==vetor.tam) {
        int nTam = vetor.tam*2;
        T * nArray = new T[nTam];
        for (int i=0;i<vetor.pos;i++)
            nArray[i] = vetor.array[i];
        delete[] vetor.array;
        vetor.array = nArray;
        vetor.tam = nTam;
    }
    vetor.array[vetor.pos++] = valor;
}

template <typename T>
void vetorSubstituirVetor

/**
 * Remove valor no indice do vetor e re-organiza o vetor
 * @param vetor Vetor a ser modificado
 * @param indice Indice do elemento a ser removido
 */
template <typename T>
void vetorRemoverValor(Vetor<T> &vetor, const int indice) {
    if (indice < 0 || indice >= vetor.pos)
        return;
    for (int i=indice;i<vetor.pos-1;i++)
        vetor.array[i] = vetor.array[i+1];
    vetor.array[--vetor.pos]=T();
}

/**
 * Retorna o valor do indice no vetor
 * @param vetor Vetor alvo
 * @param indice Indice do vetor
 * @return String contida no indice
 */
template <typename T>
T vetorBuscarValor(const Vetor<T> &vetor, const int indice) {
    if (indice < 0 || indice >= vetor.pos)
        return T();
    return vetor.array[indice];
}

#endif //PROJETO_1_VETOR_H