#include <iostream>
#include <locale.h>
#include <string>
#include <map>
#include <vector>
using namespace std;

const string PALAVRA_SECRETA = "mingnon";
map<char, bool> ja_acertou;
vector<char> chutes_errados;

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

void imprime_bonequinho(int erros)
{
    if (erros == 0)
    {
        cout << "|-----|\n|\n|\n|" << endl;
    }
    if (erros == 1)
    {
        cout << "|-----|" << endl;
        cout << "|    (0-0)\n|\n|" << endl;
    }
    if (erros == 2)
    {
        cout << "|-----|" << endl;
        cout << "|    (0-0)" << endl;
        cout << "|      |\n|" << endl;
    }
    if (erros == 3)
    {
        cout << "|-----|" << endl;
        cout << "|    (0-0)" << endl;
        cout << "|     \\|\n|" << endl;
    }
    if (erros == 4)
    {
        cout << "|-----|" << endl;
        cout << "|    (0-0)" << endl;
        cout << "|     \\|/\n|" << endl;
    }
    if (erros == 5)
    {
        cout << "|-----|" << endl;
        cout << "|    (0-0)" << endl;
        cout << "|     \\|/" << endl;
        cout << "|      /" << endl;
    }
    if (erros == 6)
    {
        cout << "|-----|" << endl;
        cout << "|    (X-X)" << endl;
        cout << "|     \\|/" << endl;
        cout << "|      /\\" << endl;
    }
}

bool nao_ganhou()
{
    for (char letra : PALAVRA_SECRETA)
    {
        if (!ja_acertou[letra])
        {
            return true;
        }
    }
    return false;
}

bool nao_enforcou()
{
    return chutes_errados.size() != 6;
}

void resultado()
{
    if (nao_enforcou())
    {
        cout << "Parabéns! Você adivinhou a palavra secreta e ganhou o jogo!" << endl;
    }
    else
    {
        cout << "O bonequinho enforcou! Suas tentativas acabaram e você não adivinhou a palavra secreta, você perdeu o jogo!" << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char palpite;

    cout << "******************************" << endl;
    cout << "* Bem-vindo ao jogo da forca *" << endl;
    cout << "******************************" << endl;

    while (nao_enforcou() && nao_ganhou())
    {
        cout << "Palavra secreta: ";
        for (char letra : PALAVRA_SECRETA)
        {
            if (ja_acertou[letra])
            {
                cout << letra << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << "\nChutes errados: ";
        for (char letra : chutes_errados)
        {
            cout << letra << " ";
        }
        cout << "\nDigite uma letra que você acha que a palavra secreta tem: " << endl;
        cin >> palpite;

        if (letra_existe(palpite))
        {
            cout << "Você acertou! A palavra secreta contém a letra " << palpite << endl;
            ja_acertou[palpite] = true;
        }
        else
        {
            cout << "Você errou! A palavra secreta não contém a letra " << palpite << endl;
            chutes_errados.push_back(palpite);
        }
        imprime_bonequinho(chutes_errados.size());
    }
    resultado();
    system("pause");
}