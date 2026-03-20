//
// Created by jesus on 17/03/2026.
//
#include "utility.h"
#include <fstream>
#include <string>
using namespace std;

int tamArquivoEquipas() {
    int contador = 0;
    string linha;

    ifstream arquivoEquipas1(FILE_EQUIPAS);

    if (arquivoEquipas1.is_open()) {
        while (getline(arquivoEquipas1,linha)) {
            contador++;
        }
        arquivoEquipas1.close();
    }
    return contador;
}


string* leituraEquipas() {
    int contador = tamArquivoEquipas();

    string* vOutrasEquipas = new string [contador];

    ifstream arquivoEquipas2(FILE_EQUIPAS);

    if (arquivoEquipas2.is_open()) {
        for (int i=0; i<contador; i++){
            getline(arquivoEquipas2,vOutrasEquipas[i]);
        }
        arquivoEquipas2.close();
    }
    return vOutrasEquipas;
}

int tamArquivoNomes() {
    int contador = 0;
    string linha;

    ifstream arquivoJogadores1(FILE_NOMES);

    if (arquivoJogadores1.is_open()) {
        while (getline(arquivoJogadores1,linha)) {
            contador++;
        }
        arquivoJogadores1.close();
    }
    return contador;
}

string* leituraNomes() {
    int contador = tamArquivoNomes();

    string* vNomeJogadores = new string [contador];

    ifstream arquivoJogadores2(FILE_NOMES);

    if (arquivoJogadores2.is_open()) {
        for (int i = 0; i<contador; i++){
            getline(arquivoJogadores2,vNomeJogadores[i]);
        }
        arquivoJogadores2.close();
    }
    return vNomeJogadores;
}