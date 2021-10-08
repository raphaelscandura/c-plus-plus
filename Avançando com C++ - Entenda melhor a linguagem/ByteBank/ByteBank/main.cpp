#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "pt_BR");
	Titular titularPedro("Pedro", "123.456.789-10");
	Conta contaDoPedro("123456", "0012", titularPedro);

	std::cout << "Número: " << contaDoPedro.getNumero() << "\nAgência: " << contaDoPedro.getAgencia() << "\nTitular: " << contaDoPedro.getTitular().getNome() 
		<< "\nCPF do Titular: " << contaDoPedro.getTitular().getCpf() << std::endl;
	std::cout << "Quantidade de contas: " << Conta::getQuantidadeDeContas() << std::endl;
	return 0;
}