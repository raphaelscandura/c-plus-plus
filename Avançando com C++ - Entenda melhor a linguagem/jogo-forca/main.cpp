#include <iostream>
#include <locale.h>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <limits>
using namespace std;

string palavra_secreta;
map<char, bool> ja_acertou;
vector<char> chutes_errados;

bool letra_existe(char palpite)
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
    for (char letra : palavra_secreta)
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
        cout << "Parabéns! Você adivinhou a palavra secreta (" << palavra_secreta << ") e ganhou o jogo!" << endl;
    }
    else
    {
        cout << "O bonequinho enforcou! Suas tentativas acabaram e você não adivinhou a palavra secreta, você perdeu o jogo!" << endl;
    }
}

void imprime_erros()
{
    cout << "\nChutes errados: ";
    for (char letra : chutes_errados)
    {
        cout << letra << " ";
    }
}

void analisa_palpite()
{
    char palpite;

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
}

void imprime_palavra_secreta()
{
    cout << "Palavra secreta: ";
    for (char letra : palavra_secreta)
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
}

void imprime_cabecalho()
{
    cout << "******************************" << endl;
    cout << "* Bem-vindo ao jogo da forca *" << endl;
    cout << "******************************" << endl;
}

void selecionar_palavra_secreta_de_arquivo()
{
    fstream arquivo("palavras.txt");
    srand(time(NULL));
    int numero = rand() % 20;
    arquivo.seekg(ios::beg);
    for (int i = 0; i < numero - 1; ++i)
    {
        arquivo.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    arquivo >> palavra_secreta;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    imprime_cabecalho();

    selecionar_palavra_secreta_de_arquivo();

    while (nao_enforcou() && nao_ganhou())
    {
        imprime_palavra_secreta();
        imprime_erros();
        analisa_palpite();
        imprime_bonequinho(chutes_errados.size());
    }
    resultado();
    system("pause");
}