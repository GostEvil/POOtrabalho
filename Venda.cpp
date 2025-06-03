#include "Venda.h"
#include <iostream>

Venda::Venda(int i, float prec, string d, Modelo *m, Sapataria *s)
    : id(i), preco(prec), data(d)
{
    // Se precisares de guardar Modelo* ou Sapataria*, tens de adicionar atributos no .h
    // Mas como só podes ter id, preco, data, não guardes ponteiros!
}

void Venda::print() const
{
    std::cout << "Venda #" << id << ": " << preco << "€ em " << data << std::endl;
}
