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