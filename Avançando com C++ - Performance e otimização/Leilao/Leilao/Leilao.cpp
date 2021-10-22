#include "Leilao.hpp"
#include <iostream>

Leilao::Leilao(std::string descricao): descricao(descricao)
{
    
}

const std::vector<Lance>& Leilao::getLances() const
{
    return this->lances;
}

bool Leilao::primeiroLance() const
{
    return this->getLances().empty();
}
   

void Leilao::recebeLance(const Lance& lance)
{
    if (lance.getValor() <= 0) 
    {
        return;
    }
    else if (!this->primeiroLance() && this->getLances().back().getUsuario().getNome() == lance.getUsuario().getNome())
    {
        return;
    }
    else
    {
        if (this->primeiroLance())
        {
            lances.push_back(lance);
        }
        else if (lance.getValor() > this->getLances().back().getValor())
        {
            lances.push_back(lance);
        }
    }
    
}
