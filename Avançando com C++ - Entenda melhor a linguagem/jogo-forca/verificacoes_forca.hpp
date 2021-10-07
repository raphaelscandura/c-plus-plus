#pragma once
#include <vector>
#include <map>
#include <string>

std::string selecionar_palavra_secreta_de_arquivo();
bool nao_ganhou(std::map<char, bool> &ja_acertou, std::string palavra_secreta);
bool nao_enforcou(std::vector<char> &chutes_errados);
bool letra_existe(char palpite, std::string palavra_secreta);
void analisa_palpite(std::string palavra_secreta, std::map<char, bool> &ja_acertou, std::vector<char> &chutes_errados);
void resultado(std::vector<char> &chutes_errados, std::string palavra_secreta);