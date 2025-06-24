#include <stdio.h>

int main() {
    // 1) Declaração e inicialização do vetor com 5 inteiros
    int vetor[5] = {10, 23, 5, 42, 17};

    // 2) Processamento: multiplica por 2 todos os elementos de índices pares (0, 2 e 4)
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {          // índices pares
            vetor[i] = vetor[i] * 2;
        }
    }

    // 3) Impressão do vetor resultante
    printf("Vetor resultante após multiplicar índices pares por 2:\n");
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
