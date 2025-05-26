#include "Sapataria.h"

Sapataria::Sapataria(int codigo, string localidade)
    : codigo(codigo), localidade(localidade) {}

int Sapataria::getCodigo() const {
    return codigo;
}

string Sapataria::getLocalidade() const {
    return localidade;
}

bool Sapataria::operator<(const Sapataria& other) const {
    return codigo < other.codigo;
}

