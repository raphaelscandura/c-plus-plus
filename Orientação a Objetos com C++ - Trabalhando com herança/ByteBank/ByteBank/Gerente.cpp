#include "Gerente.hpp"

Gerente::Gerente(std::string nome, std::string cpf, float salario) : Funcionario(nome, cpf, salario)
{
}

float Gerente::bonificacao() const
{
	return this->getSalario() * 0.2;
}