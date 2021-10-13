#pragma once
#include <string>
class Pessoa
{
private:
	std::string nome;
	std::string cpf;

public:
	Pessoa();
	explicit Pessoa(std::string nome, std::string cpf);
	std::string getNome();
	std::string getCpf();
};

