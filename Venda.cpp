#include "Venda.h"
#include <iostream>

Venda::Venda(int i, float prec, std::string d, Modelo *m, Sapataria *s)
    : id(i), preco(prec), data(d) {}

void Venda::print() const
{
    std::cout << "Venda #" << id << ": " << preco << "€ em " << data << std::endl;
}
