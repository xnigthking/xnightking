#include <stdio.h>

int main() {
    // 1) Declaração e inicialização de dois vetores de 5 inteiros
    int vetorA[5] = {2, 7, 14, 9, 5};
    int vetorB[5] = {3, 11, 6, 8, 12};

    // 2) Geração do terceiro vetor como soma das posições correspondentes
    int vetorC[5];
    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    // 3) Impressão dos vetores originais e do vetor resultante
    printf("Vetor A: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    printf("Vetor C (A + B): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
