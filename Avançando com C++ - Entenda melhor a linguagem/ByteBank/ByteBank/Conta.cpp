#include "Conta.hpp"
#include "Titular.hpp"

Conta::Conta(std::string numero, std::string agencia, Titular titular)
{
	this->numero = numero;
	this->agencia = agencia;
	this->titular = titular;
	this->saldo = 0.0;
}

void Conta::sacar(float valorSaque)
{
	this->saldo -= valorSaque;
}

void Conta::depositar(float valorDeposito)
{
	this->saldo += valorDeposito;
}

void Conta::transferir(Conta destino, float valorTransferencia)
{
	this->sacar(valorTransferencia);
	destino.depositar(valorTransferencia);
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