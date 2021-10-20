#pragma once
#include <string>
#include <utility>
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
	float taxa = 0;
public:
	enum class ResultadoSaque
	{
		Sucesso, ValorInvalido, SaldoInsuficiente
	};
	explicit Conta(std::string numero, std::string agencia, Titular& titular);
	~Conta();
	std::pair<ResultadoSaque, float> sacar(float valorSaque);
	void depositar(float valorDeposito);
	void operator+=(float valorDeposito);
	void transferir(Conta& destino, float valorTransferencia);
	float getTaxa() const;
	std::string getNumero() const;
	std::string getAgencia() const;
	Titular getTitular() const;
	float getSaldo() const;
	static int getQuantidadeDeContas();
	friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);
private:
	void validaAgencia(std::string agencia);
};