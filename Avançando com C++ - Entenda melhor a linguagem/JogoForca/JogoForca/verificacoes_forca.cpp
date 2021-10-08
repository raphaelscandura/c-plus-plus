#include <iostream>
#include <limits>
#include <fstream>
#include <ctime>
#include "verificacoes_forca.hpp"

std::string palavra_secreta;
std::map<char, bool> ja_acertou;
std::vector<char> chutes_errados;


std::string selecionar_palavra_secreta_de_arquivo()
{
    std::string palavra_secreta;
    std::fstream arquivo("palavras.txt");
    srand(time(NULL));
    int numero = rand() % 20;
    arquivo.seekg(std::ios::beg);
    for (int i = 0; i < numero - 1; ++i)
    {
        arquivo.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    arquivo >> palavra_secreta;
    return palavra_secreta;
}

bool nao_ganhou(const std::map<char, bool>& ja_acertou, const std::string& palavra_secreta)
{
    for (char letra : palavra_secreta)
    {
        if (ja_acertou.find(letra) == ja_acertou.end() || !ja_acertou.at(letra))
        {
            return true;
        }
    }
    return false;
}

bool nao_enforcou(const std::vector<char>& chutes_errados)
{
    return chutes_errados.size() != 6;
}

bool letra_existe(char palpite, const std::string& palavra_secreta)
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

namespace Forca
{
    void analisa_palpite(const std::string& palavra_secreta, std::map<char, bool>& ja_acertou, std::vector<char>& chutes_errados)

    {
        char palpite;

        std::cout << "\nDigite uma letra que você acha que a palavra secreta tem: " << std::endl;
        std::cin >> palpite;

        if (letra_existe(palpite, palavra_secreta))
        {
            std::cout << "Você acertou! A palavra secreta contém a letra " << palpite << std::endl;
            ja_acertou[palpite] = true;
        }
        else
        {
            std::cout << "Você errou! A palavra secreta não contém a letra " << palpite << std::endl;
            chutes_errados.push_back(palpite);
        }
    }

}

void resultado(const std::vector<char>& chutes_errados, const std::string& palavra_secreta)
{
    if (nao_enforcou(chutes_errados))
    {
        std::cout << "Parabéns! Você adivinhou a palavra secreta (" << palavra_secreta << ") e ganhou o jogo!" << std::endl;
    }
    else
    {
        std::cout << "O bonequinho enforcou! Suas tentativas acabaram e você não adivinhou a palavra secreta (" << palavra_secreta << "), você perdeu o jogo!" << std::endl;
    }
}