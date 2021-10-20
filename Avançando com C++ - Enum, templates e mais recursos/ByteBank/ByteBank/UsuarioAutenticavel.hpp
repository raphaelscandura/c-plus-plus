#pragma once
#include <string>
#include <iostream>
class UsuarioAutenticavel
{
private:
	std::string usuario;
	std::string senha;
public:
	UsuarioAutenticavel(std::string usuario, std::string senha);
	void validaSenha(std::string senha) const;
	bool autenticaLogin(std::string usuario, std::string senha) const;
};

