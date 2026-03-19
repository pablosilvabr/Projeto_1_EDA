//
// Created by jesus on 17/03/2026.
//
#include <fstream>
#include <string>
#include <iostream>

using namespace std;


string* leituraEquipas() {
    int contador = 0;
    int i = 0;
    string linha;

    ifstream arquivoEquipas1("equipas.txt");

    if (arquivoEquipas1.is_open()) {
        while (getline(arquivoEquipas1,linha)) {
            contador++;
        }
        arquivoEquipas1.close();
    }
    string* vetorOutrasEquipas = new string [contador];

    ifstream arquivoEquipas2("equipas.txt");

    if (arquivoEquipas2.is_open()) {
        while (getline(arquivoEquipas2,linha)){
            vetorOutrasEquipas[i] = linha;
            i++;
        }
        arquivoEquipas2.close();
    }
    return vetorOutrasEquipas;
}


string* leituraNomes() {
    int contador = 0;
    int i = 0;
    string linha;

    ifstream arquivoJogadores1("nomes.txt");

    if (arquivoJogadores1.is_open()) {
        while (getline(arquivoJogadores1,linha)) {
            contador++;
        }
        arquivoJogadores1.close();
    }
    string* vetorJogadores = new string [contador];

    ifstream arquivoJogadores2("nomes.txt");

    if (arquivoJogadores2.is_open()) {
        while (getline(arquivoJogadores2,linha)){
            vetorJogadores[i] = linha;
            i++;
        }
        arquivoJogadores2.close();
    }
    return vetorJogadores;
}