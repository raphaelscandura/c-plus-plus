#pragma once
#include "Funcionario.hpp"
#include "UsuarioAutenticavel.hpp"

class Gerente : public Funcionario, UsuarioAutenticavel
{
public:
	Gerente(std::string nome, std::string cpf, float salario, std::string usuario, std::string senha);
	float bonificacao() const;
};

