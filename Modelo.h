#pragma once

#include <string>
using namespace std;

class Modelo {
private:
    int codigo;
    string descricao;
    double pvr;
    bool exclusivo;
public:
    Modelo(int codigo, string descricao, double pvr, bool exclusivo);
    int getCodigo() const;
    string getDescricao() const;
    double getPVR() const;
    bool isExclusivo() const;
    void setPVR(double novoPVR);
    bool operator<(const Modelo& other) const;
};
