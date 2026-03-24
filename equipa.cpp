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



void finalJornada(Equipa* equipa) {
    bool out = false;
    for (int i=0;i<MAXIMO_JOGADORES;i++) {
        Jogador* jogador = equipa->titulares[i];
        if (jogador->probLes >= numAleatorio()) {
            jogador->semanas_ate_retorno = numAleatorio(1, LIMITE_TEMPO_LESIONADO);
            vetorInserir(equipa->lesionados, jogador); // CODIGO QUE DEVE SER ALTERADO MAS PROVAVELMENTE NUNCA SERA ALTERADO - 23/03/2026
            for (int j=0;j<MAX_TITULARES;j++)
                if (jogador==equipa->plantel[j]) {
                    equipa->titulares[i]=nullptr;
                    break;
                }
            out = true;
        }
        if (jogador->probSus >= numAleatorio()) {
            vetorInserir(equipa->suspensos, jogador);
            jogador->semanas_ate_retorno = numAleatorio(1, LIMITE_TEMPO_SUSPENSO);
            for (int j=0;j<MAX_TITULARES;j++)
                if (jogador==equipa->plantel[j]) {
                    vetorBuscar(equipa->suspensos, equipa->suspensos.pos)->semanas_ate_retorno = numAleatorio(1, LIMITE_TEMPO_LESIONADO);
                    jogador=nullptr;
                    break;
                }
            out = true;
        }
    }
    if (out) {
        convocar(*equipa, MAXIMO_JOGADORES); // não sei se ta certo? mas veremos se der olha
    }
}

void recuperarJogadores(Equipa* equipa, const int tamanho) {
    Vetor<Jogador*> lesionados = equipa->lesionados;
    Vetor<Jogador*> suspensos = equipa->suspensos;
    for (int i=0;i<lesionados.pos;i++) { // codigo criado no dia 24/03/2026
        Jogador* jogador = vetorBuscar(lesionados, i);
        if (jogador->semanas_ate_retorno == 0) {
            for (int j=tamanho-1;j>=0;j--) {
                equipa->plantel[j+1] = equipa->plantel[j];
                if (equipa->plantel[j]->posicao<=jogador->posicao) {
                    equipa->plantel[j] = jogador;
                    break;
                }
            }
            vetorRemover(lesionados, i);
            break;
        }
        jogador->semanas_ate_retorno--;
    }
    for (int i=0;i<suspensos.pos;i++) {
        Jogador* jogador = vetorBuscar(suspensos, i);
        if (jogador->semanas_ate_retorno == 0) {
            for (int j=tamanho-1;j>=0;j--) {
                equipa->plantel[j+1] = equipa->plantel[j];
                if (equipa->plantel[j]->posicao<=jogador->posicao) {
                    equipa->plantel[j] = jogador;
                    break;
                }
            }
            vetorRemover(suspensos, i);
            break;
        }
        jogador->semanas_ate_retorno--;
    }
}