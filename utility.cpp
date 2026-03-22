#include "utility.h"
#include <fstream>
#include "config.h"

using namespace std;

Vetor<string> ler(const char* ficheiro) {
    Vetor<string> vet;
    string linha;
    ifstream is(ficheiro);
    if (is.is_open()) {
        while (getline(is,linha))
            vetorInserir(vet, linha);
        is.close();
    }
    return vet;
}
Vetor<string> leituraEquipas() {
    return ler(FILE_EQUIPAS);
}
Vetor<string> leituraNomes() {
    return ler(FILE_NOMES);
}

string escolher(Vetor<string> &vetor) {
    if (vetor.pos==0) return "";
    int indice = numAleatorio(0, vetor.pos-1);
    string escolhido = vetorBuscar(vetor, indice);
    vetorRemover(vetor, indice);
    return escolhido;
}

int numAleatorio(int min,int max) {
    if (min > max) std::swap(min, max);
    return rand() % (max-min+1)+min;
}

//
// int tamArqEquipas() {
//     int contador = 0;
//     string linha;
//
//     ifstream arquivoEquipas("config/equipas");
//
//     if (arquivoEquipas.is_open()) {
//         while (getline(arquivoEquipas,linha)) {
//             contador++;
//         }
//         arquivoEquipas.close();
//     }
//     return contador;
// }
//
// int tamArqNomes() {
//     int contador = 0;
//     string linha;
//
//     ifstream arquivoJogadores("config/nomes");
//
//     if (arquivoJogadores.is_open()) {
//         while (getline(arquivoJogadores,linha)) {
//             contador++;
//         }
//         arquivoJogadores.close();
//     }
//     return contador;
// }
//
// string* leituraNomes() {
//     int contador = tamArqNomes();
//
//     string* vNomeJogadores = new string [contador];
//
//     ifstream arquivoJogadores("config/nomes");
//
//     if (arquivoJogadores.is_open()) {
//         for (int i = 0; i<contador; i++){
//             getline(arquivoJogadores,vNomeJogadores[i]);
//         }
//         arquivoJogadores.close();
//     }
//     return vNomeJogadores;
// }
//
// string* leituraEquipas() {
//     int contador = tamArqEquipas();
//
//     string* vOutrasEquipas = new string [contador];
//
//     ifstream arquivoEquipas2("config/equipas");
//
//     if (arquivoEquipas2.is_open()) {
//         for (int i=0; i<contador; i++){
//             getline(arquivoEquipas2,vOutrasEquipas[i]);
//         }
//         arquivoEquipas2.close();
//     }
//     return vOutrasEquipas;
// }
// string nomeAleatorio() {
//     int indice = tamArqNomes();
//     //segurança se não estiver lendo o arquivo
//     if (indice <= 0) {
//         return "Jogador_Sem_Nome";
//     }
//     string* todosNomes = leituraNomes();
//     string nomeSorteado = todosNomes[rand() % indice];
//     delete[] todosNomes;
//     return nomeSorteado;
// }
//
// /**
//  *
//  * Conta o número de linhas de um ficheiro, para depois criar um array do tamanho necessário
//  * @param path
//  * @return
//  */
// int tamArq(string path) {
//     int contador = 0;
//     string linha;
//
//     ifstream arquivo(path);
//
//     if (!arquivo.is_open()) {
//         cout << "Nao e possivel abrir o ficheiro "<< path<< endl;
//         return -1; //podemos colocar exit, mas isso fecharia o programa
//     }
//     while (getline(arquivo,linha)) {
//         contador++;
//     }
//     arquivo.close();
//     return contador;
// }
//
// /**
//  * Lê um ficheiro e coloca cada linha num array de strings, devolvendo o array criado
//  * @param path
//  * @param tamanho
//  * @return
//  */
// string* leituraArq(string path, int& tamanho) {
//     tamanho=tamArq(path);
//     if (tamanho <= 0) {
//         return nullptr;
//     }
//     string* vArquivos = new string[tamanho];
//     ifstream arquivo(path);
//     if (arquivo.is_open()) {
//         int i=0; //o while neste caso é melhor que o for
//         while (getline(arquivo,vArquivos[i]) && i < tamanho) {
//             i++;
//         }
//         arquivo.close();
//     } else {
//         delete[] vArquivos;
//         return nullptr; //é preciso que devolva algo se não dá erro
//     }
//     return vArquivos;
// }
