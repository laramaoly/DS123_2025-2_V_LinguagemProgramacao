#include<stdio.h>
int main()
{
    int matriz[2][3];
    int i;
    int j;

    //Entrada de dados
    printf("Digite os elementos da matriz 2X3: \n");
    for ( i = 0; i < 2; i++) // Para cada linha
    {
        for ( j = 0; j < 3; j++) //Para cada coluna
        {
            printf("Elementos [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }  
    }

    //Exibição
    printf("\nMatriz Digitada: \n");
    for (i = 0; i < 2; i++) // Para cada linha
    {
        for ( j = 0; j < 3; j++){ //Para cada coluna
            printf("%d ", matriz[i][j]);
        } 
        printf("\n"); //Nova linha após cada linha da matriz 
    }

    //Soma dos Elementos
    int soma_total= 0;
    for ( i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            soma_total += matriz[i][j];
        }
    }
    
    printf("Soma Total: %d\n", soma_total);
    
    
    return 0;
}
