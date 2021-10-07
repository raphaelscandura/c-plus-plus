#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

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

void imprime_erros(vector<char> &chutes_errados)
{
    cout << "\nChutes errados: ";
    for (char letra : chutes_errados)
    {
        cout << letra << " ";
    }
}

void imprime_palavra_secreta(map<char, bool> &ja_acertou, string palavra_secreta)
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