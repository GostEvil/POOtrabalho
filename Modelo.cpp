#include "Modelo.h"

Modelo::Modelo(int codigo, string descricao, double pvr, bool exclusivo)
    : codigo(codigo), descricao(descricao), pvr(pvr), exclusivo(exclusivo) {}

int Modelo::getCodigo() const {
    return codigo;
}

string Modelo::getDescricao() const {
    return descricao;
}

double Modelo::getPVR() const {
    return pvr;
}

bool Modelo::isExclusivo() const {
    return exclusivo;
}

void Modelo::setPVR(double novoPVR) {
    if (novoPVR >= 0) {
        pvr = novoPVR;
    }
}

bool Modelo::operator<(const Modelo& other) const {
    return codigo < other.codigo;
}

