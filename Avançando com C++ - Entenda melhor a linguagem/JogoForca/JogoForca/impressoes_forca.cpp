#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <limits>
#include "impressoes_forca.hpp"

void imprime_bonequinho(int erros)
{
    if (erros == 0)
    {
        std::cout << "|-----|\n|\n|\n|" << std::endl;
    }
    if (erros == 1)
    {
        std::cout << "|-----|" << std::endl;
        std::cout << "|    (0-0)\n|\n|" << std::endl;
    }
    if (erros == 2)
    {
        std::cout << "|-----|" << std::endl;
        std::cout << "|    (0-0)" << std::endl;
        std::cout << "|      |\n|" << std::endl;
    }
    if (erros == 3)
    {
        std::cout << "|-----|" << std::endl;
        std::cout << "|    (0-0)" << std::endl;
        std::cout << "|     \\|\n|" << std::endl;
    }
    if (erros == 4)
    {
        std::cout << "|-----|" << std::endl;
        std::cout << "|    (0-0)" << std::endl;
        std::cout << "|     \\|/\n|" << std::endl;
    }
    if (erros == 5)
    {
        std::cout << "|-----|" << std::endl;
        std::cout << "|    (0-0)" << std::endl;
        std::cout << "|     \\|/" << std::endl;
        std::cout << "|      /" << std::endl;
    }
    if (erros == 6)
    {
        std::cout << "|-----|" << std::endl;
        std::cout << "|    (X-X)" << std::endl;
        std::cout << "|     \\|/" << std::endl;
        std::cout << "|      /\\" << std::endl;
    }
}

void imprime_erros(std::vector<char> &chutes_errados)
{
    std::cout << "\nChutes errados: ";
    for (char letra : chutes_errados)
    {
        std::cout << letra << " ";
    }
}

void imprime_palavra_secreta(std::map<char, bool> &ja_acertou, std::string palavra_secreta)
{
    std::cout << "Palavra secreta: ";
    for (char letra : palavra_secreta)
    {
        if (ja_acertou[letra])
        {
            std::cout << letra << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
}

void imprime_cabecalho()
{
    std::cout << "******************************" << std::endl;
    std::cout << "* Bem-vindo ao jogo da forca *" << std::endl;
    std::cout << "******************************" << std::endl;
}