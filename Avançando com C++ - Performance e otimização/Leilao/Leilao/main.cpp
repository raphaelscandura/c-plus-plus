#include <iostream>
#include <string>
#include <locale.h>

void* operator new(size_t bytes)
{
	std::cout << "Alocando " << bytes << " bytes na heap" << std::endl;
	return malloc(bytes);
}

int main()
{
	setlocale(LC_ALL, "pt-BR");
	//Small String Optimization - SSO (até 22 caracteres)
	//const char* nomeCompletoChar = "Bruna Braga Bertioga Bragança Brasiliana";
	//std::cout << "----------" << std::endl;
	//std::string nomeCompleto = "Bruna Braga Bertioga Bragança Brasiliana";

	std::string cidades = "Rio de Janeiro & Curitiba";

	std::string_view primeiraCidade(cidades.c_str(), cidades.find('&') - 1);
	std::string_view segundaCidade(cidades.c_str() + cidades.find('&') + 2);

	std::cout << "A primeira cidade é: " << primeiraCidade << "\nA segunda cidade é: " << segundaCidade << std::endl;	
	
	return 0;
}