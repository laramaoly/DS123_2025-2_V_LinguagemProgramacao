// Sem uso de função

#include <stdio.h>

int main(){
    int arr1[] = {1,2,3,4,5};
    int soma1 = 0;
    for (int i = 0; i < 5; i++) {
        soma1 += arr1[i];
    }
    printf("Soma 1: %d\n", soma1);

    int arr2[] = {10, 20, 30};
    int soma2 = 0;

    for (int i = 0; i < 3; i++) {
        soma2 += arr2[i];
    }
    printf("Soma 2: %d\n", soma2);
    return 0;
}