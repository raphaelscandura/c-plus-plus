#include <locale.h>
#include "impressoes_forca.cpp"
#include "verificacoes_forca.cpp"

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string palavra_secreta = selecionar_palavra_secreta_de_arquivo();
    map<char, bool> ja_acertou;
    vector<char> chutes_errados;

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