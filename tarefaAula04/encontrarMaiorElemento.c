#include <stdio.h>

// Implementação da função usando ponteiros
int encontrar_maior(int *array, int tamanho) {
    // Ponteiro que guardará o endereço do maior elemento encontrado
    int *maior_ptr = array; // Inicializa apontando para o primeiro elemento

    // Ponteiro que será usado para percorrer o array do segundo ao último elemento
    for (int *p = array + 1; p < array + tamanho; p++) {
        // Compara o valor apontado por 'p' com o valor apontado por 'maior_ptr'
        if (*p > *maior_ptr) {
            maior_ptr = p; // Se encontrar um maior, atualiza 'maior_ptr'
        }
    }
    // Retorna o valor que está no endereço para o qual 'maior_ptr' aponta
    return *maior_ptr;
}

int main() {
    int numeros[] = {45, 23, 78, 12, 67, 34, 89, 56};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int maior = encontrar_maior(numeros, tamanho);

    printf("Array: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\nMaior elemento: %d\n", maior);

    return 0;
}