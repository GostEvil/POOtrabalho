#include "Sapataria.h"
#include <iostream>

Sapataria::Sapataria(int i, std::string loc)
    : id(i), localizacao(loc) {}

bool Sapataria::registarVenda(Modelo *m, float preco, std::string dt)
{
    // Não há coleção de vendas, retorna sempre true
    return true;
}

void Sapataria::printVendas() const
{
    std::cout << "Vendas da sapataria em " << localizacao << std::endl;
}

// Operador < global para Sapataria (compara pela localizacao)
bool operator<(const Sapataria &a, const Sapataria &b)
{
    return a.localizacao < b.localizacao;
}
