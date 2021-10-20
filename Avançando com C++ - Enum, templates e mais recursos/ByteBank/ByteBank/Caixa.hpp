#pragma once
#include "Funcionario.hpp"
#include "UsuarioAutenticavel.hpp"

class Caixa : public Funcionario, UsuarioAutenticavel
{
public:
	Caixa(std::string nome, std::string cpf, float salario, std::string usuario, std::string senha, DiaDaSemana diaDoPagamento);
	float bonificacao() const;
};

