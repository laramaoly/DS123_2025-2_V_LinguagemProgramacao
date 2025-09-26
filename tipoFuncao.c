//Tipos de funções em C
#include <stdio.h>

// 1. Função sem paamtros e sem retorno

void cumprimentar() {
    printf("Olá! Bem-vindo ao mundo das funções em C. Estamos em aula de Limguagem de programação! \n");
}

// 2. Função com parâmetros e sem retorno

void exibir_dados(char nome[], int idade) { //declaração da função Cabeçãlho
    printf("Nome: %s, Idade: %d\n", nome, idade);
}   //Implemnetação da função

// 3. Função sem parâmetros e com retorno

int obter_numero_aleatorio() {
    return 42; // Retorna um número fixo para simplicidade
}

// 4. Função com parâmetros e com retorno

float calcular_media(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

int main()
{
    cumprimentar();
    exibir_dados("Maoly", 42);
    printf("Numero aleatório: %d\n", obter_numero_aleatorio());
    printf("Média: %.2f\n", calcular_media(8.5, 7.0));
    return 0;
} // Programa principal, as execuçoes das funções são chamadas aqui
