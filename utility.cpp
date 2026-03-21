//
// Created by jesus on 17/03/2026.
//
#include "utility.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;


int tamArqEquipas() {
    int contador = 0;
    string linha;

    ifstream arquivoEquipas("config/equipas");

    if (arquivoEquipas.is_open()) {
        while (getline(arquivoEquipas,linha)) {
            contador++;
        }
        arquivoEquipas.close();
    }
    return contador;
}

int tamArqNomes() {
    int contador = 0;
    string linha;

    ifstream arquivoJogadores("config/nomes");

    if (arquivoJogadores.is_open()) {
        while (getline(arquivoJogadores,linha)) {
            contador++;
        }
        arquivoJogadores.close();
    }
    return contador;
}

string* leituraNomes() {
    int contador = tamArqNomes();

    string* vNomeJogadores = new string [contador];

    ifstream arquivoJogadores("config/nomes");

    if (arquivoJogadores.is_open()) {
        for (int i = 0; i<contador; i++){
            getline(arquivoJogadores,vNomeJogadores[i]);
        }
        arquivoJogadores.close();
    }
    return vNomeJogadores;
}

string* leituraEquipas() {
    int contador = tamArqEquipas();

    string* vOutrasEquipas = new string [contador];

    ifstream arquivoEquipas2("config/equipas");

    if (arquivoEquipas2.is_open()) {
        for (int i=0; i<contador; i++){
            getline(arquivoEquipas2,vOutrasEquipas[i]);
        }
        arquivoEquipas2.close();
    }
    return vOutrasEquipas;
}


string nomeAleatorio() {
    int indice = tamArqNomes();
    //segurança se não estiver lendo o arquivo
    if (indice <= 0) {
        return "Jogador_Sem_Nome";
    }
    string* todosNomes = leituraNomes();
    string nomeSorteado = todosNomes[rand() % indice];
    delete[] todosNomes;
    return nomeSorteado;
}
