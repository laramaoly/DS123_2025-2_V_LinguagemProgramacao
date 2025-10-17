#include <stdio.h>
#include <stdlib.h> // Essencial para malloc() e free()

int main() {
    int quantidade;
    int *vetor; // Ponteiro que vai apontar para o nosso vetor dinâmico

    printf("--- Exercicio 1: Vetor de Numeros Pares ---\n");
    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &quantidade);

    // malloc retorna um ponteiro para o bloco de memória alocado.
    // (int *) faz a conversão do ponteiro genérico (void *) para um ponteiro de inteiro.
    vetor = (int *) malloc(quantidade * sizeof(int));

    
    if (vetor == NULL) {
        printf("Erro: Falha ao alocar memoria.\n");
        return 1; 
    }


    printf("\nDigite os %d numeros:\n", quantidade);
    for (int i = 0; i < quantidade; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("\nNumeros pares digitados:\n");
    for (int i = 0; i < quantidade; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    // Liberando a memoria alocada dinamicamente
    free(vetor);
    printf("\nMemoria liberada com sucesso!\n");

    return 0;
}