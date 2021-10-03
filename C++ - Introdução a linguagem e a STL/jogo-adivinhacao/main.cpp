#include <iostream>
using namespace std;

int main(){
    cout << "************************************" << endl;
    cout << "* Bem-vindo ao jogo de adivinhação *" << endl;
    cout << "************************************" << endl;

    const int NUMERO_SECRETO = 14;
    int chute;
    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;

    cout << "O número secreto é " << NUMERO_SECRETO << "!" << endl;
    
    cout << "Qual é o valor do número secreto?" << endl;
    cin >> chute;
    cout << "O valor do seu chute foi: " << chute << endl;

    if(acertou){
        cout << "Parabéns! Você acertou o número secreto" << endl;
    } else if (maior){
        cout << "O seu chute foi maior do que o número secreto" << endl;
    } else {
        cout << "O seu chute foi menor do que o número secreto" << endl;
    }

    system("pause");
}