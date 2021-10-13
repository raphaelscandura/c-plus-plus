#pragma once
#include <string>
#include "Pessoa.hpp"
class Titular: public Pessoa
{
public:
	explicit Titular(std::string nome, std::string cpf);
};