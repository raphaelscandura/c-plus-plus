#include "Titular.hpp"

Titular::Titular(std::string nome, std::string cpf) :nome(nome), cpf(cpf)
{
}

Titular::Titular()
{
	this->nome = "";
	this->cpf = "";
}

std::string Titular::getNome()
{
	return this->nome;
}

std::string Titular::getCpf()
{
	return this->cpf;
}