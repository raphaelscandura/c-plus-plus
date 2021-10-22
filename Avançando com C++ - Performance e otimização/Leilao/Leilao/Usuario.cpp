#include "Usuario.hpp"
#include <iostream>

Usuario::Usuario(std::string nome): nome(nome)
{
}

std::string Usuario::getNome() const
{
    return this->nome;
}