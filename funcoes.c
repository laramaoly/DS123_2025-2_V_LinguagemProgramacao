// Funções e Passagem de Parâmetrosem C
#include <stdio.h>
#include <string.h>

// Uso de operadodes em função
int calcular_expressao(int a, int b, char operador)
{
    switch (operador)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
            return (b != 0) ? a / b : 0; // != diferente de zero "Ojo Ternario"
    case '%':
        return (b != 0) ? a % b: 0;
           
    default:
        return 0;
    }
}

// Ponteiro em função

void incrementar_valor(int *valor)
{
    (*valor)++; // Modifica uma variável denro de outra função  
       
}


int main()
{
    int x = 10, y = 3;
    printf("Operaçoes: %d + %d = %d\n", x, y, calcular_expressao(x, y, '+'));

    printf("Operaçoes: %d - %d = %d\n", x, y, calcular_expressao(x, y, '-'));

    printf("Antes de incrementar: %d\n", x);
    incrementar_valor(&x); // Passa o endereço de x
    printf("Depois de incrementar: %d\n", x);
    return 0;
}
