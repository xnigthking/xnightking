#include <stdio.h>

int main() {
    int numeros[5];

    // 1) Leitura de cinco números inteiros
    printf("Digite cinco números inteiros, um de cada vez:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // 2) Impressão dos elementos do vetor
    printf("\nVocê digitou os seguintes números:\n");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}
