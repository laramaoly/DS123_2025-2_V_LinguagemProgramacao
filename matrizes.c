/*
 DECLARAÇÃO BÁSICA
int matriz[3][2]; Matriz de 3 linhas, 2 colunas

INICIALIZAÇÃO
    int numeros [3][2] ={
        { 1,2,3}
        {4,5,6}
    }
*/

#include<stdio.h>

int main()
{
    //Matriz 2X2 com valores
    int matriz[2][2]={
        {1,2},
        {3,4}
    };
    
    //Motrar a Matriz
    printf("Matriz 2X2: \n");
    printf("%d %d\n", matriz[0][0], matriz[0][1]);
    printf("%d %d\n", matriz[1][0], matriz[1][1]);

    return 0;
}
