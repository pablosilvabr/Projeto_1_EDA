
#include <fstream>
#include <string>
#include <iostream>
#include "adversarios.h"
#include "utility.h"
#include <algorithm>
#include "numAleatorio.h"
using namespace std;


/**
 * Troca o conteúdo de duas strings
 * @param a
 * @param b

void troca(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}
*/

/**
 * Escolhe um elemento aleatório de um array de strings, devolve o elemento escolhido e remove-o do array (colocando o último elemento no lugar do escolhido)
 * @param array
 * @param disponiveis
 * @return
 */
string escolher(string* array, int& disponiveis) {
    if (disponiveis <= 0) {
        return "SEM_NOMES_DISPONIVEIS"; //
    }
    int indice = numAleatorio(0, disponiveis - 1);
    string escolhido = array[indice];
    std::swap(array[indice], array[disponiveis - 1]);
    disponiveis--;
    return escolhido;
}