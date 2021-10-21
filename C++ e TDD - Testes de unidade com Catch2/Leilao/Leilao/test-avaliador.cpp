#include "Avaliador.hpp"
#include <iostream>

int main()
{
	Leilao leilao("Televisão");
	Lance primeiroLance(Usuario("Rafael Bragança"), 100);
	Lance segundoLance(Usuario("Joaquim Ramos"), 150);
	Lance terceiroLance(Usuario("Joana Blues"), 50);
	leilao.recebeLance(primeiroLance);
	leilao.recebeLance(segundoLance);
	leilao.recebeLance(terceiroLance);

	Avaliador leiloeiro;
	leiloeiro.avalia(leilao);	

	std::cout << leiloeiro.getMaiorLance() << std::endl;

	return 0;
}