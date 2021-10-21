#define CATCH_CONFIG_MAIN
#include "catch2.hpp"
#include "Avaliador.hpp"

TEST_CASE("Deve recuperar maior lance dado no leilao")
{
	Leilao leilao("Televisão");
	Lance primeiroLance(Usuario("Rafael Bragança"), 100);
	Lance segundoLance(Usuario("Joaquim Ramos"), 150);
	leilao.recebeLance(primeiroLance);
	leilao.recebeLance(segundoLance);

	Avaliador leiloeiro;
	leiloeiro.avalia(leilao);	

	REQUIRE(leiloeiro.getMaiorLance() == 150);
}

TEST_CASE("Deve recuperar menor lance dado no leilao")
{
	Leilao leilao("Televisão");
	Lance primeiroLance(Usuario("Rafael Bragança"), 100);
	Lance segundoLance(Usuario("Joaquim Ramos"), 150);
	leilao.recebeLance(primeiroLance);
	leilao.recebeLance(segundoLance);

	Avaliador leiloeiro;
	leiloeiro.avalia(leilao);

	REQUIRE(leiloeiro.getMenorLance() == 100);
}

TEST_CASE("Deve proibir que um lance seja dado com valor menor do que o lance atual")
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

	REQUIRE(leiloeiro.getMaiorLance() == 150);
	REQUIRE(leiloeiro.getMenorLance() == 100);
}