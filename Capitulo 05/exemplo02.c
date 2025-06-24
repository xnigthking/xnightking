#include <stdio.h>
#include <stdlib.h>   // para funcoes rand() e srand()
#include <time.h>     // para funcao time()

#define MIN 1
#define MAX 20

int main() {
    int d20;

    // Inicializa o gerador de números aleatórios
    srand((unsigned) time(NULL));

    // Gera um valor entre MIN e MAX
    d20 = MIN + (rand() % (MAX - MIN + 1));

    // Exibe o resultado
    printf("Rolando D20...\n");
    printf("Resultado: %d\n", d20);

    return 0;
}
