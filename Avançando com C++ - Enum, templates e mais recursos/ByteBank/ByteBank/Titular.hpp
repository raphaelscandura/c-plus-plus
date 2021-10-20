#pragma once
#include <string>
#include "Pessoa.hpp"
#include "UsuarioAutenticavel.hpp"

class Titular: public Pessoa, UsuarioAutenticavel
{
public:
	explicit Titular(std::string nome, std::string cpf, std::string usuario, std::string senha);
};