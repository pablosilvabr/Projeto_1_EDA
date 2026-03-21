// /*
//
// //
// // Created by abili on 19/03/2026.
// //
//
// #ifndef PROJETO_1_VETOR_H
// #define PROJETO_1_VETOR_H
// #include <string>
//
// template <typename T>
// struct Vetor {
//     T * array = new T[4];
//     int tam = 4;
//     int pos = 0;
// };
//
// /**
//  * Liberta a memoria heap ocupada pelo vetor
//  * @param vetor Vetor a ser destruido
//  */
// template <typename T>
// void vetorDestruir(Vetor<T> &vetor);
//
// /**
//  * Insere string no vetor
//  * @param vetor Vetor a ser modificado
//  * @param valor String que vai ser inserida
//  */
// template <typename T>
// void vetorInserirValor(Vetor<T> &vetor, const T &valor);
//
// /**
//  * Remove valor no indice do vetor e re-organiza o vetor
//  * @param vetor Vetor a ser modificado
//  * @param indice Indice do elemento a ser removido
//  */
// template <typename T>
// void vetorRemoverValor(Vetor<T> &vetor, const int &indice);
//
// /**
//  * Retorna o valor do indice no vetor
//  * @param vetor Vetor alvo
//  * @param indice Indice do vetor
//  * @return String contida no indice
//  */
// template <typename T>
// std::string vetorBuscarValor(const Vetor<T> &vetor, const int &indice);
//
// #endif //PROJETO_1_VETOR_H
//
