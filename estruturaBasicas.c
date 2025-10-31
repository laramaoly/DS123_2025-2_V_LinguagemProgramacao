//ESTRUTURAS BÁSICAS DE UM PROGRAMA EM C

//1. BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

//2. DEFINIÇOES E CONSTANTES
#define MAX 100
#define PI 3.14159

//3. ESTRUTURAS

typedef struct {
    //Campos da estrutura
} TipoEstrutura;

//4. PROTÓTIPOS DAS FUNÇÕES
void funcao1(); //sem parâmetros
int funcao2(int parametro); //com parâmetros

//5. FUNCÃO PRINCIPAL

int main() {
    //Declarações de variáveis

    //Processamento

    //Saída
    return 0;
}

// 6. IMPLEMENTAÇÕES DAS FUNÇÕES
void funcao1() {
    //Implementação da função 1
}
int funcao2(int parametro) {
    //Implementação da função 2
    return parametro * 2;
}