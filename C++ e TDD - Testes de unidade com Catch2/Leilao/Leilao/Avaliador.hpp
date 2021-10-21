#pragma once
#include "Leilao.hpp"

class Avaliador
{
private:
	float maiorLance;
	float menorLance;
public:
	void avalia(Leilao);
	float getMaiorLance() const;
	float getMenorLance() const;
};