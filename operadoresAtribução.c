// Oreradodes de Atribução

#include <stdio.h>

int main(){
    int contador = 2; //O sinal = é um operador de atribuição simples
    int acumulador = 4; 

    printf("Valor inicial - contador: %d, acumulador: %d\n", contador, acumulador);

    //Operadores de atribuição composta

    contador += 10; //contador = contador + 10
    printf("contador +=: %d\n", contador);

    contador -= 3; //contador = contador - 3
    printf("contador +=: %d\n", contador);

    acumulador *= 5; // acumulador = acumulador * 5 
    printf("acumulador *= 5: %d\n", acumulador);

    acumulador /= 2; // acumulador = acumulador /2
    printf("acumulador /= 2: %d\n", acumulador);


}