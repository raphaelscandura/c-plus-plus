#pragma once
#include <string>
#include "Titular.hpp"
class Conta
{
private:
	std::string numero;
	std::string agencia;
	Titular titular;
	float saldo;
	static int quantidadeDeContas;
protected:
	float taxa;
public:
	explicit Conta(std::string numero, std::string agencia, Titular titular);
	~Conta();
	void sacar(float valorSaque);
	void depositar(float valorDeposito);
	void transferir(Conta destino, float valorTransferencia);
	float getTaxa() const;
	std::string getNumero() const;
	std::string getAgencia() const;
	Titular getTitular() const;
	float getSaldo() const;
	static int getQuantidadeDeContas();
private:
	void validaAgencia(std::string agencia);
};