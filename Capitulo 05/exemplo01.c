#include <stdio.h>

#define NUM_ALUNOS 5

int main() {
    float notas[NUM_ALUNOS];
    int i;

    // Leitura das notas
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Impressão das notas
    printf("\nAs notas digitadas foram:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Nota[%d] = %.2f\n", i + 1, notas[i]);
    }

    return 0;
}
