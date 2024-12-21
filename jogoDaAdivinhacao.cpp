#include <iostream>
using namespace std;

int main(){

    cout << "**************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao! *" << endl;
    cout << "**************************************" << endl;

    const int NSECRETO = 85;

    bool NAcertou = true;
    int tentativas = 0;
   
    while (NAcertou){
        tentativas++;
        int chute;
    
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual e o seu chute?";
        cin >> chute;
        
        cout << "Seu chute e " << chute << endl;

        bool acertou = chute == NSECRETO;
        bool maior = chute > NSECRETO;

        if(acertou){
            cout << "Parabens! voce acertou o numero secreto" << endl;
            NAcertou = false;
        } else if (maior){
            cout << "Seu chute foi maior que o numero secreto" << endl;
        } else{
            cout << "Seu chute foi menor que o numero secreto" << endl;
        }
    }

}