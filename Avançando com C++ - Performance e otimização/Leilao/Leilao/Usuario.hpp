#pragma once
#include <string>

class Usuario
{
private:
    std::string nome;
public:
    Usuario(std::string);
    std::string getNome() const;
};