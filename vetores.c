/* Vetores, Matrizes e String em C
Porque vetores?
Problema: Armazenar idade de 5 alunos.

int idade 1 = 20; int idade 2 = 19;
int idade 3 = 18; int idade 4 = 21;
int idade 5 = 23;

E se fosse 10 alunos?
E se fosse 10 alunos?
E se fosse 10 alunos?

Solução: Vetores que agrupam dados seleccionado
Vetor: Conjunto de variavél do mesmo tipo.

Indice: possição de elementos no vetor.
Visualização:
idade:[20][19][18][21][23]
indice: 0 1 2 3 4 5
DECLARAÇÃO:

tipo nome_vetor[tamanho]
exemplos:
int numeros[5];
float notas [3];
char letras [10];

INICIALIZAÇÃO

int idade[5]= {20,19,18,21,23}; -> DEFINIDO (COM VALORES)

int idade[5]; -> INDEFINIDO (LIXO DE MEMORIA)

ACESSO AOS ELEMENTOS:

printf("%d", idade[0]); -> MOSTRA O ELEMENTO DO INDICE NO CASO (20)

printf("%d", idade[4]); -> MOSTRA O ELEMENTO DO INDICE NO CASO (23)

MODIFICAR

idade[1]=25; -> MODIFICA O ELEMENTO

*/

#include<stdio.h>

int main()
{
    // Declaração e inicialização 
    int numeros[5]= {10,20,30,40,36};

    //Mostrar todos os elementos
    printf("Elementos do vetor:\n");
    printf("Posição 0: %d\n", numeros[0]);
    printf("Posição 1: %d\n", numeros[1]);
    printf("Posição 2: %d\n", numeros[2]);
    printf("Posição 3: %d\n", numeros[3]);
    printf("Posição 4: %d\n", numeros[4]);

    return 0;
}
