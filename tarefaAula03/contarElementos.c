#include <stdio.h>

int main() {
    // Declaração da matriz 2x3 e do contador
    int matriz[2][3];
    int contador = 0;

    // Laços para preencher a matriz
    printf("Digite os elementos da matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Laços para percorrer a matriz e contar os elementos
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            // Se o elemento for maior que 5, incrementa o contador
            if (matriz[i][j] > 5) {
                contador++;
            }
        }
    }

    // Exibe o resultado
    printf("\nA matriz possui %d elementos maiores que 5.\n", contador);

    return 0;
}