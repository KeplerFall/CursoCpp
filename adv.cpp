#include<iostream>
using namespace std;

int main (){
    cout << "Bem vindo ao jogo de adivinhação" << endl;

    const int numero_secreto = 42;

    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;

    while (nao_acertou)
    {
        cout << "Tentativa " << tentativas << endl;
        cout << "Digite seu chute ";
        int chute;
        cin >> chute;

        bool acertou = chute == numero_secreto;

        if(acertou){cout << "Acertou o numero!" << endl; nao_acertou = false;}
        else{
            pontos -= (chute - numero_secreto)/2
            tentativas++;
            if(chute > numero_secreto){cout << "Chutou muito alto" << endl;}
            if(chute < numero_secreto){cout << "Chutou muito baixo" << endl;}
        }
    }

    cout << "Venceu em " << tentativas << " tentativas!";
    
}