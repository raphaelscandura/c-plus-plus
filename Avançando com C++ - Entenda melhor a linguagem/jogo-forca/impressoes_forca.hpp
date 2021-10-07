#include <vector>
#include <string>
#include <map>
#include "verificacoes_forca.hpp"

void imprime_bonequinho(int erros);
void imprime_erros(std::vector<char> &chutes_errados);
void imprime_palavra_secreta(std::map<char, bool> &ja_acertou, std::string palavra_secreta);
void imprime_cabecalho();
