//
// Created by andre on 21/03/2026.
//
#include <iostream>
#include "numAleatorio.h"
#include <cstdlib>

using namespace std;

/**

 * Gera um numero aleatorio entre o minimo e o maximo
 * @param min
 * @param max
 * @return
 */
int numAleatorio(int min, int max) {
    int J=rand() % (max-min+1)+min;
    return J;
}