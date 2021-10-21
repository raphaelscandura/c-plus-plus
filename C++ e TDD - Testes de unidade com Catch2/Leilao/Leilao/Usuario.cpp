#include "Usuario.hpp"

Usuario::Usuario(std::string nome): nome(nome)
{
}

std::string Usuario::getNome() const
{
    return this->nome;
}