#include "Concessionaria.h"
#include <iostream>

Concessionaria::Concessionaria(int i, std::string loc)
    : Sapataria(i, loc) {}

bool Concessionaria::registarVenda(Modelo *m, float preco, std::string dt)
{
    // Implementação fictícia
    return true;
}

void Concessionaria::printVendas() const
{
    std::cout << "Vendas da Concessionaria em " << localizacao << std::endl;
}
