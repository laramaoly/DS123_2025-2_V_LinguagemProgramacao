// Operadores de Decremento

#include <stdio.h>

int main(){
    int a = 5, b= 5;
    printf("valores iniciciales: a= %d, b= %d\n", a, b);

    //Pré-incremento: incrementa primeiro, depois usa o valor 
    printf("++a = %d\n", ++a);
    printf("a = %d\n", a);

    //Pos-incremento: usa o valor primeiro, depois incrementa
    printf("b++ %d\n", b++);
    printf("b = %d\n", b);

    //Mesmo coceito para decremento
    printf("--a = %d\n", --a); //vira 5, depois imprime 5
    printf("b-- = %d\n", b--); //imprime 6, depois vira 5

    printf("Valores finais: a = %d, b= %d\n", a ,b);

    return 0;


}