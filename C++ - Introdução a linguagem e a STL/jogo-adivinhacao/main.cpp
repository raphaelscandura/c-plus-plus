#include <iostream>
using namespace std;

int main(){
    cout << "************************************" << endl;
    cout << "* Bem-vindo ao jogo de adivinhação *" << endl;
    cout << "************************************" << endl;

    int numero_secreto = 14;

    cout << "O número secreto é " << numero_secreto << "!" << endl;

    int chute;
    cout << "Qual é o valor do número secreto?" << endl;
    cin >> chute;
    cout << "O valor do seu chute foi: " << chute << endl;

    if(chute == numero_secreto){
        cout << "Parabéns! Você acertou o número secreto" << endl;
    } else if (chute > numero_secreto){
        cout << "O seu chute foi maior do que o número secreto" << endl;
    } else {
        cout << "O seu chute foi menor do que o número secreto" << endl;
    }

    system("pause");
}