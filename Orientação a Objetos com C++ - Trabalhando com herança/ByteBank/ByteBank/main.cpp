#include "Conta.hpp"
#include "Titular.hpp"
#include "Funcionario.hpp"
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "pt_BR");

	Conta contaDoPedro("123456", "0012", Titular("Pedro", "123.456.789-10"));

	std::cout << "Número: " << contaDoPedro.getNumero() << "\nAgência: " << contaDoPedro.getAgencia() << "\nTitular: " << contaDoPedro.getTitular().getNome() 
		<< "\nCPF do Titular: " << contaDoPedro.getTitular().getCpf() << std::endl;
	std::cout << "Quantidade de contas: " << Conta::getQuantidadeDeContas() << std::endl;

	Funcionario pedro("Pedro da Silva", "012.345.678-91", 1112.5);

	std::cout << "Funcionario registrado: " << pedro.getNome() << " CPF: " << pedro.getCpf() << " Salário: R$" << pedro.getSalario() << std::endl;
	return 0;
}