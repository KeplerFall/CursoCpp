#include<iostream>
using namespace std;

int main (){
    cout << "Bem vindo ao jogo de adivinhação" << endl;

    const int numero_secreto = 42;

    cout << "Digite seu chute" << endl;
    int chute;
    cin >> chute;

    bool acertou = chute == numero_secreto;

    if(acertou){cout << "Acertou o numero!" << endl;}
    else{
        if(chute > numero_secreto){cout << "Chutou muito alto" << endl;}
        if(chute < numero_secreto){cout << "Chutou muito baixo" << endl;}
    }
}