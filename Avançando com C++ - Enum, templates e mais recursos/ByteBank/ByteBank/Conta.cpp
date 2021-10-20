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

std::variant<Conta::ResultadoSaque, float> Conta::sacar(float valorSaque)
{
	if (valorSaque <= 0)
	{
		return ResultadoSaque::ValorInvalido;
	}
	else if (valorSaque >= this->getSaldo() + (valorSaque * this->getTaxa()))
	{
		return ResultadoSaque::SaldoInsuficiente;
	}
	else 
	{
		this->saldo -= valorSaque + (valorSaque * this->getTaxa());
		return ResultadoSaque::Sucesso, this->getSaldo();
	}
	
}

void Conta::depositar(float valorDeposito)
{
	this->saldo += valorDeposito;
}

void Conta::operator+=(float valorDeposito)
{
	depositar(valorDeposito);
}

void Conta::transferir(Conta &destino, float valorTransferencia)
{
	auto saque = this->sacar(valorTransferencia);
	if (auto resultado = std::get_if<float>(&saque))
	{
		destino.depositar(valorTransferencia);
	}	
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
