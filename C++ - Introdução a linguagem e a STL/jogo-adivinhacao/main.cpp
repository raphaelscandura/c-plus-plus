#include <iostream>
using namespace std;

int main()
{
    cout << "************************************" << endl;
    cout << "* Bem-vindo ao jogo de adivinhação *" << endl;
    cout << "************************************" << endl;

    const int NUMERO_SECRETO = 14;
    int tentativas = 5;
    int pontuacao = 1000;

    while (tentativas)
    {
        int chute;

        cout << "Qual é o valor do número secreto? (" << tentativas << " tentativas restantes)" << endl;
        cin >> chute;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;     

        if (acertou)
        {
            cout << "Você acertou o número secreto" << endl;
            break;
        }
        else if (maior)
        {
            cout << "O seu chute foi maior do que o número secreto" << endl;
        }
        else
        {
            cout << "O seu chute foi menor do que o número secreto" << endl;
        }
        tentativas--;
        pontuacao -= abs(NUMERO_SECRETO - chute);
    }

    if(tentativas == 0)
    {
        cout << "As suas tentativas acabaram, você perdeu o jogo!" << endl;
    } 
    else 
    {
        cout << "Parabéns, você ganhou o jogo de adivinhação!" << endl;
        cout << "Pontuação final: " << pontuacao << endl;
    }

    system("pause");
}