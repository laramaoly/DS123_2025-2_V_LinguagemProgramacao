/*Criar um programa que leia 4 numeros, 
armazene em um vetor e calcule a media*/

#include<stdio.h>

int main()
{
    //Declarar a variaveis

int numero[4];

//Lei os valores
printf("Digite 4 numeros: \n");
for (int i = 0; i < 4; i++)
{
    printf("Numeros %d: ", i+1);
    scanf("%d", &numero[i]);
}

//Soma dos elementos

int soma = 0;
for (int i = 0; i < 4; i++)
{
    soma += numero[i];
}
//Media dos elementos
int meia = soma/2;

printf("A meia dos numeros é: %d\n", meia);


    return 0;
}
