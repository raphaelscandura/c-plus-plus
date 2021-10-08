#pragma once
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include "verificacoes_forca.hpp"

void imprime_bonequinho(int erros);
void imprime_erros(const std::vector<char> &chutes_errados);
void imprime_palavra_secreta(const std::map<char, bool> &ja_acertou, const std::string &palavra_secreta);
inline void imprime_cabecalho()
{
    std::cout << "******************************" << std::endl;
    std::cout << "* Bem-vindo ao jogo da forca *" << std::endl;
    std::cout << "******************************" << std::endl;
}
