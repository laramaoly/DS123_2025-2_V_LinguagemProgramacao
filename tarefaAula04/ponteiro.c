#include <stdio.h>

int main() {
    float salario = 2500.50; // Variável original 
    float *ponteiro_salario; // Declaração do ponteiro 

    // Faz o ponteiro apontar para o endereço da variável 'salario'
    ponteiro_salario = &salario;

    // Imprime o valor da variável 'salario' acessando-o através do ponteiro 
    printf("Salário (via ponteiro): %.2f\n", *ponteiro_salario);

    // Modifica o valor de 'salario' para 3000.00 através do ponteiro
    *ponteiro_salario = 3000.00;

    // Imprime o novo valor da variável 'salario' para confirmar a alteração 
    printf("Novo salário (lendo a variável original): %.2f\n", salario);

    return 0; // [
}