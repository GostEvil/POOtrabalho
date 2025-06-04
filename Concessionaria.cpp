#include "Concessionaria.h"
#include <iostream>

Concessionaria::Concessionaria(int i, std::string loc)
    : Sapataria(i, loc) {}

bool Concessionaria::registarVenda(Modelo *m, float preco, std::string dt)
{
    // Não há coleção de vendas, retorna sempre true
    return true;
}

void Concessionaria::printVendas() const
{
    std::cout << "Vendas da Concessionaria em " << localizacao << std::endl;
}
