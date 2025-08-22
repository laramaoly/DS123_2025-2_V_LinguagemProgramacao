#include <stdio.h>
#include <ctype.h>

int main() {
    float peso, altura, imc;
    int idade;
    char sexo;

    // Entrada
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    sexo = toupper(sexo); // Normaliza entrada para maiúscula

    // Validação
    if (peso <= 0 || altura <= 0 || idade <= 0 || (sexo != 'M' && sexo != 'F')) {
        printf("Erro: entradas invalidas.\n");
        return 1;
    }

    // Processamento
    imc = peso / (altura * altura);

    printf("\nSeu IMC: %.2f\n", imc);

    // Classificação
    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Classificacao: Obesidade grau I\n");
    } else if (imc < 40.0) {
        printf("Classificacao: Obesidade grau II\n");
    } else {
        printf("Classificacao: Obesidade grau III\n");
    }

    // Recomendações personalizadas
    if ((sexo == 'M') && (imc >= 25.0)) {
        printf("Recomendacao: Focar em exercicios de forca.\n");
    }
    if ((sexo == 'F') && (imc >= 25.0)) {
        printf("Recomendacao: Focar em exercicios aerobicos.\n");
    }
    if ((idade >= 60) && (imc < 18.5)) {
        printf("Recomendacao: Consultar um geriatra.\n");
    }
    if ((idade <= 25) && (imc >= 30.0)) {
        printf("Recomendacao: Procurar um nutricionista.\n");
    }

    return 0;
}
