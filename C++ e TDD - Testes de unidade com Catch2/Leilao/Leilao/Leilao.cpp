#include "Leilao.hpp"

Leilao::Leilao(std::string descricao): descricao(descricao)
{
    
}

const std::vector<Lance>& Leilao::recuperaLances() const
{
    return lances;
}

bool Leilao::primeiroLance() const
{
    return this->recuperaLances().empty();
}
   

void Leilao::recebeLance(const Lance& lance)
{
    if (lance.recuperaValor() > 0) {
        if (this->primeiroLance())
        {
            lances.push_back(lance);
        }
        else if (lance.recuperaValor() > this->recuperaLances().back().recuperaValor())
        {
            lances.push_back(lance);
        }
    }
    
}
