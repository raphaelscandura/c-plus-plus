#pragma once
#include "Conta.hpp"
class ContaPoupanca: public Conta
{
public:
	ContaPoupanca(std::string numero, std::string agencia, Titular titular);
};

