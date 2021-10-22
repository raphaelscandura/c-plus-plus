#include "Avaliador.hpp"
#include <vector>

void Avaliador::avalia(Leilao leilao)
{
	std::vector<Lance> lances = leilao.getLances();
	if (!lances.empty()) {
		this->maiorLance = lances.back().getValor();
		this->menorLance = lances.front().getValor();
	}	
}

float Avaliador::getMaiorLance() const
{
	return this->maiorLance;
}

float Avaliador::getMenorLance() const
{
	return this->menorLance;
}
