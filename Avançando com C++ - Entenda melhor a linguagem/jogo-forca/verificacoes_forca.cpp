#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

string selecionar_palavra_secreta_de_arquivo()
{
    string palavra_secreta;
    fstream arquivo("palavras.txt");
    srand(time(NULL));
    int numero = rand() % 20;
    arquivo.seekg(ios::beg);
    for (int i = 0; i < numero - 1; ++i)
    {
        arquivo.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    arquivo >> palavra_secreta;
    return palavra_secreta;
}

bool nao_ganhou(map<char, bool> &ja_acertou, string palavra_secreta)
{
    for (char letra : palavra_secreta)
    {
        if (!ja_acertou[letra])
        {
            return true;
        }
    }
    return false;
}

bool nao_enforcou(vector<char> &chutes_errados)
{
    return chutes_errados.size() != 6;
}

bool letra_existe(char palpite, string palavra_secreta)
{
    for (char letra : palavra_secreta)
    {
        if (palpite == letra)
        {
            return true;
        }
    }
    return false;
}

void analisa_palpite(string palavra_secreta, map<char, bool> &ja_acertou, vector<char> &chutes_errados)

{
    char palpite;

    cout << "\nDigite uma letra que você acha que a palavra secreta tem: " << endl;
    cin >> palpite;

    if (letra_existe(palpite, palavra_secreta))
    {
        cout << "Você acertou! A palavra secreta contém a letra " << palpite << endl;
        ja_acertou[palpite] = true;
    }
    else
    {
        cout << "Você errou! A palavra secreta não contém a letra " << palpite << endl;
        chutes_errados.push_back(palpite);
    }
}

void resultado(vector<char> &chutes_errados, string palavra_secreta)
{
    if (nao_enforcou(chutes_errados))
    {
        cout << "Parabéns! Você adivinhou a palavra secreta (" << palavra_secreta << ") e ganhou o jogo!" << endl;
    }
    else
    {
        cout << "O bonequinho enforcou! Suas tentativas acabaram e você não adivinhou a palavra secreta (" << palavra_secreta << "), você perdeu o jogo!" << endl;
    }
}