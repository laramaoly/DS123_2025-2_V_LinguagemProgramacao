#include <stdio.h>

int main() {
    float num1, num2;

    // 1. Lê dois números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // 2. Realiza as quatro operações básicas
    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;
    float divisao = 0;

    // Verifica se o segundo número não é zero para a divisão
    if (num2 != 0) {
        divisao = num1 / num2;
    }

    // 3. Exibe os resultados formatados
    printf("\n--- Resultados ---\n");
    printf("Soma: %.2f + %.2f = %.2f\n", num1, num2, soma);
    printf("Subtracao: %.2f - %.2f = %.2f\n", num1, num2, subtracao);
    printf("Multiplicacao: %.2f * %.2f = %.2f\n", num1, num2, multiplicacao);
    if (num2 != 0) {
        printf("Divisao: %.2f / %.2f = %.2f\n", num1, num2, divisao);
    } else {
        printf("Divisao: Nao e possivel dividir por zero.\n");
    }

    return 0;
}

