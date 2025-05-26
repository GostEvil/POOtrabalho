#pragma once

#include "Sapataria.h"

class Concessionaria : public Sapataria {
public:
    Concessionaria(int codigo, string localidade);
    string getTipo() const override;
};
