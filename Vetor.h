#ifndef PROJETO_1_VETOR_H
#define PROJETO_1_VETOR_H

template <typename T>
struct Vetor {
    T * array = new T[4];
    int tam = 4;
    int pos = 0; // ISTO PODE SER USADO PARA SABER O TAMANHO DO ARRAY
};

/**
 * Liberta a memória heap ocupada pelo vetor e anula o ponteiro
 * @tparam T Tipo de dados do vetor
 * @param vetor Referência para o vetor a ser destruído
 */
template <typename T>
void vetorDestruir(Vetor<T> &vetor) {
    delete[] vetor.array;
    vetor.array = nullptr;
}

/**
 * Insere um elemento no fim do vetor, duplicando a capacidade se necessário
 * @tparam T Tipo de dados do vetor
 * @param vetor Referência para o vetor a ser modificado
 * @param valor Elemento a ser inserido no final
 */
template <typename T>
void vetorInserir(Vetor<T> &vetor, const T &valor) {
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

/**
 * Substitui o valor num índice específico (útil para trocas de jogadores)
 * @tparam T Tipo de dados do vetor
 * @param vetor Referência para o vetor alvo
 * @param indice Posição onde o valor será substituído
 * @param valor Novo elemento a colocar no índice
 */
template <typename T>
void vetorSubstituir(Vetor<T> &vetor, const int indice, const T &valor) {
    if (indice < 0 || indice >= vetor.pos)
        return;
    vetor.array[indice] = valor;
}

/**
 * Remove o valor num índice, reorganizando os restantes elementos (shift)
 * @tparam T Tipo de dados do vetor
 * @param vetor Referência para o vetor a ser modificado
 * @param indice Índice do elemento a ser removido
 */
template <typename T>
void vetorRemover(Vetor<T> &vetor, const int indice) {
    if (indice < 0 || indice >= vetor.pos)
        return;
    for (int i=indice;i<vetor.pos-1;i++)
        vetor.array[i] = vetor.array[i+1];
    vetor.array[--vetor.pos]=T();
}

/**
 * Procura e retorna o valor contido num índice específico
 * @tparam T Tipo de dados do vetor
 * @param vetor Referência constante para o vetor alvo
 * @param indice Índice da posição a procurar
 * @return O elemento do tipo T contido no índice ou um valor padrão se inválido
 */
template <typename T>
T vetorBuscar(const Vetor<T> &vetor, const int indice) {
    if (indice < 0 || indice >= vetor.pos)
        return T();
    return vetor.array[indice];
}

#endif //PROJETO_1_VETOR_H