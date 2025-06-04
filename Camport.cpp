#include "Camport.h"
#include <iostream>

static int nextModeloRef = 0;
static int nextSapatariaId = 0;
static int nextVendaId = 0;

Camport::~Camport()
{
    // Delete all vendas
    for (auto it = vendas.begin(); it != vendas.end(); ++it)
    {
        delete *it;
    }

    // Delete all sapatarias
    for (auto it = sapatarias.begin(); it != sapatarias.end(); ++it)
    {
        delete *it;
    }

    // Delete all modelos
    for (auto it = modelos.begin(); it != modelos.end(); ++it)
    {
        delete *it;
    }
}

bool Camport::addModelo(std::string d, float p, bool sap)
{
    Modelo *m = new Modelo(nextModeloRef, d, p, sap);
    bool res = modelos.insert(m);
    if (res)
        nextModeloRef++;
    else
        delete m;
    return res;
}

bool Camport::addExclusiva(std::string loc)
{
    Sapataria *e = new Exclusiva(nextSapatariaId, loc);
    bool res = sapatarias.insert(e);
    if (res)
        nextSapatariaId++;
    else
        delete e;
    return res;
}

bool Camport::addConcessionaria(std::string loc)
{
    Sapataria *c = new Concessionaria(nextSapatariaId, loc);
    bool res = sapatarias.insert(c);
    if (res)
        nextSapatariaId++;
    else
        delete c;
    return res;
}

bool Camport::setPVR(int ref, float prec)
{
    Modelo *m = findModelo(ref);
    if (m)
    {
        m->setPVR(prec);
        return true;
    }
    return false;
}

bool Camport::registarVenda(int ref, int sap, float prec, std::string dt)
{
    Modelo *m = findModelo(ref);
    Sapataria *s = findSapataria(sap);

    if (!m || !s)
        return false;
    if (prec < m->getPVR())
        return false;
    if (m->modeloExclusivo() && dynamic_cast<Concessionaria *>(s) != nullptr)
        return false;

    Venda *v = new Venda(nextVendaId, prec, dt, m, s);
    if (!vendas.insert(v))
    {
        delete v;
        return false;
    }
    nextVendaId++;

    m->registarVenda(v);
    s->registarVenda(m, prec, dt);

    return true;
}

void Camport::printVendasSapataria(int i) const
{
    Sapataria *s = const_cast<Camport *>(this)->findSapataria(i);
    if (s)
    {
        s->printVendas();
    }
    else
    {
        std::cout << "Sapataria com id " << i << " não encontrada.\n";
    }
}

Modelo *Camport::findModelo(int ref)
{
    for (auto it = modelos.begin(); it != modelos.end(); ++it)
    {
        if ((*it)->getPVR() == ref)
        {
            return *it;
        }
    }
    return nullptr;
}

Sapataria *Camport::findSapataria(int i)
{
    for (auto it = sapatarias.begin(); it != sapatarias.end(); ++it)
    {
        if ((*it)->getId() == i)
        {
            return *it;
        }
    }
    return nullptr;
}
