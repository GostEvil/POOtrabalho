#pragma once

#include <string>
using namespace std;

class Sapataria {
protected:
    int codigo;
    string localidade;
public:
    Sapataria(int codigo, string localidade);
    int getCodigo() const;
    string getLocalidade() const;
    virtual string getTipo() const = 0; // Exclusiva / Concessionaria
    virtual ~Sapataria() {}
    bool operator<(const Sapataria& other) const;
};
