//
// Created by jesus on 17/03/2026.
//

#ifndef PROJETO_1_UTK_H
#define PROJETO_1_UTK_H
// aqui podemos colocar as constantes enquanto
const int MINIMO_JOGADORES = 20;
const int MAXIMO_JOGADOS = 30;

//No Máximo existem 3 Guarda-Redes
//(GR), 10 Defesas (DEF), 10 Médios (MED) e 7 Avançados (AVA). No mínimos existem 2GR,
//7DEF, 7MED e 4AVA
const int GR_MAX = 3;
const int GR_MIN = 2;
const int DEF_MAX = 10;
const int DEF_MIN = 7;
const int MED_MAX = 10;
const int MED_MIN = 7;
const int AVA_MAX = 7;
const int AVA_MIN = 4;

const int CAMPEONATO_N_EQUIPAS = 18;

const int MAX_GOLOS = 8;
//const int Min_GOLOS = 0; //subentendido portanto considero desnecessário

const int MAX_TEMPO_TREINO = 5;
const int QUALIDADE_POR_SEMANA = 1;//pode ser retirado para simplicidade

const int MAX_TITULARES = 11;
const int MAX_SUPLENTES = 6;

//e que tenha pelo menos 1 guarda redes,
//3 defesas, 2 médios, e 1 avançado
const int EQUIPA_MIN_GR = 1;
const int EQUIPA_MIN_DEF = 3;
const int EQUIPA_MIN_MED = 2;
const int EQUIPA_MIN_AVA = 1;



const int LIMITE_TEMPO_LESIONADO = 10;
const int LIMITE_TEMPO_SUSPENSO = 10;
const int CHANCE_DE_LESAO = 5;
const int CHANCE_DE_SUSPENSO = 10;
const int MAX_QUALIDADE = 100;

#endif //PROJETO_1_UTK_H