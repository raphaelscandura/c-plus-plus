#include "ContaCorrente.hpp"
#include <string>

ContaCorrente::ContaCorrente(std::string numero, std::string agencia, Titular& titular) : Conta(numero, agencia, titular)
{
	this->taxa = 0.05;
}
