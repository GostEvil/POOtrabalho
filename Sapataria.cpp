#include "Sapataria.h"
#include <iostream>

Sapataria::Sapataria(int i, string loc)
    : id(i), localizacao(loc) {}

bool Sapataria::registarVenda(Modelo *m, float preco, string dt)
{
    // Implementação fictícia
    return true;
}

void Sapataria::printVendas() const
{
    // Implementação fictícia
    std::cout << "Vendas da sapataria " << id << " em " << localizacao << std::endl;
}
