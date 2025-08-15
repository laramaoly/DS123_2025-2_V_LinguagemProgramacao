// Anatomia de um programa em C

// 1. DIRETIVAS DE PRÉ-PROSSADOR

#include <stdio.h> // Biblioteca padrão de entrada e saida
#include <stdlib.h> //Biblioteca padrão em C

//2 DECLARAÇÕES GLOBAIS (OPCIONAIS)

#define PI 3.14159 //Constante
int contador = 0; //Variável global

//3.  PROTÓTIPO DE FUNÇÕES (opcional)

void minhaFuncao(void);

// 4. FUNÇÃO PRINCIPAL (Obrigatória)

int main(){
    // 5. DEVLAÇÃO DE VARIÁVEIS
    int idade;
    float salario;
    char nome[50];

    //6. CORPO DO PROGRAMA
    printf("Olá, mundo!\n");

    //7. RETORNO DA FUNÇÃO
    return 0;

}

//8. DEFINIÇÃO DE OUTRAS FUNÇÕES (opcional)

void minhaFuncao(void){
    printf("Minha Função\n");
}