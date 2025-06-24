#include <stdio.h>

int main() {
    float precos[3] = {19.99f, 45.50f, 9.75f};
    float soma = 0, maior = precos[0], menor = precos[0];

    // Cálculo de soma, maior e menor
    for (int i = 0; i < 3; i++) {
        soma += precos[i];
        if (precos[i] > maior) maior = precos[i];
        if (precos[i] < menor) menor = precos[i];
    }

    double media = soma / 3.0;

    // Impressão dos preços originais
    printf("Precos Originais dos Produtos:\n");
    for (int i = 0; i < 3; i++) {
        printf(" Produto %d: R$ %.2f\n", i + 1, precos[i]);
    }

    // Ajuste de 10% no primeiro produto
    float preco_ajustado = precos[0] * 1.10f;
    printf("\nNovo preco do Produto 1 (+10%%): R$ %.2f\n", preco_ajustado);

    // Resultados dos cálculos
    printf("\nMedia dos precos:   R$ %.2f\n", media);
    printf("Maior preco:        R$ %.2f\n", maior);
    printf("Menor preco:        R$ %.2f\n", menor);

    return 0;
}
