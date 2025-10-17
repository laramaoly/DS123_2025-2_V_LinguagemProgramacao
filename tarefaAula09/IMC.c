#include <stdio.h>

// Protótipos das funções
float calcularIMC(float peso, float altura);
void exibirClassificacao(float imc);
int validarDados(float peso, float altura);
float calcularPesoIdeal(float altura);

int main() {
    float peso, altura, imc;

    printf("--- Calculadora de IMC ---\n");
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    // Valida os dados antes de prosseguir
    if (validarDados(peso, altura)) {
        // Calcula o IMC
        imc = calcularIMC(peso, altura);

        printf("\n--- Resultados ---\n");
        printf("Seu IMC e: %.2f\n", imc);

        // Exibe a classificação
        printf("Classificacao: ");
        exibirClassificacao(imc);

        // Calcula e exibe o peso ideal
        float pIdeal = calcularPesoIdeal(altura);
        printf("Seu peso ideal (IMC 22) e: %.2f kg\n", pIdeal);
        printf("--------------------\n");

    } else {
        // Mensagem de erro se os dados forem inválidos
        printf("\nErro: Peso e altura devem ser maiores que zero.\n");
    }

    return 0;
}

/**
 * @brief Calcula o IMC.
 * @param peso O peso em quilogramas.
 * @param altura A altura em metros.
 * @return O valor do IMC calculado.
 */
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

/**
 * @brief Exibe a classificação do IMC na tela.
 * @param imc O valor do IMC.
 */
void exibirClassificacao(float imc) {
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Sobrepeso\n");
    } else if (imc >= 30.0 && imc < 35.0) {
        printf("Obesidade Grau I\n");
    } else if (imc >= 35.0 && imc < 40.0) {
        printf("Obesidade Grau II\n");
    } else { // imc >= 40.0
        printf("Obesidade Grau III\n");
    }
}

/**
 * @brief Valida se o peso e a altura são positivos.
 * @param peso O peso a ser validado.
 * @param altura A altura a ser validada.
 * @return 1 se os dados são válidos, 0 caso contrário.
 */
int validarDados(float peso, float altura) {
    if (peso > 0 && altura > 0) {
        return 1; // Dados válidos
    }
    return 0; // Dados inválidos
}

/**
 * @brief Calcula o peso ideal para uma determinada altura, usando IMC 22.
 * @param altura A altura em metros.
 * @return O peso ideal em quilogramas.
 */
float calcularPesoIdeal(float altura) {
    float imcIdeal = 22.0;
    return imcIdeal * (altura * altura);
}