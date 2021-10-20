#include "Caixa.hpp"

Caixa::Caixa(std::string nome, std::string cpf, float salario) : Funcionario(nome, cpf, salario)
{
}

float Caixa::bonificacao() const
{
	return this->getSalario() * 0.1;
}