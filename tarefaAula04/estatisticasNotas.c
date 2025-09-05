#include <stdio.h>

// Função para calcular estatísticas de um array de notas
void calcular_estatisticas(float *notas, int quantidade,
                            float *media, float *maior, float *menor) {
    // Inicializa maior e menor com a primeira nota do array
    *maior = *notas;
    *menor = *notas;
    float soma = 0.0;

    // Percorre o array de notas usando um ponteiro
    for (int i = 0; i < quantidade; i++) {
        float nota_atual = *(notas + i); // Pega a nota atual usando aritmética de ponteiros
        soma += nota_atual;

        if (nota_atual > *maior) {
            *maior = nota_atual;
        }
        if (nota_atual < *menor) {
            *menor = nota_atual;
        }
    }

    // Calcula a média e a atribui ao endereço apontado pelo ponteiro 'media'
    *media = soma / quantidade;
}

int main() {
    float notas[] = {8.5, 7.2, 9.1, 6.8, 8.9, 7.7, 9.5, 8.2};
    int qtd_notas = sizeof(notas) / sizeof(notas[0]);
    float media, maior, menor;

    calcular_estatisticas(notas, qtd_notas, &media, &maior, &menor);

    printf("=== RELATÓRIO DE NOTAS ===\n");
    printf("Notas: ");
    for(int i = 0; i < qtd_notas; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n");
    printf("Média: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}