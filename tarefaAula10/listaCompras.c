#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_MAX_ITEM 100 // Tamanho máximo para o nome de um item

int main() {
    char **listaDeCompras; // Um ponteiro para um ponteiro de char (vetor de strings)
    int capacidade = 2;    // Capacidade inicial da lista
    int totalItens = 0;
    char buffer[TAMANHO_MAX_ITEM]; // Para ler a entrada do usuário

    printf("\n--- Exercicio 3: Lista de Compras Dinamica ---\n");

    // 1. Alocando a capacidade inicial da lista (para 2 ponteiros de string)
    listaDeCompras = (char **) malloc(capacidade * sizeof(char *));
    if (listaDeCompras == NULL) {
        printf("Erro de alocacao inicial.\n");
        return 1;
    }

    printf("Digite os itens da compra (digite 'fim' para terminar):\n");

    while (1) {
        printf("Item %d: ", totalItens + 1);
        fgets(buffer, TAMANHO_MAX_ITEM, stdin);
        // Remove a quebra de linha (\n) que o fgets captura
        buffer[strcspn(buffer, "\n")] = 0;

        // Condição de parada
        if (strcmp(buffer, "fim") == 0) {
            break;
        }

        // Verifica se a lista precisa de mais espaço
        if (totalItens == capacidade) {
            capacidade *= 2; // Dobra a capacidade para ser mais eficiente
            
            // Tenta realocar a lista para o novo tamanho
            char **temp = realloc(listaDeCompras, capacidade * sizeof(char *));
            if (temp == NULL) {
                printf("Erro ao realocar a lista!\n");
                // Libera a memória já alocada antes de sair
                for(int i = 0; i < totalItens; i++) free(listaDeCompras[i]);
                free(listaDeCompras);
                return 1;
            }
            listaDeCompras = temp; // Atualiza o ponteiro para o novo bloco de memória
            printf("(Info: A capacidade da lista foi expandida para %d)\n", capacidade);
        }

        // Aloca memória para a string do novo item
        listaDeCompras[totalItens] = (char *) malloc(strlen(buffer) + 1);
        if (listaDeCompras[totalItens] == NULL) {
            printf("Erro ao alocar memoria para o item!\n");
            break; 
        }

        // Copia o item do buffer para a lista e incrementa o contador
        strcpy(listaDeCompras[totalItens], buffer);
        totalItens++;
    }

    // Exibe a lista final
    printf("\n--- Sua Lista de Compras Final ---\n");
    if (totalItens == 0) {
        printf("A lista esta vazia.\n");
    } else {
        for (int i = 0; i < totalItens; i++) {
            printf("- %s\n", listaDeCompras[i]);
        }
    }

    // Libera a memória (processo inverso da alocação)
    // Primeiro, libera a memória de cada string individualmente
    for (int i = 0; i < totalItens; i++) {
        free(listaDeCompras[i]);
    }
    // Depois, libera a memória do vetor de ponteiros
    free(listaDeCompras);
    printf("\nMemoria da lista de compras liberada com sucesso!\n");

    return 0;
}