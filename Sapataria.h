#pragma once

#include <string>
using namespace std;

class Modelo;

class Sapataria
{
protected:
    int id;
    string localizacao;

public:
    Sapataria(int i, string loc);
    virtual bool registarVenda(Modelo *m, float preco, string dt);
    virtual void printVendas() const;
};
