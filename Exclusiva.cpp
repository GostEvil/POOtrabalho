#include "Exclusiva.h"

Exclusiva::Exclusiva(int codigo, string localidade)
    : Sapataria(codigo, localidade) {}

string Exclusiva::getTipo() const {
    return "Exclusiva";
}
