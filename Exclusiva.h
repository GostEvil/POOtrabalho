#pragma once

#include "Sapataria.h"

class Exclusiva : public Sapataria
{
public:
    Exclusiva(int i, string loc);
    bool registarVenda(Modelo *m, float preco, string dt) override;
    void printVendas() const override;
};
