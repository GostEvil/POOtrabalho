#pragma once

#include "Sapataria.h"

class Concessionaria : public Sapataria
{
public:
    Concessionaria(int i, string loc);
    bool registarVenda(Modelo *m, float preco, string dt) override; //! tirar override
    void printVendas() const override;
};
