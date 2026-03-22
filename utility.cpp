//
// Created by jesus on 17/03/2026.
//
#include "utility.h"
#include <fstream>
#include <string>
#include "Vetor.h"
#include <iostream>
#include <cstdlib>
#include <iostream>

using namespace std;

// Vetor<string> ler(const char* ficheiro) {
//     Vetor<string> vet;
//     string linha;
//     ifstream is(ficheiro);
//     if (is.is_open()) {
//         while (getline(is,linha))
//             vetorInserirValor(vet, linha);
//         is.close();
//     }
//     return vet;
// }
//
// Vetor<string> leituraEquipasA() {
//     return ler(FILE_EQUIPAS);
// }
//
// Vetor<string> leituraNomesA() {
//     return ler(FILE_NOMES);
// }
//
// int tamArqEquipas() {
//     int contador = 0;
//     string linha;
//
//     ifstream arquivoEquipas("config/equipas");
//
//     if (arquivoEquipas.is_open()) {
//         while (getline(arquivoEquipas,linha)) {
//             contador++;
//         }
//         arquivoEquipas.close();
//     }
//     return contador;
// }
//
// int tamArqNomes() {
//     int contador = 0;
//     string linha;
//
//     ifstream arquivoJogadores("config/nomes");
//
//     if (arquivoJogadores.is_open()) {
//         while (getline(arquivoJogadores,linha)) {
//             contador++;
//         }
//         arquivoJogadores.close();
//     }
//     return contador;
// }
//
// string* leituraNomes() {
//     int contador = tamArqNomes();
//
//     string* vNomeJogadores = new string [contador];
//
//     ifstream arquivoJogadores("config/nomes");
//
//     if (arquivoJogadores.is_open()) {
//         for (int i = 0; i<contador; i++){
//             getline(arquivoJogadores,vNomeJogadores[i]);
//         }
//         arquivoJogadores.close();
//     }
//     return vNomeJogadores;
// }
//
// string* leituraEquipas() {
//     int contador = tamArqEquipas();
//
//     string* vOutrasEquipas = new string [contador];
//
//     ifstream arquivoEquipas2("config/equipas");
//
//     if (arquivoEquipas2.is_open()) {
//         for (int i=0; i<contador; i++){
//             getline(arquivoEquipas2,vOutrasEquipas[i]);
//         }
//         arquivoEquipas2.close();
//     }
//     return vOutrasEquipas;
// }


// string nomeAleatorio() {
//     int indice = tamArqNomes();
//     //segurança se não estiver lendo o arquivo
//     if (indice <= 0) {
//         return "Jogador_Sem_Nome";
//     }
//     string* todosNomes = leituraNomes();
//     string nomeSorteado = todosNomes[rand() % indice];
//     delete[] todosNomes;
//     return nomeSorteado;
// }

/**

 * Gera um numero aleatorio entre o minimo e o maximo
 * @param min
 * @param max
 * @return
 */
int numAleatorio(int min, int max) {
    int J=rand() % (max-min+1)+min;
    return J;
}

/**
 *
 * Conta o número de linhas de um ficheiro, para depois criar um array do tamanho necessário
 * @param path
 * @return
 */
int tamArq(string path) {
    int contador = 0;
    string linha;

    ifstream arquivo(path);

    if (!arquivo.is_open()) {
        cout << "Nao e possivel abrir o ficheiro "<< path<< endl;
        return -1; //podemos colocar exit, mas isso fecharia o programa
    }
    while (getline(arquivo,linha)) {
        contador++;
    }
    arquivo.close();
    return contador;
}

/**
 * Lê um ficheiro e coloca cada linha num array de strings, devolvendo o array criado
 * @param path
 * @param tamanho
 * @return
 */
string* leituraArq(string path, int& tamanho) {
    tamanho=tamArq(path);
    if (tamanho <= 0) {
        return nullptr;
    }
    string* vArquivos = new string[tamanho];
    ifstream arquivo(path);
    if (arquivo.is_open()) {
        int i=0; //o while neste caso é melhor que o for
        while (getline(arquivo,vArquivos[i]) && i < tamanho) {
            i++;
        }
        arquivo.close();
    } else {
        delete[] vArquivos;
        return nullptr; //é preciso que devolva algo se não dá erro
    }
    return vArquivos;
}

/**
 * Troca o conteúdo de duas strings
 * @param a
 * @param b
 */
void troca(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

/**
 * Escolhe um elemento aleatório de um array de strings, devolve o elemento escolhido e remove-o do array (colocando o último elemento no lugar do escolhido)
 * @param array
 * @param disponiveis
 * @return
 */
string escolher(string* array, int& disponiveis) {
    if (disponiveis <= 0) {
        return "SEM_NOMES_DISPONIVEIS"; //
    }
    int indice = numAleatorio(0, disponiveis - 1);
    string escolhido = array[indice];
    troca(array[indice], array[disponiveis - 1]);
    disponiveis--;
    return escolhido;
}
