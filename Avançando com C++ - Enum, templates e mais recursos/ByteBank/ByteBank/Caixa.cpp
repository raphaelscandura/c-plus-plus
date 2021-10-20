#include "Caixa.hpp"

Caixa::Caixa(std::string nome, std::string cpf, float salario, std::string usuario, std::string senha, DiaDaSemana diaDoPagamento) : Funcionario(nome, cpf, salario, diaDoPagamento), UsuarioAutenticavel(usuario, senha)
{
}

float Caixa::bonificacao() const
{
	return this->getSalario() * 0.1;
}