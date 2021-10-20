#include "Titular.hpp"
#include <string>

Titular::Titular(std::string nome, std::string cpf, std::string usuario, std::string senha): Pessoa(cpf, nome), UsuarioAutenticavel(usuario, senha)
{
}