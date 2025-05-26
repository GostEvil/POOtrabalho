#include "Venda.h"
#include "Modelo.h"
#include "Sapataria.h"

Venda::Venda(int numero, string data, double precoFinal, Modelo* modelo, Sapataria* sapataria)
    : numero(numero), data(data), precoFinal(precoFinal), modelo(modelo), sapataria(sapataria) {}

int Venda::getNumero() const {
    return numero;
}

string Venda::getData() const {
    return data;
}

double Venda::getPrecoFinal() const {
    return precoFinal;
}

Modelo* Venda::getModelo() const {
    return modelo;
}

Sapataria* Venda::getSapataria() const {
    return sapataria;
}

bool Venda::operator<(const Venda& other) const {
    return numero < other.numero;
}
