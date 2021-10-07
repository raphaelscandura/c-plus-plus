#include <locale.h>
#include "impressoes_forca.hpp"
#include "verificacoes_forca.hpp"

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    std::string palavra_secreta = selecionar_palavra_secreta_de_arquivo();
    std::map<char, bool> ja_acertou;
    std::vector<char> chutes_errados;

    imprime_cabecalho();

    while (nao_enforcou(chutes_errados) && nao_ganhou(ja_acertou, palavra_secreta))
    {
        imprime_palavra_secreta(ja_acertou, palavra_secreta);
        imprime_erros(chutes_errados);
        analisa_palpite(palavra_secreta, ja_acertou, chutes_errados);
        imprime_bonequinho(chutes_errados.size());
    }
    resultado(chutes_errados, palavra_secreta);
    system("pause");
}