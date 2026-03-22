
#include <fstream>
#include <string>
#include <iostream>
#include "utility.h"
#include "numAleatorio.h"
using namespace std;

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
