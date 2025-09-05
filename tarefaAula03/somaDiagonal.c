#include <stdio.h>

int main() {
    // Declaração da matriz 3x3 e da variável da soma
    int matriz[3][3];
    int soma_diagonal = 0;
    

    // Laços para o usuário preencher a matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Laço para somar os elementos da diagonal principal
    for (int i = 0; i < 3; i++) {
        // A diagonal principal tem índices i == j
        soma_diagonal += matriz[i][i];
    }

    // Exibe o resultado
    printf("\nA soma da diagonal principal é: %d\n", soma_diagonal);

    return 0;
}