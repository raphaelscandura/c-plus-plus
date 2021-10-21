#include "Avaliador.hpp"
#include <vector>

void Avaliador::avalia(Leilao leilao)
{
	std::vector<Lance> lances = leilao.recuperaLances();
	this->maiorLance = lances.back().recuperaValor();
}

float Avaliador::getMaiorLance() const
{
	return this->maiorLance;
}
