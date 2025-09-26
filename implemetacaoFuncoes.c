//Protótipo e Implementação das funções

#include <stdio.h>

//Protótipo das funções (declarações)

int somar(int x, int y);
float dividir(float dividendo, float divisor);

void exibir_resultado(int resultado); //Função que não retorna valor (void)

//Implementação das funções (definições)

int soma(int x, int y) {
    return x + y;
}
float dividir(float dividendo, float divisor){
    if (divisor != 0) {
        return dividendo / divisor;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0; // Retorna 0 em caso de divisão por zero
    }
}

void exibir_resultado(int resultado) {
    printf("O resultado é: %d\n", resultado);
}


// implementação do Programa principal (main)

int main() {
    int x = 4, y = 5;
    int soma = somar(x, y); //Chamada da função soma
    exibir_resultado(soma); //Chamada da função exibir_resultado

    float divisao = dividir(10.0, 3.0); //Chamada da função dividir
    printf("O resultado da divisão é: %.2f\n", divisao);

    return 0;
}