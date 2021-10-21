#define CATCH_CONFIG_MAIN
#include "catch2.hpp"
#include "Avaliador.hpp"

TEST_CASE("Valida��es da classe Avaliador")
{
	Leilao leilao("Televis�o");
	Lance primeiroLance(Usuario("Rafael Bragan�a"), 100);
	Lance segundoLance(Usuario("Joaquim Ramos"), 150);
	Lance terceiroLance(Usuario("Joana Blues"), 50);
	leilao.recebeLance(primeiroLance);
	leilao.recebeLance(segundoLance);
	leilao.recebeLance(terceiroLance);

	Avaliador leiloeiro;
	leiloeiro.avalia(leilao);

	SECTION("Deve recuperar maior lance dado no leilao")
	{
		REQUIRE(leiloeiro.getMaiorLance() == 150);
	}

	SECTION("Deve recuperar menor lance dado no leilao")
	{
		REQUIRE(leiloeiro.getMenorLance() == 100);
	}

	SECTION("Deve proibir que um lance seja dado com valor menor do que o lance atual")
	{
		REQUIRE(leilao.getLances().size() == 2);
	}
}

TEST_CASE("Valida��es da classe Leil�o")
{
	Leilao leilao("Televis�o");

	SECTION("Deve proibir lances menores ou iguais a zero")
	{
		Lance lanceNegativo(Usuario("Rafael Bragan�a"), -1);
		leilao.recebeLance(lanceNegativo);
		Lance lanceNulo(Usuario("Joaquim Ramos"), 0);
		leilao.recebeLance(lanceNulo);

		REQUIRE(leilao.getLances().empty());
	}	

	SECTION("Deve proibir que a mesma pessoa d� dois lances em sequ�ncia")
	{
		Usuario joaquim("Joaquim Ramos");

		Lance primeiroLance(joaquim, 150);
		Lance segundoLance(joaquim, 1500);

		leilao.recebeLance(primeiroLance);
		leilao.recebeLance(segundoLance);

		REQUIRE(leilao.getLances().size() == 1);
	}
}