#pragma once

#include "Modelo.h"
#include "Sapataria.h"
#include "Exclusiva.h"
#include "Concessionaria.h"
#include "Venda.h"
#include "ColecaoHibrida.h"
#include <string>
using namespace std;

class Camport
{
private:
    ColecaoHibrida<Modelo *> modelos;
    ColecaoHibrida<Sapataria *> sapatarias;
    ColecaoHibrida<Venda *> vendas;
    Modelo *findModelo(int ref);
    Sapataria *findSapataria(int i);

public:
    ~Camport();
    bool addModelo(string d, float p, bool sap);
    bool addExclusiva(string loc);
    bool addConcessionaria(string loc);
    bool setPVR(int ref, float prec);
    bool registarVenda(int ref, int sap, float prec, string dt);
    void printVendasSapataria(int i) const;
};
