#pragma once
#include <vector>
#include <map>
#include <string>

std::string selecionar_palavra_secreta_de_arquivo();
bool nao_ganhou(const std::map<char, bool> &ja_acertou,const std::string &palavra_secreta);
bool nao_enforcou(const std::vector<char> &chutes_errados);
bool letra_existe(char palpite, const std::string &palavra_secreta);
namespace Forca
{
	void analisa_palpite(const std::string& palavra_secreta, std::map<char, bool>& ja_acertou, std::vector<char>& chutes_errados);

}
void resultado(const std::vector<char> &chutes_errados,const std::string &palavra_secreta);