/*Ler 5 numeros e mostre apenas os maiore que 10*/

#include<stdio.h>

int main()
{
    //Declarar a variaveis

int numero[5];

//Lei os valores
printf("Digite 5 numeros: \n");
for (int i = 0; i < 5; i++)
{
    printf("Numeros %d: ", i+1);
    scanf("%d", &numero[i]);
}

//Mostra Maior de 10

printf("\nNumeros maiores que 10: \n");
for (int i = 0; i < 5; i++)
{
    if (numero[i] > 10)
    {
        printf("%d ", numero[i]);
    }
}
printf("\nSão os numeros maiores que 10!\n");



    return 0;
}