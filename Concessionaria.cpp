#include "Concessionaria.h"

Concessionaria::Concessionaria(int codigo, string localidade)
    : Sapataria(codigo, localidade) {}

string Concessionaria::getTipo() const {
    return "Concessionaria";
}

