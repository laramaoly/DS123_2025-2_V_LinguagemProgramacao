// Com uso de funções para manipulação de arrays
#include <stdio.h>

int somaArray(int *arr, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};

    printf("Soma do arr1: %d\n", somaArray(arr1, 5));
    printf("Soma do arr2: %d\n", somaArray(arr2, 3));
    return 0;
}
