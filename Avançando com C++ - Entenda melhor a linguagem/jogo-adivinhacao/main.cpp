#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    int tentativas = 0;
    int pontuacao = 1000;
    char dificuldade;

    cout << "************************************" << endl;
    cout << "* Bem-vindo ao jogo de adivinhação *" << endl;
    cout << "************************************" << endl;
    cout << "Selecione a sua dificuldade:" << endl;
    cout << "Fácil (F) Médio (M) ou Difícil (D)" << endl;

    cin >> dificuldade;

    switch (dificuldade)
    {
    case 'F':
        tentativas = 20;
        break;
    case 'M':
        tentativas = 10;
        break;
    case 'D':
        tentativas = 5;
        break;
    default:
        cout << "Entrada inválida, por favor digite F para fácil, M para médio ou D para dificil" << endl;
    }

    for (tentativas < 0; tentativas--;)
    {
        int chute;

        cout << "De 0 a 99, qual é o valor do número secreto? (" << tentativas + 1 << " tentativas restantes)" << endl;
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
        pontuacao -= abs(NUMERO_SECRETO - chute);
    }

    if (tentativas > 0)
    {
        cout << "Parabéns, você ganhou o jogo de adivinhação!" << endl;
        cout << "Pontuação final: " << pontuacao << endl;
    }
    else
    {
        cout << "As suas tentativas acabaram, você perdeu o jogo!" << endl;
    }

    system("pause");
}