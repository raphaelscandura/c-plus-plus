#pragma once
#include <string>
template<typename Documento> class Pessoa
{
private:
	std::string nome;
	std::string cpf;

public:
	Pessoa()
	{
		this->nome = "";
		this->cpf = "";
	}
	Pessoa(std::string nome, std::string cpf) : nome(nome), cpf(cpf)
	{
	}
	std::string getNome()
	{
		return this->nome;
	}
	std::string getCpf()
	{
		return this->cpf;
	}
};

