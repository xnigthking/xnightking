#include <stdio.h>

int main() {
    int pontuacoes[7] = {88, 95, 76, 100, 67, 82, 91};
    int soma = 0, maior = pontuacoes[0], menor = pontuacoes[0];

    for (int i = 0; i < 7; i++) {
        soma += pontuacoes[i];
        if (pontuacoes[i] > maior) maior = pontuacoes[i];
        if (pontuacoes[i] < menor) menor = pontuacoes[i];
    }

    double media = (double)soma / 7;

    printf("Pontuacoes de Satisfacao dos 7 Clientes:\n");
    for (int i = 0; i < 7; i++) {
        printf(" Cliente %d: %d\n", i + 1, pontuacoes[i]);
    }
    printf("\nMedia: %.2f\nMaior: %d\nMenor: %d\n",
           media, maior, menor);

    return 0;
}
