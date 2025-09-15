#include <stdio.h>

int main() {
    // Declara um vetor para armazenar 5 preços
    float precos[5];
   
    // Laço para ler os 5 preços dos produtos
    printf("Digite os 5 preços dos produtos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Preço do produto %d: R$ ", i + 1);
        scanf("%f", &precos[i]);
    }

    printf("\n--- Resultados ---\n");

    // Itera sobre cada preço para calcular e exibir o desconto
    for (int i = 0; i < 5; i++) {
        float preco_original = precos[i];
        float desconto = 0.0;
        char* percentual_desconto = "0%%"; // Usamos %% para imprimir o caractere '%'

        if (preco_original > 100.00) {
            desconto = preco_original * 0.10;
            percentual_desconto = "10%%";
        } else if (preco_original >= 50.00) { 
            desconto = preco_original * 0.05;
            percentual_desconto = "5%%";
        }

        float preco_final = preco_original - desconto;

        printf("Preço Original: R$ %.2f\n", preco_original);
        printf("Desconto Aplicado (%s): R$ %.2f\n", percentual_desconto, desconto);
        printf("Preço Final: R$ %.2f\n", preco_final);
        printf("--------------------\n");
    }

    return 0;
}