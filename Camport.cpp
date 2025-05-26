#include "Camport.h"
#include "Exclusiva.h"
#include "Concessionaria.h"
#include <iostream>

Modelo* Camport::adicionarModelo(string descricao, double pvr, bool exclusivo) {
    static int id = 1;
    Modelo m(id++, descricao, pvr, exclusivo);
    if (modelos.insert(m)) {
        return modelos.find(m);
    }
    return nullptr;
}

Sapataria* Camport::adicionarSapataria(string tipo, string localidade) {
    static int id = 1;
    Sapataria* s = nullptr;
    if (tipo == "Exclusiva") {
        s = new Exclusiva(id++, localidade);
    } else if (tipo == "Concessionaria") {
        s = new Concessionaria(id++, localidade);
    }
    if (s && sapatarias.insert(s)) {
        return s;
    }
    delete s;
    return nullptr;
}

bool Camport::atualizarPVR(int codigoModelo, double novoPVR) {
    Modelo* m = encontrarModelo(codigoModelo);
    if (m) {
        m->setPVR(novoPVR);
        return true;
    }
    return false;
}

bool Camport::registarVenda(int codigoModelo, int codigoSapataria, string data, double precoFinal) {
    static int id = 1;
    Modelo* m = encontrarModelo(codigoModelo);
    Sapataria* s = encontrarSapataria(codigoSapataria);
    if (!m || !s) return false;
    if (precoFinal < m->getPVR()) return false;
    if (m->isExclusivo() && s->getTipo() == "Concessionaria") return false;

    Venda v(id++, data, precoFinal, m, s);
    return vendas.insert(v);
}

void Camport::listarVendasSapataria(int codigoSapataria) const {
    for (Sapataria* s : sapatarias) {
        if (s->getCodigo() == codigoSapataria) {
            cout << "Localidade: " << s->getLocalidade() << " | Tipo: " << s->getTipo() << endl;
            for (Venda v : vendas) {
                if (v.getSapataria()->getCodigo() == codigoSapataria) {
                    Modelo* m = v.getModelo();
                    cout << "Venda #" << v.getNumero() << " | Preco: " << v.getPrecoFinal() << " | Data: " << v.getData() << endl;
                    cout << "  Modelo: " << m->getCodigo() << " - " << m->getDescricao()
                         << " | Exclusivo: " << (m->isExclusivo() ? "Sim" : "Nao") << endl;
                }
            }
            return;
        }
    }
    cout << "Sapataria nao encontrada." << endl;
}

Modelo* Camport::encontrarModelo(int codigo) {
    Modelo m(codigo, "", 0, false);
    return modelos.find(m);
}

Sapataria* Camport::encontrarSapataria(int codigo) {
    for (Sapataria* s : sapatarias) {
        if (s->getCodigo() == codigo) return s;
    }
    return nullptr;
}
