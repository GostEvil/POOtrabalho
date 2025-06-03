#include "Modelo.h"
#include <iostream>

Modelo::Modelo(int r, std::string d, float p, bool e)
    : ref(r), descricao(d), pvr(p), exclusivo(e) {}

float Modelo::getPVR() const
{
    return pvr;
}

std::string Modelo::getDescricao() const
{
    return descricao;
}

bool Modelo::modeloExclusivo() const
{
    return exclusivo;
}

void Modelo::setPVR(float prec)
{
    if (prec >= 0)
        pvr = prec;
}

bool Modelo::registarVenda(Venda *v)
{
    // Implementação fictícia
    return true;
}

void Modelo::print() const
{
    std::cout << "Modelo #" << ref << ": " << descricao << " | PVR: " << pvr << " | Exclusivo: " << (exclusivo ? "Sim" : "Nao") << std::endl;
}
