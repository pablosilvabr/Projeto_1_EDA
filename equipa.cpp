//
// Created by pablo on 22/03/2026.
//
#include <iostream>
#include "config.h"
#include "utility.h"
#include "equipa.h"



// void gerarlesionados (Equipa* titulares) {
//     int n = numAleatorio(0,100);
//
//     for (int i = 0; i < MAX_TITULARES; i++) {
//         if ()//como fazer sem saber se o jogador está lesionado????

void finalJornada(Equipa* equipa) {
    bool out = false;
    for (int i=0;i<MAXIMO_JOGADORES-1;i++) {

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

Equipa gerarEquipa(Jogador* plantel) {

}

void convocar() {

}





