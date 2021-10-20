#pragma once
#include <string>
#include "Pessoa.hpp"
#include "DiaDaSemana.hpp"

class Funcionario: public Pessoa
{
private:
	float salario;
	DiaDaSemana diaDoPagamento;

public:
	explicit Funcionario(std::string nome, std::string cpf, float salario, DiaDaSemana diaDoPagamento);
	float getSalario() const;
	virtual float bonificacao() const = 0;
};

