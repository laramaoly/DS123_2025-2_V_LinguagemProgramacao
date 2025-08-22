/*
Pratica de LOOP

for (int i = 0; i < tamanho; i++)
{
    //codigo
}
*/


#include<stdio.h>
int main()
{
    //Declaração de variaveis

    int notas[3];
    //int i; SE HOVER PROBLEMA DE COMPATIBILIDADE DECLARAR A VARIAVEL INT I;

    //Entrada de dados
    printf("Digite 3 notas: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Notas %d: ", i+1);
        scanf("%d", &notas[i]); // Leitura e endereçamento(indice de armazenamento)
    }

    //Saida de dados
    printf("\nNotas digitadas:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Notas %d: %d\n", i+1, notas[i]); // Mostrar o valor que foi armazenado
    }

    //Soma dos elementos
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        soma += notas[i];
    }
    printf("Soma total: %d\n", soma);

    //Enontrar o maior
    int maior = notas[0]; // Assume primeiro como maior
    for (int i = 0; i < 3; i++)
    {
        if(notas[i] > maior){
            maior = notas[i];
        }
    }
    printf("Maior nota: %d\n", maior);
    

    
    return 0;

}


