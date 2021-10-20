#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>

int Conta::quantidadeDeContas = 0;

Conta::Conta(std::string numero, std::string agencia, Titular& titular)
	:numero(numero), agencia(agencia), titular(titular), saldo(0)
{
	validaAgencia(agencia);
	quantidadeDeContas++;
}

Conta::~Conta()
{
	quantidadeDeContas--;
}

void Conta::sacar(float valorSaque)
{
	if (valorSaque <= this->getSaldo() + (valorSaque * this->getTaxa()))
	{
		this->saldo -= valorSaque + (valorSaque * this->getTaxa());
	}
	
}

void Conta::depositar(float valorDeposito)
{
	this->saldo += valorDeposito;
}

void Conta::transferir(Conta &destino, float valorTransferencia)
{
	this->sacar(valorTransferencia);
	destino.depositar(valorTransferencia);
}

float Conta::getTaxa() const
{
	return this->taxa;
}

std::string Conta::getNumero() const
{
	return this->numero;
}

std::string Conta::getAgencia() const
{
	return this->agencia;
}

Titular Conta::getTitular() const
{
	return this->titular;
}

float Conta::getSaldo() const
{
	return this->saldo;
}

int Conta::getQuantidadeDeContas()
{
	return quantidadeDeContas;
}

void Conta::validaAgencia(std::string agencia)
{
	if (agencia.size() < 4)
	{
		std::cout << "Número da agência inválido" << std::endl;
		exit(1);
	}
}
