#include <stdio.h>

int main() {
    // Declaração do vetor para 5 números
    int numeros[5];


    // Laço para ler os 5 números
    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Exibe um cabeçalho para a saída
    printf("\nNúmeros maiores que 10:\n");
    // Laço para verificar cada número no vetor
    for (int i = 0; i < 5; i++) {
        // Se o número for maior que 10, ele é exibido
        if (numeros[i] > 10) {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}