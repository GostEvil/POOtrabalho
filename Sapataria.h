#pragma once

#include <string>
using namespace std;

class Modelo;

class Sapataria
{
private:
    int id;

protected:
    string localizacao;

public:
    Sapataria(int i, string loc);
    virtual bool registarVenda(Modelo *m, float preco, string dt);
    virtual void printVendas() const;
    int getId() const { return id; }
    virtual bool operator<(const Sapataria &s) const { return id < s.id; }
};
