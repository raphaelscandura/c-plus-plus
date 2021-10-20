#pragma once
#include <string>
#include "Pessoa.hpp"

class Funcionario: public Pessoa
{
private:
	float salario;

public:
	explicit Funcionario(std::string nome, std::string cpf, float salario);
	float getSalario() const;
	virtual float bonificacao() const = 0;
};

