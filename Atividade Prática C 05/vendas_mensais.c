#include <stdio.h>

int main() {
    float vendas[3][4] = {
        {12000.50f, 13500.75f, 14200.00f, 15500.25f},
        { 9800.00f, 10250.30f, 11000.00f, 11750.60f},
        {15000.00f, 14800.90f, 15850.15f, 16200.45f}
    };

    // Exibe tabela
    printf("Vendas Mensais por Loja (R$):\n");
    printf("       Mes1      Mes2      Mes3      Mes4\n");
    for (int loja = 0; loja < 3; loja++) {
        printf("Loja %d |", loja + 1);
        for (int mes = 0; mes < 4; mes++) {
            printf(" %8.2f", vendas[loja][mes]);
        }
        printf("\n");
    }
    printf("\n");

    // Cálculos
    float total_por_loja[3] = {0}, total_geral = 0, total_mes3 = 0;
    for (int loja = 0; loja < 3; loja++) {
        for (int mes = 0; mes < 4; mes++) {
            total_por_loja[loja] += vendas[loja][mes];
            total_geral       += vendas[loja][mes];
            if (mes == 2) total_mes3 += vendas[loja][mes];
        }
    }

    // Impressão dos resultados
    for (int loja = 0; loja < 3; loja++) {
        printf("Total de vendas da Loja %d: R$ %.2f\n",
               loja + 1, total_por_loja[loja]);
    }
    printf("Total geral de vendas:       R$ %.2f\n", total_geral);
    printf("Total de vendas no Mes 3:    R$ %.2f\n", total_mes3);

    return 0;
}
