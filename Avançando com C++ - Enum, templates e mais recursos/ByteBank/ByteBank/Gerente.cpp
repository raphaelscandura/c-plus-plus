#include "Gerente.hpp"

Gerente::Gerente(std::string nome, std::string cpf, float salario, std::string usuario, std::string senha) : Funcionario(nome, cpf, salario), UsuarioAutenticavel(usuario, senha)
{
}

float Gerente::bonificacao() const
{
	return this->getSalario() * 0.2;
}