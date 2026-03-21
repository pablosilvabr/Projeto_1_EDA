//
// Created by jesus on 17/03/2026.
//

#ifndef PROJETO_1_UTK_H
#define PROJETO_1_UTK_H

#include "Vetor.h"
#include <string>
// aqui podemos colocar as constexprantes enquanto
constexpr int MINIMO_JOGADORES = 20;
constexpr int MAXIMO_JOGADOS = 30;

//No Máximo existem 3 Guarda-Redes
//(GR), 10 Defesas (DEF), 10 Médios (MED) e 7 Avançados (AVA). No mínimos existem 2GR,
//7DEF, 7MED e 4AVA

constexpr int GR_MAX = 3;
constexpr int GR_MIN = 2;
constexpr int DEF_MAX = 10;
constexpr int DEF_MIN = 7;
constexpr int MED_MAX = 10;
constexpr int MED_MIN = 7;
constexpr int AVA_MAX = 7;
constexpr int AVA_MIN = 4;

constexpr int CAMPEONATO_N_EQUIPAS = 18;

constexpr int MAX_GOLOS = 8;
//constexpr int Min_GOLOS = 0; //subentendido portanto considero desnecessário

constexpr int MAX_TEMPO_TREINO = 5;
constexpr int MAX_SUBSTITUICOES = 3; 
constexpr int QUALIDADE_POR_SEMANA = 1;//pode ser retirado para simplicidade

constexpr int MAX_TITULARES = 11;
constexpr int MAX_SUPLENTES = 6;

constexpr int EQUIPA_MIN_GR = 1;
constexpr int EQUIPA_MIN_DEF = 3;
constexpr int EQUIPA_MIN_MED = 2;
constexpr int EQUIPA_MIN_AVA = 1;

constexpr int LIMITE_TEMPO_LESIONADO = 10;
constexpr int LIMITE_TEMPO_SUSPENSO = 10;
constexpr int CHANCE_DE_LESAO = 5;
constexpr int CHANCE_DE_SUSPENSAO = 10;
constexpr int MAX_QUALIDADE = 100;

constexpr int POSICAO_GR = 0;
constexpr int POSICAO_DEF = 1;
constexpr int POSICAO_MED = 2;
constexpr int POSICAO_AVA = 3;

constexpr const char* FILE_EQUIPAS = "../config/equipas.txt";
constexpr const char* FILE_NOMES = "../config/nomes.txt";

//alteração pablo
constexpr int MAX_PROBLES = 15;
constexpr int MAX_PROBSUS = 20;


/**
 *@brief Lê o ficheiro equipas.txt e armazena o nome das equipas em um array dinâmico.
 * @return Um ponteiro string para o array de vetorOutrasEquipas
 */
Vetor<std::string> leituraEquipasA();

/**
 * @brief Lê o ficheiro nomes.txt e armazena o nome dos atletas em um array dinâmico.
 * @return Um ponteiro string para o array vetorJogadores
 */
Vetor<std::string> leituraNomesA();

int tamArqEquipas();
int tamArqNomes();

#endif //PROJETO_1_UTK_H
