#pragma once
#include <string>
#include "Titular.hpp"
class Conta
{
private:
	std::string numero;
	std::string agencia;
	Titular titular;
	float saldo = 0;
	static int quantidadeDeContas;
public:
	Conta(std::string numero, std::string agencia, Titular titular);
	void sacar(float valorSaque);
	void depositar(float valorDeposito);
	void transferir(Conta destino, float valorTransferencia);
	std::string getNumero() const;
	std::string getAgencia() const;
	Titular getTitular() const;
	float getSaldo() const;
	static int getQuantidadeDeContas();
};