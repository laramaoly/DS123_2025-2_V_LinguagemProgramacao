/*
Exrcicio 1 - Aula 08
Crie um programa com funções para:
-> Calcular a area de um círculo;
-> Calcular perimetro de um retângulo;
-> Exibir um menu de informações.
 */

 /*
#include <stdio.h>

#define PI 3.14159

void exibirMenu() {
    printf("Menu de Informacoes:\n");
    printf("1. Calcular a area de um circulo\n");
    printf("2. Calcular o perimetro de um retangulo\n");
    printf("3. Sair\n");
}

float calcularAreaCirculo(float raio) {
    return PI * raio * raio;
}

float calcularPerimetroRetangulo(float largura, float altura) {
    return 2 * (largura + altura);
}

int main() {
    int opcao;
    float raio, largura, altura;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o raio do circulo: ");
                scanf("%f", &raio);
                printf("Area do circulo: %.2f\n", calcularAreaCirculo(raio));
                break;
            case 2:
                printf("Digite a largura do retangulo: ");
                scanf("%f", &largura);
                printf("Digite a altura do retangulo: ");
                scanf("%f", &altura);
                printf("Perimetro do retangulo: %.2f\n", calcularPerimetroRetangulo(largura, altura));
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
*/

#include <stdio.h>

#define PI 3.14159

//Protótipos das funções

float carcular_area_circulo(float raio);
float calcular_perimetro_retangulo(float largura, float altura);
void exibir_menu();

// Implementação das funções

float carcular_area_circulo(float raio){
    return PI * raio * raio;
}

float calcular_perimetro_retangulo(float largura, float altura){
    return 2 * (largura + altura);
}

void exibir_menu(){
    printf("===Menu de Informacoes===\n");
    printf("1. Aarea do Circulo\n");
    printf("2. Perimetro do Retangulo\n");
    printf("3. Sair\n");
    printf("Opcao: ");
}

//Programa Principal

int main(){
    int opcao;
    float raio, largura, altura, resultado;

    do{
        exibir_menu();
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o raio do circulo: ");
                scanf("%f", &raio);
                resultado = carcular_area_circulo(raio);
                printf("Area do circulo: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite a largura do retangulo: ");
                scanf("%f", &largura);
                printf("Digite a altura do retangulo: ");
                scanf("%f", &altura);
                resultado = calcular_perimetro_retangulo(largura, altura);
                printf("Perimetro do retangulo: %.2f\n", resultado);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
        
        printf("\n");
    }while(opcao != 3);

    return 0;
}
