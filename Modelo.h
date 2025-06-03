#pragma once

#include <string>
using namespace std;

class Venda; // Forward declaration

class Modelo
{
private:
    int ref;
    string descricao;
    float pvr;
    bool exclusivo;

public:
    Modelo(int r, string d, float p, bool e);
    float getPVR() const;
    string getDescricao() const;
    bool modeloExclusivo() const;
    void setPVR(float prec);
    bool registarVenda(Venda *v);
    void print() const;
};
