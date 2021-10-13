#include "Funcionario.hpp"

Funcionario::Funcionario()
{
	this->nome = "";
	this->cpf = "";
}

Funcionario::Funcionario(std::string nome, std::string cpf) :nome(nome), cpf(cpf)
{
}

std::string Funcionario::getNome()
{
	return this->nome;
}

std::string Funcionario::getCpf()
{
	return this->cpf;
}
