#include "Avaliador.hpp"
#include <vector>

void Avaliador::avalia(Leilao leilao)
{
	std::vector<Lance> lances = leilao.recuperaLances();
	if (!lances.empty()) {
		this->maiorLance = lances.back().recuperaValor();
		this->menorLance = lances.front().recuperaValor();
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
