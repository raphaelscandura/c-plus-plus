#include "UsuarioAutenticavel.hpp"

UsuarioAutenticavel::UsuarioAutenticavel(std::string usuario, std::string senha): usuario(usuario), senha(senha)
{
	validaSenha(senha);
}

void UsuarioAutenticavel::validaSenha(std::string senha) const
{
	if (senha.size() < 6)
	{
		std::cout << "Senha curta demais, por favor, insira uma senha maior" << std::endl;
		exit(1);
	}
}

bool UsuarioAutenticavel::autenticaLogin(std::string usuario, std::string senha) const
{
	return usuario == this->usuario && senha == this->senha;
}