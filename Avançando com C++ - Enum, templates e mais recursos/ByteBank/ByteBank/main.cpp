#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Gerente.hpp"
#include "Caixa.hpp"
#include "DiaDaSemana.hpp"
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "pt_BR");

	Titular titularPedro("Pedro", "123.456.789-10", "pedromarques", "pedrinhomaneiro");
	Titular titularMaria("Maria", "012.345.678-91", "mariazinha123", "senhadamaria123");

	ContaCorrente contaDoPedro("123456", "0012", titularPedro);
	ContaPoupanca contaDaMaria("654321", "1200", titularMaria);

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

	
	Gerente pedro("Pedro da Silva", "012.345.678-91", 1112.5, "pedrosilva", "@pedrosilva1985", DiaDaSemana::Sexta);

	std::cout << "Gerente registrado: " << pedro.getNome() << " CPF: " << pedro.getCpf() << " Salário: R$" << pedro.getSalario() << std::endl;

	Caixa joaquim("Joaquim Alves", "025.369.789-14", 950.0, "joaquimalves", "filhafavorita2005", DiaDaSemana::Domingo);

	std::cout << "Caixa registrado: " << joaquim.getNome() << " CPF: " << joaquim.getCpf() << " Salário: R$" << joaquim.getSalario() << std::endl;
	

	return 0;
}