#include <stdio.h>

int main() {
    // Declaração de um vetor de 4 posições para os números
    float numeros[4];
    // Variável para somar os valores e para a média
    float soma = 0.0, media;


    // Laço para ler os 4 números do usuário
    printf("Digite 4 números:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        // Acumula o valor lido na variável 'soma'
        soma += numeros[i];
    }
    
    // Calcula a média dividindo a soma pela quantidade de números
    media = soma / 4;

    // Exibe o resultado
    printf("\nA média dos números é: %.2f\n", media);

    return 0;
}