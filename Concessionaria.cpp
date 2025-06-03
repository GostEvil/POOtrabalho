#include "Concessionaria.h"
#include <iostream>

Concessionaria::Concessionaria(int i, string loc)
    : Sapataria(i, loc) {}

bool Concessionaria::registarVenda(Modelo *m, float preco, string dt)
{
    // Implementação fictícia
    return true;
}

void Concessionaria::printVendas() const
{
    std::cout << "Vendas da Concessionaria em " << localizacao << std::endl;
}

string Concessionaria::getTipo() const
{
    return "Concessionaria";
}
