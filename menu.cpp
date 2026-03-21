#include <iomanip>
#include <iostream>
#include "jogador.h"


using namespace std;



void mostrarMenu() {
    int n = 0;

    Jogador* listaJogadores = plantel(n);


    cout <<setw(29)<<left<<"Nome" << "| "
    << setw(8)<<"N"  << "| "
    <<setw(10) <<"Posicao" <<  "| "
    <<setw(10) <<"Idade" << "| "
    <<setw(15) <<"ProbLesao" <<  "| "
    <<setw(15)<<"ProbCastigo" << "| "
    <<setw(10) <<"Qualidade" <<  "| "
    <<setw(10) <<"Dias-Treino" << endl;
    cout<<"________________________________________________________________________________________________________________________" <<endl;
    for (int i = 0; i < n; i++) {
        //colocar o limite do tamanho do plantel
        cout<<setw(29)<<left<<listaJogadores[i].nome << "| ";
        cout<<setw(8)<<listaJogadores[i].numero << "| ";
        cout<<setw(10)<<listaJogadores[i].posicao << "| ";
        cout<<setw(10)<<listaJogadores[i].idade << "| ";
        cout<<setw(15)<<listaJogadores[i].probLes << "| ";
        cout<<setw(15)<<listaJogadores[i].probSus << "| ";
        cout<<setw(10)<<listaJogadores[i].qualidade << "| ";
        cout<<setw(10)<<"0"<<endl;
    }
}
