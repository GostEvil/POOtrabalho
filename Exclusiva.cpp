#include "Exclusiva.h"
#include <iostream>

Exclusiva::Exclusiva(int i, std::string loc)
    : Sapataria(i, loc) {}

bool Exclusiva::registarVenda(Modelo *m, float preco, std::string dt)
{
    // Implementação fictícia
    return true;
}

void Exclusiva::printVendas() const
{
    std::cout << "Vendas da Exclusiva em " << localizacao << std::endl;
}
