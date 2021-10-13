#pragma once
#include "Conta.hpp"
class ContaCorrente: public Conta
{
public:
	ContaCorrente(std::string numero, std::string agencia, Titular titular);
};

