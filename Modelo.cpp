#include "Modelo.h"
using namespace std;

Modelo::Modelo(int r, string d, float p, bool e)
    : ref(r), descricao(d), pvr(p), exclusivo(e) {}

float Modelo::getPVR() const
{
    return pvr;
}

string Modelo::getDescricao() const
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
    // Implementação fictícia, pois não há detalhes
    return true;
}

void Modelo::print() const
{
    // Exemplo de print
    std::cout << "Modelo #" << ref << ": " << descricao << " | PVR: " << pvr << " | Exclusivo: " << (exclusivo ? "Sim" : "Nao") << std::endl;
}
