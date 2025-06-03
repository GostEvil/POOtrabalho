#pragma once

#include <string>
using namespace std;

class Modelo;
class Sapataria;

class Venda
{
private:
    int id;
    float preco;
    string data;

public:
    Venda(int i, float prec, string d, Modelo *m, Sapataria *s);
    void print() const;
};
