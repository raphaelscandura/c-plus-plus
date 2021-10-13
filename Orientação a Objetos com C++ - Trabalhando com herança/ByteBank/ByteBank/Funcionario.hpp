#pragma once
#include <string>
class Funcionario
{
private:
	std::string nome;
	std::string cpf;

public:
	Funcionario();
	explicit Funcionario(std::string nome, std::string cpf);
	std::string getNome();
	std::string getCpf();
};

