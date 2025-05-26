#pragma once

#include "Sapataria.h"

class Exclusiva : public Sapataria {
public:
    Exclusiva(int codigo, string localidade);
    string getTipo() const override;
};
