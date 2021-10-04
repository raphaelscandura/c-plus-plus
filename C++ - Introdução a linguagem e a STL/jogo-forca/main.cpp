#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "mingnon";

bool letra_existe(char palpite)
{
    for (char letra : PALAVRA_SECRETA)
    {
        if (palpite == letra)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char palpite;
    bool nao_enforcou = true;
    bool nao_ganhou = true;

    cout << "******************************" << endl;
    cout << "* Bem-vindo ao jogo da forca *" << endl;
    cout << "******************************" << endl;

    while (nao_enforcou && nao_ganhou)
    {
        cout << "Palavra secreta: ";
        for (int i = 0; i < PALAVRA_SECRETA.size(); i++)
        {
            cout << "_ ";
        }
        cout << "\nDigite uma letra que você acha que a palavra secreta tem: " << endl;
        cin >> palpite;

        if (letra_existe(palpite))
        {
            cout << "A palavra secreta contém a letra " << palpite << endl;
        }
        else
        {
            cout << "A palavra secreta não contém a letra " << palpite << endl;
        }
    }
}