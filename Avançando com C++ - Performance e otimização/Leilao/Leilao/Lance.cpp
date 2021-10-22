#include "Lance.hpp"

Lance::Lance(Usuario usuario, float valor): usuario(usuario), valor(valor)
{
}

float Lance::getValor() const
{
    return this->valor;
}

Usuario Lance::getUsuario() const
{
    return this->usuario;
}
