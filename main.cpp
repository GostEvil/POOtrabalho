#include <iostream>
#include "Camport.h"

int main()
{
    Camport sistema;

    // Adicionar sapatarias
    sistema.addExclusiva("Porto");
    sistema.addConcessionaria("Lisboa");

    // Adicionar modelos
    sistema.addModelo("Sapato Clássico", 80.0, false);
    sistema.addModelo("Botas Luxo", 120.0, true); // exclusivo

    // Atualizar PVR
    sistema.setPVR(0, 85.0); // Supondo que o ref do primeiro modelo é 0

    // Registar vendas válidas
    sistema.registarVenda(0, 0, 90.0, "2025-05-20");  // modelo 0, sapataria 0
    sistema.registarVenda(1, 0, 130.0, "2025-05-21"); // modelo 1, sapataria 0
    sistema.registarVenda(0, 1, 85.0, "2025-05-22");  // modelo 0, sapataria 1

    // Tentativa inválida: venda abaixo do PVR
    if (!sistema.registarVenda(0, 1, 50.0, "2025-05-23"))
    {
        std::cout << "Venda rejeitada: preço abaixo do PVR." << std::endl;
    }

    // Tentativa inválida: venda de modelo exclusivo numa concessionária
    if (!sistema.registarVenda(1, 1, 130.0, "2025-05-24"))
    {
        std::cout << "Venda rejeitada: modelo exclusivo não permitido nesta sapataria." << std::endl;
    }

    // Listar vendas da sapataria do Porto (id 0)
    std::cout << "\n--- Vendas na sapataria do Porto ---\n";
    sistema.printVendasSapataria(0);

    // Listar vendas da sapataria de Lisboa (id 1)
    std::cout << "\n--- Vendas na sapataria de Lisboa ---\n";
    sistema.printVendasSapataria(1);

    return 0;
}
