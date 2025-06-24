#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userNums[6];
    int draw[6];
    int acertos = 0;

    // Inicializa o gerador de números aleatórios
    srand((unsigned)time(NULL));

    // 1) Leitura dos 6 números do usuário (1 a 60)
    printf("Digite 6 números inteiros entre 1 e 60:\n");
    for (int i = 0; i < 6; i++) {
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &userNums[i]);
            if (userNums[i] < 1 || userNums[i] > 60) {
                printf("Valor inválido! Digite um número entre 1 e 60.\n");
            }
        } while (userNums[i] < 1 || userNums[i] > 60);
    }

    // 2) Geração dos 6 números sorteados (1 a 60)
    for (int i = 0; i < 6; i++) {
        draw[i] = (rand() % 60) + 1;
    }

    // 3) Contagem de acertos
    // Para cada número sorteado, verifica se existe no vetor do usuário
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (draw[i] == userNums[j]) {
                acertos++;
                break;  // evita contar múltiplas vezes o mesmo sorteado contra o mesmo input
            }
        }
    }

    // 4) Impressão dos números do usuário e dos sorteados
    printf("\nSeus números: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", userNums[i]);
    }
    printf("\nNúmeros sorteados: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", draw[i]);
    }

    // 5) Resultado
    printf("\n\nVocê acertou %d número(s)!\n", acertos);

    return 0;
}
