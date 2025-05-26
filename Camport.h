#pragma once

#include "Modelo.h"
#include "Sapataria.h"
#include "Venda.h"
#include "Colecao.h"
#include <string>
using namespace std;

class Camport {
private:
    Colecao<Modelo> modelos;
    Colecao<Sapataria*> sapatarias;
    Colecao<Venda> vendas;
public:
    Modelo* adicionarModelo(string descricao, double pvr, bool exclusivo);
    Sapataria* adicionarSapataria(string tipo, string localidade); // tipo: "Exclusiva" ou "Concessionaria"
    bool atualizarPVR(int codigoModelo, double novoPVR);
    bool registarVenda(int codigoModelo, int codigoSapataria, string data, double precoFinal);
    void listarVendasSapataria(int codigoSapataria) const;
    Modelo* encontrarModelo(int codigo);
    Sapataria* encontrarSapataria(int codigo);
};

