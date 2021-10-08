#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "pt_BR");

	Conta contaDoPedro("123456", "0012", Titular("Pedro", "123.456.789-10"));

	std::cout << "N�mero: " << contaDoPedro.getNumero() << "\nAg�ncia: " << contaDoPedro.getAgencia() << "\nTitular: " << contaDoPedro.getTitular().getNome() 
		<< "\nCPF do Titular: " << contaDoPedro.getTitular().getCpf() << std::endl;
	std::cout << "Quantidade de contas: " << Conta::getQuantidadeDeContas() << std::endl;
	return 0;
}