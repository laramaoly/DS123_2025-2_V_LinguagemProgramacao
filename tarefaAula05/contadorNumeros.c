#include <stdio.h>

int main() {
    // Declara um vetor para armazenar 10 números inteiros
    int numeros[10];

    // Laço para ler os 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("%dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa os contadores
    int pares_positivos = 0;
    int impares_ou_negativos = 0;
    int mult_3_e_5 = 0;

    // Itera sobre cada número para contagem
    for (int i = 0; i < 10; i++) {
        int num = numeros[i];

        // Condição 1: Conta pares E positivos
        if ((num % 2 == 0) && (num > 0)) {
            pares_positivos++;
        }

        // Condição 2: Conta ímpares OU negativos
        if ((num % 2 != 0) || (num < 0)) {
            impares_ou_negativos++;
        }

        // Condição 3: Conta múltiplos de 3 E de 5
        if ((num % 3 == 0) && (num % 5 == 0)) {
            mult_3_e_5++;
        }
    }

    // Exibe os resultados
    printf("\n--- Análise dos Números ---\n");
    printf("Quantidade de números pares E positivos: %d\n", pares_positivos);
    printf("Quantidade de números ímpares OU negativos: %d\n", impares_ou_negativos);
    printf("Quantidade de números múltiplos de 3 E de 5 ao mesmo tempo: %d\n", mult_3_e_5);

    return 0;
}