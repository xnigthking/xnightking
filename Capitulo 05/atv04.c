#include <stdio.h>

int main() {
    int matriz[3][3];
    int maior;

    // 1) Leitura dos elementos da matriz 3x3
    printf("Digite os elementos da matriz 3x3 (inteiros):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // 2) Encontrar o maior elemento
    maior = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    // 3) Impressão da matriz formatada
    printf("\nMatriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 3; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("|\n");
    }

    // 4) Impressão do maior elemento
    printf("\nMaior elemento da matriz: %d\n", maior);

    return 0;
}
