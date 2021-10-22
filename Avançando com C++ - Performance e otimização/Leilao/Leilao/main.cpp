#include <iostream>
#include <string>
#include <locale.h>
#include <memory>
#include "Usuario.hpp"

void* operator new(size_t bytes)
{
	std::cout << "Alocando " << bytes << " bytes na heap" << std::endl;
	return malloc(bytes);
}

void exibeNomeUsuario(std::shared_ptr<Usuario> usuario)
{
	std::cout << usuario->getNome() << std::endl;
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

	//Testando smart pointers - unique_ptr, shared_ptr
	std::shared_ptr<Usuario> usuario = std::make_shared<Usuario>(Usuario("Bananinha Gomes"));
	exibeNomeUsuario(usuario);
	
	return 0;
}