//Oeradores Aritmeticos (calculadora simples)

#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    float resultado;

    printf("Digite dois números: ");
    scanf("%d %d",  &a, &b);

    printf("\n== OPERAÇÕES MATEMATICA ==\n");
    printf("%d + %d\n", a, b, a + b);
    printf(" %d - %d\n", a, b, a - b);
    printf(" %d * %d\n", a, b, a * b);

    //Cuidar com a divisão por zero
    if (b !=0) {
        resultado = (float)a/b; //converte a variável para float
        printf(" %d / %d = %.2f\n", a, b, resultado);
        printf("%d %% %d = %d\n", a, b, a % b );
    }else {
        printf("Não é possivel dividir por zerro!\n");
    }    
       
}