#pragma once
#include "Usuario.hpp"

class Lance
{
private:
    Usuario usuario;
    float valor;
public:
    Lance(Usuario usuario, float valor);
    float getValor() const;
    Usuario getUsuario() const;
};