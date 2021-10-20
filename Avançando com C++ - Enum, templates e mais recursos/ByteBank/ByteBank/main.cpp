#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Gerente.hpp"
#include "Caixa.hpp"
#include "DiaDaSemana.hpp"
#include <iostream>
#include <locale.h>

std::ostream& operator<<(std::ostream& cout, const Conta& conta)
{
	std::cout << "Número: " << conta.getNumero() << "\nAgência: " << conta.getAgencia() << "\nSaldo: " << conta.getSaldo()
		<< "\nTitular: " << conta.getTitular().getNome() << "\nCPF do Titular: " << conta.getTitular().getCpf() << std::endl;
	std::cout << std::endl;
	return cout;
};

std::ostream& operator<<(std::ostream& cout, Funcionario& funcionario)
{
	std::cout << "Funcionario registrado: " << funcionario.getNome() << " CPF: " << funcionario.getCpf() << " Salário: R$" << funcionario.getSalario() << std::endl;
	return cout;
};

void RealizaSaque(Conta& conta)
{
	auto resultado = conta.sacar(200);
	if (auto saldo = std::get_if<float>(&resultado))
	{
		std::cout << "Novo saldo da conta: " << *saldo << std::endl;
	}
}

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

	contaDaMaria += 350.0;

	std::cout << contaDaMaria;
	std::cout << contaDoPedro;
	
	Gerente pedro("Pedro da Silva", "012.345.678-91", 1112.5, "pedrosilva", "@pedrosilva1985", DiaDaSemana::Sexta);
	Caixa joaquim("Joaquim Alves", "025.369.789-14", 950.0, "joaquimalves", "filhafavorita2005", DiaDaSemana::Domingo);

	std::cout << pedro;
	std::cout << joaquim;

	RealizaSaque(contaDaMaria);

	return 0;
}