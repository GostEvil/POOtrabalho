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
    pvr = prec;
}

bool Modelo::registarVenda(Venda *v)
{
    // Não há coleção de vendas, retorna sempre true
    return true;
}

void Modelo::print() const
{
    std::cout << "Modelo: " << descricao << " | PVR: " << pvr << " | Exclusivo: " << (exclusivo ? "Sim" : "Nao") << std::endl;
}

// Operador < global para Modelo (compara pela descricao)
bool operator<(const Modelo &a, const Modelo &b)
{
    return a.getDescricao() < b.getDescricao();
}
