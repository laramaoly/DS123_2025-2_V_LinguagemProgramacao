#include <stdio.h>

// Protótipos das funções de conversão
float celsiusParaFahrenheit(float celsius);
float fahrenheitParaCelsius(float fahrenheit);
float celsiusParaKelvin(float celsius);
float kelvinParaCelsius(float kelvin);
float fahrenheitParaKelvin(float fahrenheit);
float kelvinParaFahrenheit(float kelvin);

// Protótipo da função que exibe o menu
void exibirMenu();

int main() {
    int opcao;
    float tempEntrada, tempSaida;

    // Loop principal do programa, continua até o usuário digitar 7
    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // O switch direciona para a conversão correta
        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &tempEntrada);
                tempSaida = celsiusParaFahrenheit(tempEntrada);
                printf("Resultado: %.2f C = %.2f F\n\n", tempEntrada, tempSaida);
                break;

            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &tempEntrada);
                tempSaida = fahrenheitParaCelsius(tempEntrada);
                printf("Resultado: %.2f F = %.2f C\n\n", tempEntrada, tempSaida);
                break;

            case 3:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &tempEntrada);
                tempSaida = celsiusParaKelvin(tempEntrada);
                printf("Resultado: %.2f C = %.2f K\n\n", tempEntrada, tempSaida);
                break;

            case 4:
                printf("Digite a temperatura em Kelvin: ");
                scanf("%f", &tempEntrada);
                tempSaida = kelvinParaCelsius(tempEntrada);
                printf("Resultado: %.2f K = %.2f C\n\n", tempEntrada, tempSaida);
                break;

            case 5:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &tempEntrada);
                tempSaida = fahrenheitParaKelvin(tempEntrada);
                printf("Resultado: %.2f F = %.2f K\n\n", tempEntrada, tempSaida);
                break;

            case 6:
                printf("Digite a temperatura em Kelvin: ");
                scanf("%f", &tempEntrada);
                tempSaida = kelvinParaFahrenheit(tempEntrada);
                printf("Resultado: %.2f K = %.2f F\n\n", tempEntrada, tempSaida);
                break;
            
            case 7:
                printf("Saindo do programa. Ate mais!\n");
                break;

            default:
                printf("Opcao invalida! Por favor, tente novamente.\n\n");
                break;
        }

    } while (opcao != 7);

    return 0;
}

/**
 * @brief Exibe o menu de opções para o usuário.
 */
void exibirMenu() {
    printf("--- Conversor de Temperaturas ---\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Fahrenheit para Kelvin\n");
    printf("6. Kelvin para Fahrenheit\n");
    printf("7. Sair\n");
    printf("---------------------------------\n");
}

// --- Implementação das Funções de Conversão ---

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float celsiusParaKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheitParaKelvin(float fahrenheit) {
    // Primeiro converte para Celsius
    float celsius = fahrenheitParaCelsius(fahrenheit);
    // Depois converte de Celsius para Kelvin
    return celsiusParaKelvin(celsius);
}

float kelvinParaFahrenheit(float kelvin) {
    // Primeiro converte para Celsius
    float celsius = kelvinParaCelsius(kelvin);
    // Depois converte de Celsius para Fahrenheit
    return celsiusParaFahrenheit(celsius);
}