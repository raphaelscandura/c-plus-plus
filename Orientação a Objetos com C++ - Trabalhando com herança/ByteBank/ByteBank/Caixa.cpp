#include "Caixa.hpp"

Caixa::Caixa(std::string nome, std::string cpf, float salario, std::string usuario, std::string senha) : Funcionario(nome, cpf, salario), UsuarioAutenticavel(usuario, senha)
{
}

float Caixa::bonificacao() const
{
	return this->getSalario() * 0.1;
}