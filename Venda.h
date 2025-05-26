#pragma once

#include <string>
using namespace std;

class Modelo;
class Sapataria;

class Venda {
private:
    int numero;
    string data;
    double precoFinal;
    Modelo* modelo;
    Sapataria* sapataria;
public:
    Venda(int numero, string data, double precoFinal, Modelo* modelo, Sapataria* sapataria);
    int getNumero() const;
    string getData() const;
    double getPrecoFinal() const;
    Modelo* getModelo() const;
    Sapataria* getSapataria() const;
    bool operator<(const Venda& other) const;
};

