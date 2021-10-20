#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string cpf, float salario) :Pessoa(nome, cpf), salario(salario)
{
}

float Funcionario::getSalario() const
{
	return this->salario;
}
