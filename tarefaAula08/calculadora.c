#include <stdio.h>
#include <stdlib.h> // Para a função system("cls") ou system("clear")

// --- Protótipos das Funções ---

// Funções de interface com o usuário
void exibirMenu();
int obterOpcao();
void obterNumeros(float *n1, float *n2); // Passagem por REFERÊNCIA
void exibirResultado(float resultado);

// Funções de operações matemáticas
float somar(float a, float b);       // Passagem por VALOR
float subtrair(float a, float b);    // Passagem por VALOR
float multiplicar(float a, float b); // Passagem por VALOR
float dividir(float a, float b);     // Passagem por VALOR

// --- Função Principal (main) ---
int main() {
    int opcao;
    float num1, num2, resultado;

    // Loop principal que permite múltiplas operações
    do {
        // system("cls || clear"); // Descomente para limpar a tela a cada operação (funciona em Windows/Linux)
        exibirMenu();
        opcao = obterOpcao();

        // Se a opção não for "Sair", pede os números
        if (opcao >= 1 && opcao <= 4) {
            obterNumeros(&num1, &num2);
        }

        switch (opcao) {
            case 1: // Somar
                resultado = somar(num1, num2);
                exibirResultado(resultado);
                break;
            case 2: // Subtrair
                resultado = subtrair(num1, num2);
                exibirResultado(resultado);
                break;
            case 3: // Multiplicar
                resultado = multiplicar(num1, num2);
                exibirResultado(resultado);
                break;
            case 4: // Dividir
                // Tratamento para divisão por zero
                if (num2 != 0) {
                    resultado = dividir(num1, num2);
                    exibirResultado(resultado);
                } else {
                    printf("Erro: Divisao por zero nao e permitida.\n");
                }
                break;
            case 0: // Sair
                printf("Encerrando a calculadora. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
        printf("\nPressione Enter para continuar...");
        // Limpa o buffer de entrada antes de esperar pelo Enter
        while(getchar() != '\n');
        getchar(); // Espera o usuário pressionar Enter

    } while (opcao != 0);

    return 0;
}

// --- Implementação das Funções ---

/**
 * @brief Apenas exibe o menu de opções na tela.
 */
void exibirMenu() {
    printf("=== CALCULADORA ===\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("0. Sair\n");
    printf("===================\n");
}

/**
 * @brief Lê e retorna a opção escolhida pelo usuário.
 * @return A opção como um número inteiro.
 */
int obterOpcao() {
    int opt;
    printf("Opcao: ");
    scanf("%d", &opt);
    return opt;
}

/**
 * @brief Obtém dois números do usuário.
 * @note Usa passagem por REFERÊNCIA. A função recebe os endereços de memória
 * das variáveis 'num1' e 'num2' da função 'main' e modifica
 * seus valores diretamente.
 * @param n1 Ponteiro para a variável do primeiro número.
 * @param n2 Ponteiro para a variável do segundo número.
 */
void obterNumeros(float *n1, float *n2) {
    printf("Digite o primeiro numero: ");
    scanf("%f", n1); // Armazena o valor no endereço de memória apontado por n1
    printf("Digite o segundo numero: ");
    scanf("%f", n2); // Armazena o valor no endereço de memória apontado por n2
}

/**
 * @brief Exibe o resultado formatado na tela.
 * @param resultado O valor a ser exibido.
 */
void exibirResultado(float resultado) {
    printf("Resultado: %.2f\n", resultado);
}

/**
 * @brief Soma dois números.
 * @note Usa passagem por VALOR. A função recebe cópias dos valores de
 * 'num1' e 'num2'. Quaisquer alterações em 'a' e 'b' dentro
 * desta função não afetariam as variáveis originais.
 * @param a O primeiro número.
 * @param b O segundo número.
 * @return A soma de a e b.
 */
float somar(float a, float b) {
    return a + b;
}

/**
 * @brief Subtrai o segundo número do primeiro.
 * @param a O primeiro número.
 * @param b O segundo número.
 * @return A diferença entre a e b.
 */
float subtrair(float a, float b) {
    return a - b;
}

/**
 * @brief Multiplica dois números.
 * @param a O primeiro número.
 * @param b O segundo número.
 * @return O produto de a e b.
 */
float multiplicar(float a, float b) {
    return a * b;
}

/**
 * @brief Divide o primeiro número pelo segundo.
 * @param a O dividendo.
 * @param b O divisor.
 * @return O quociente de a por b.
 */
float dividir(float a, float b) {
    return a / b;
}