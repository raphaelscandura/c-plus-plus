#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string cpf, float salario, DiaDaSemana diaDoPagamento) :Pessoa(nome, cpf), salario(salario), diaDoPagamento(diaDoPagamento)
{
}

float Funcionario::getSalario() const
{
	return this->salario;
}
