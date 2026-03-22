#include <iostream>
#include "utility.h"
#include "constante.h"
#include "numAleatorio.h"
#include "jogador.h"
#include <algorithm>

using namespace std;
/**
 * Gerar um jogador com atributos aleatórios
 * Imprimir os atributos do jogador
 * Gerar um plantel de jogadores, dependendo da necessidade
 * Precisa criar regras de Jogadores Mínimos por posição
 * Precisa ordenar por posição do jogador
 * Precisa limpar depois no main
 */
string nomeAleatorio(string* nomeJogadores, int tamanho) {
    string nomeJogador = nomeJogadores[numAleatorio(0, tamanho - 1)];
    return nomeJogador;
}
/**
 * Gerar um jogador com atributos aleatórios
 * Imprimir os atributos do jogador
 * Gerar um plantel de jogadores, dependendo da necessidade
 * Precisa criar regras de Jogadores Mínimos por posição
 * Precisa ordenar por posição do jogador
 * Precisa limpar depois no main
 */
Jogador gerarUmJogadorPlantel(string* nomeJogadores, int tamanho, string posicao, int numeroCamisa) {
    Jogador novo;

    novo.nome = nomeAleatorio(nomeJogadores,tamanho);
    novo.idade = numAleatorio(18, 40);
    novo.qualidade = numAleatorio(0, 100);
    novo.numero = numeroCamisa;//após estar criado o plantel, devemos verificar numeros repetidos
    novo.probSus = numAleatorio(0, 20);
    novo.probLes = numAleatorio(0, 15);
    novo.posicao = posicao;
    novo.diasTreino = 0;


    return novo;
}


bool compararNumJogador(Jogador* array,int numComparar, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i].numero == numComparar) {
            return true;
        }
    }
    return false;
}

void ordenarPorNumero(Jogador* array, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (array[j].numero > array[j + 1].numero) {

                std::swap( array[j],  array[j + 1]);
            }
        }
    }
}


/**
 * Gerar um jogador com atributos aleatórios
 * Imprimir os atributos do jogador
 * Gerar um plantel de jogadores, dependendo da necessidade
 * Precisa criar regras de Jogadores Mínimos por posição
 * Precisa ordenar por posição do jogador
 * Precisa limpar depois no main
 */
void imprimirJogador(Jogador jogador) {
    cout << "Nome: " << jogador.nome << endl;
    cout << "Idade: " << jogador.idade << endl;
    cout << "Qualidade: " << jogador.qualidade << endl;
    cout << "Numero: " << jogador.numero << endl;
    cout << "Probabilidade de Suspensão: " << jogador.probSus << "%" << endl;
    cout << "Probabilidade de Lesão: " << jogador.probLes << "%" << endl;
    cout << "Posição: " << jogador.posicao << endl;
    cout << "Dias de Treino: " << jogador.diasTreino << endl;
}





/**
 * Insere um jogador num array de jogadores, ordenando por posição e número
 * @param array
 * @param tamTotal
 * @param novo
 * @param capacidadeMax

void inserirJogador(Jogador** array, int& tamTotal, Jogador* novo, int capacidadeMax ) {
    if (tamTotal >= capacidadeMax) {
        cout << " Nao e posiível inserir mais jogadores." << endl;
        return;
    }
    int i=0;
    while (i<tamTotal) {
        if (array[i]->posicao == novo->posicao) break;
        if (array[i]->posicao == novo->posicao && array[i]->numero> novo->numero) break;
        i++;
    }
    int posInserir = i;
    for (int j = tamTotal; j > posInserir; j--) {
        array[j] = array[j - 1];
    }
    array[posInserir] = novo;
    tamTotal++;

}

*/


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