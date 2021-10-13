#pragma once
#include <string>
#include "Pessoa.hpp"
class Titular: public Pessoa
{
private:
	std::string nome;
	std::string cpf;

public:
	explicit Titular(std::string nome, std::string cpf);
};