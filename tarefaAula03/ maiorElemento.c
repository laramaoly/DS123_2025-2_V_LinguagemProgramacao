#include <stdio.h>

int main() {
    // Declaração da matriz 2x2
    int matriz[2][2];
    // Variável para guardar o maior elemento, inicializada com o primeiro
    int maior;

    // Laços aninhados para preencher a matriz
    printf("Digite os elementos da matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa a variável 'maior' com o primeiro elemento da matriz
    maior = matriz[0][0];

    // Laços para percorrer a matriz e encontrar o maior elemento
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // Se o elemento atual for maior que o valor em 'maior', atualiza 'maior'
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    // Exibe o resultado
    printf("\nO maior elemento da matriz é: %d\n", maior);

    return 0;
}