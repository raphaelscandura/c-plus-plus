#include "Pessoa.hpp"

Pessoa::Pessoa(std::string nome, std::string cpf) :nome(nome), cpf(cpf)
{
}

Pessoa::Pessoa()
{
	this->nome = "";
	this->cpf = "";
}

std::string Pessoa::getNome()
{
	return this->nome;
}

std::string Pessoa::getCpf()
{
	return this->cpf;
}