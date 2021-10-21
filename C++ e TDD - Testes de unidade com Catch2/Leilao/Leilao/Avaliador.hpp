#pragma once
#include "Leilao.hpp"

class Avaliador
{
private:
	float maiorLance;
public:
	void avalia(Leilao);
	float getMaiorLance() const;
};