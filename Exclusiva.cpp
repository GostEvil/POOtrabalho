#include "Exclusiva.h"
#include <iostream>

Exclusiva::Exclusiva(int codigo, string localidade)
    : Sapataria(codigo, localidade) {}

string Exclusiva::getTipo() const
{
    return "Exclusiva";
}

bool Exclusiva::registarVenda(Modelo *m, float preco, string dt)
{
    // Implementação fictícia
    return true;
}

void Exclusiva::printVendas() const
{
    std::cout << "Vendas da Exclusiva em " << localizacao << std::endl;
}
