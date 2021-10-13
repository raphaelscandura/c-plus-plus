#pragma once
#include <string>
class Titular
{
private:
	std::string nome;
	std::string cpf;

public:
	Titular();
	explicit Titular(std::string nome, std::string cpf);
	std::string getNome();
	std::string getCpf();
};