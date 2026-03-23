//
// Created by jesus on 03/19/2026.
#include <iostream>
#include "utility.h"
#include "config.h"
#include "jogador.h"
using namespace std;

/**
 * Gerar um jogador com atributos aleatórios
 * Imprimir os atributos do jogador
 * Gerar um plantel de jogadores, dependendo da necessidade
 * Precisa criar regras de Jogadores Mínimos por posição
 * Precisa ordenar por posição do jogador
 * Precisa limpar depois no main
 */


Jogador gerarJogador(const string &nome) {
    Jogador novo;
    novo.nome = nome;
    novo.idade = numAleatorio(MIN_IDADE, MAX_IDADE);
    novo.qualidade = numAleatorio(0, MAX_QUALIDADE);
    novo.numero = numAleatorio(MIN_NUM, MAX_NUM);//após estar criado o plantel, devemos verificar numeros repetidos
    novo.probSus = numAleatorio(CHANCE_DE_SUSPENSAO_MIN, CHANCE_DE_SUSPENSAO_MAX);
    novo.probLes = numAleatorio(CHANCE_DE_LESAO_MIN, CHANCE_DE_LESAO_MAX);
    novo.posicao = numAleatorio(1, 4);
    novo.diasTreino = 0;
    return novo;
}
/**
 * Gerar um jogador com atributos aleatórios
 * Imprimir os atributos do jogador
 * Gerar um plantel de jogadores, dependendo da necessidade
 * Precisa criar regras de Jogadores Mínimos por posição
 * Precisa ordenar por posição do jogador
 * Precisa limpar depois no main
 */
void imprimirJogador(const Jogador* jogador) {
    cout << "Nome: " << jogador->nome << endl;
    cout << "Idade: " << jogador->idade << endl;
    cout << "Qualidade: " << jogador->qualidade << endl;
    cout << "Numero: " << jogador->numero << endl;
    cout << "Probabilidade de Suspensão: " << jogador->probSus << "%" << endl;
    cout << "Probabilidade de Lesão: " << jogador->probLes << "%" << endl;
    cout << "Posição: " << jogador->posicao << endl;
    cout << "Dias de Treino: " << jogador->diasTreino << endl;
}

/**
 * Insere um jogador num array de jogadores, ordenando por posição e número
 * @param array
 * @param tamTotal
 * @param novo
 * @param capacidadeMax
 */
void inserirJogador(Jogador** array, int& tamTotal, Jogador* novo, int capacidadeMax ) { //inserir jogador devia estar em plantel.cpp imo
    if (tamTotal >= capacidadeMax) {
        cout << " Nao e posiível inserir mais jogadores." << endl;
        return;
    }
    int i=0;
    while (i < tamTotal) {
        if (array[i]->posicao > novo->posicao)//so alterei == para >
            break;

        if (array[i]->posicao == novo->posicao &&
            array[i]->numero > novo->numero)
            break;

        i++;
    }

    int posInserir = i;
    for (int j = tamTotal; j > posInserir; j--) {
        array[j] = array[j - 1];
    }
    array[posInserir] = novo;
    tamTotal++;
}
//Precisa criar regras de Jogadores Mínimos por posição
//precisa ordenar
/**Jogador* plantel(int& tam) {
    tam = 20;
    Jogador* novoPlantel = new Jogador[tam];
    gerarJogadores(novoPlantel, tam);
    return novoPlantel;
}**/

//precisa limpar depois no main
//precisa ordenar por posição do jogador
/**Jogador* transferencia() {
    int tam = 2;

    Jogador* novoTransferencia = new Jogador[tam];
    gerarJogadores(novoTransferencia, tam);
    return novoTransferencia;
}**/


// Vetor<Jogador> pullJogadores(Vetor<Jogador> lista_jogadores, int& numero_jogadores) {
//     //Vetor<string> lista = leituraNomes();//passar tamanho
//     int num_por_posicao[4];
//
//     num_por_posicao[0] = GR_MIN;
//     num_por_posicao[1] = DEF_MIN;
//     num_por_posicao[2] = MED_MIN;
//     num_por_posicao[3] = AVA_MIN;
//
//     for (int i=0; i<tamArqNomes(); i++) {
//         //incompleto fui dormir, continuo dps :)
//
//         //lista_jogadores[i].nome = nomeAleatorio(); //conflito de char* e char -DEBUG
//
//         //Informações Jogador
//
//         lista_jogadores[i].idade = 18 + (rand() % 17);
//
//         //Atributos do jogador
//
//         int pos = rand() % 4;
//         //lista_jogadores[i].posicao = (rand()%4);
//         lista_jogadores[i].qualidade = (rand() % MAX_QUALIDADE) + 1;
//         lista_jogadores[i].probLes = (rand() % MAX_PROBLES) + 1; //pablo
//         lista_jogadores[i].probSus = (rand() % MAX_PROBSUS) + 1; //pablo
//
//         //lista_jogadores[i].posicao = (num_por_posicao[pos]>enum[pos]);
//
//     }
//     return lista_jogadores;
// }




