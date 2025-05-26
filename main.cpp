#include <iostream>
#include "Camport.h"

int main() {
    Camport sistema;

    // Adicionar sapatarias
    Sapataria* s1 = sistema.adicionarSapataria("Exclusiva", "Porto");
    Sapataria* s2 = sistema.adicionarSapataria("Concessionaria", "Lisboa");

    // Adicionar modelos
    Modelo* m1 = sistema.adicionarModelo("Sapato Clássico", 80.0, false);
    Modelo* m2 = sistema.adicionarModelo("Botas Luxo", 120.0, true); // exclusivo
    
    // Atualizar PVR
    sistema.atualizarPVR(m1->getCodigo(), 85.0);

    // Registar vendas válidas
    sistema.registarVenda(m1->getCodigo(), s1->getCodigo(), "2025-05-20", 90.0); // OK
    sistema.registarVenda(m2->getCodigo(), s1->getCodigo(), "2025-05-21", 130.0); // OK
    sistema.registarVenda(m1->getCodigo(), s2->getCodigo(), "2025-05-22", 85.0); // OK

    // Tentativa inválida: venda abaixo do PVR
    if (!sistema.registarVenda(m1->getCodigo(), s2->getCodigo(), "2025-05-23", 50.0)) {
        cout << "Venda rejeitada: preço abaixo do PVR." << endl;
    }

    // Tentativa inválida: venda de modelo exclusivo numa concessionária
    if (!sistema.registarVenda(m2->getCodigo(), s2->getCodigo(), "2025-05-24", 130.0)) {
        cout << "Venda rejeitada: modelo exclusivo não permitido nesta sapataria." << endl;
    }

    // Listar vendas da sapataria do Porto
    cout << "\n--- Vendas na sapataria do Porto ---\n";
    sistema.listarVendasSapataria(s1->getCodigo());

    // Listar vendas da sapataria de Lisboa
    cout << "\n--- Vendas na sapataria de Lisboa ---\n";
    sistema.listarVendasSapataria(s2->getCodigo());

    return 0;
}
