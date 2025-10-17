#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor1, *vetor2, *vetorConcatenado;
    int tam1 = 5, tam2 = 7, tamFinal;

    printf("\n--- Exercicio 2: Concatenacao de Vetores ---\n");

    // Alocando memória para os dois vetores iniciais
    vetor1 = (int *) malloc(tam1 * sizeof(int));
    vetor2 = (int *) malloc(tam2 * sizeof(int));

    if (vetor1 == NULL || vetor2 == NULL) {
        printf("Erro: Falha ao alocar memoria inicial.\n");
        return 1;
    }

    // Preenchendo os vetores com valores
    printf("Vetor 1: ");
    for (int i = 0; i < tam1; i++) {
        vetor1[i] = (i + 1) * 10; // Ex: 10, 20, 30, 40, 50
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < tam2; i++) {
        vetor2[i] = i + 1; // Ex: 1, 2, 3, 4, 5, 6, 7
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    // Alocando o terceiro vetor com o tamanho da soma dos dois
    tamFinal = tam1 + tam2;
    vetorConcatenado = (int *) malloc(tamFinal * sizeof(int));
    if (vetorConcatenado == NULL) {
        printf("Erro: Falha ao alocar memoria para concatenacao.\n");
        return 1;
    }

    // Copiando os valores para o vetor final
    // Copia o primeiro vetor
    for (int i = 0; i < tam1; i++) {
        vetorConcatenado[i] = vetor1[i];
    }
    // Copia o segundo vetor, continuando de onde o primeiro parou
    for (int i = 0; i < tam2; i++) {
        vetorConcatenado[tam1 + i] = vetor2[i];
    }

    // Exibindo o resultado
    printf("\nVetor Concatenado: ");
    for (int i = 0; i < tamFinal; i++) {
        printf("%d ", vetorConcatenado[i]);
    }
    printf("\n");

    // Liberando TODA a memória alocada
    free(vetor1);
    free(vetor2);
    free(vetorConcatenado);
    printf("\nMemoria dos tres vetores liberada com sucesso!\n");

    return 0;
}