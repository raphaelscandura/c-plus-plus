#pragma once
#include "Funcionario.hpp"
class Gerente : public Funcionario
{
public:
	Gerente(std::string nome, std::string cpf, float salario);
	float bonificacao() const;
};

