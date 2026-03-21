#include  <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include "utility.h"
#include "jogador.h"
#include "menu.h"
#include <windows.h>


using namespace std;

int main() {
    // //para tirar o erro dos acentos (mas está quebrando os espaços!!!)
    // SetConsoleOutputCP(CP_UTF8);
    // SetConsoleCP(CP_UTF8);

    srand(time(NULL));
    mostrarMenu();

    return 0;
}