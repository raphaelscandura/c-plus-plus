#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Funcionario.hpp"
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "pt_BR");

	ContaCorrente contaDoPedro("123456", "0012", Titular("Pedro", "123.456.789-10"));
	ContaPoupanca contaDaMaria("654321", "1200", Titular("Maria", "012.345.678-91"));

	contaDoPedro.depositar(1000);
	contaDoPedro.sacar(200);

	contaDaMaria.depositar(1000);
	contaDaMaria.transferir(contaDoPedro, 200);

	std::cout << "Número: " << contaDoPedro.getNumero() << "\nAgência: " << contaDoPedro.getAgencia() << "\nSaldo: " << contaDoPedro.getSaldo()
		<< "\nTitular: " << contaDoPedro.getTitular().getNome() << "\nCPF do Titular: " << contaDoPedro.getTitular().getCpf() << std::endl;
	std::cout << std::endl;	

	std::cout << "\nNúmero: " << contaDaMaria.getNumero() << "\nAgência: " << contaDaMaria.getAgencia() << "\nSaldo: " << contaDaMaria.getSaldo() 
		<<"\nTitular: " << contaDaMaria.getTitular().getNome() << "\nCPF do Titular: " << contaDaMaria.getTitular().getCpf() << std::endl;
	std::cout << std::endl;

	/*
	Funcionario pedro("Pedro da Silva", "012.345.678-91", 1112.5);

	std::cout << "Funcionario registrado: " << pedro.getNome() << " CPF: " << pedro.getCpf() << " Salário: R$" << pedro.getSalario() << std::endl;
	*/

	return 0;
}