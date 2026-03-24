//
// Created by pablo on 22/03/2026.
//
#include <iostream>
#include <utility>
#include "config.h"
#include "utility.h"
#include "equipa.h"
#include "plantel.h"


// void gerarlesionados (Equipa* titulares) {
//     int n = numAleatorio(0,100);
//
//     for (int i = 0; i < MAX_TITULARES; i++) {
//         if ()//como fazer sem saber se o jogador está lesionado????

void finalJornada(Equipa* equipa) {
    bool out = false;
    for (int i=0;i<MAXIMO_JOGADORES;i++) {

        if (equipa->titulares[i]->probLes >= numAleatorio()) {
            //mover para array lesionados
            out = true;
        }
        if (equipa->titulares[i]->probSus >= numAleatorio()) {
            //mover para array suspensão
            out = true;
        }
    }
    if (out) {
        //refazer a convocação
    }

}

Equipa gerarEquipa(Jogador** plantel, int tamanho, std::string nome) {
    Equipa equipa{};
    for (int i = 0; i < tamanho && i < MAXIMO_JOGADORES; i++) {
        equipa.plantel[i] = plantel[i];
    }

    equipa.num_plantel = tamanho;
    equipa.nome = std::move(nome);
    return equipa;
}

void convocar(Equipa& equipa, int tamanho) {
    int pos=0;
    int tatica[4]{1, 4, 4, 2};
    int suplentes[4]{1, 2, 2, 1};

    //o codigo aqui de baixo está repetido, irei fazer uma função depois. -J
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < tatica[i]; j++) {
            int a = index_melhor(equipa.plantel,i+1,tamanho);

            if (a != -1) {
                equipa.titulares[pos++] = equipa.plantel[a];
                for (int r = a; r < tamanho - 1; r++) {
                    equipa.plantel[r] = equipa.plantel[r + 1];
                }
                tamanho--;
            }else {
                std::cout << "erro na convocação";
            }
        }
        for (int j = 0; j < suplentes[i]; j++) {
            int a = index_melhor(equipa.plantel,i+1,tamanho);

            if (a != -1) {
                equipa.suplentes[pos++] = equipa.plantel[a];
                for (int r = a; r < tamanho - 1; r++) {
                    equipa.plantel[r] = equipa.plantel[r + 1];
                }
                tamanho--;
            }else {
                std::cout << "erro na convocação";
            }

        }
    }
}
void desconvocar(Equipa& equipa) {
    for (int i = 0; i < MAX_TITULARES; i++) {

    }
}





