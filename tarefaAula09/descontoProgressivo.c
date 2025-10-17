#include <stdio.h>

// Variáveis Globais
int totalVendasRealizadas = 0;
float valorTotalVendido = 0.0;

// Protótipos das funções
float calcularDesconto(float valorCompra);
float aplicarDesconto(float valor, float percentual);
float calcularValorFinal(float valor);
void exibirResumo(float valorOriginal, float percentualDesconto, float valorDesconto, float valorFinal);
void processarVenda(); // Função auxiliar para o loop do programa

int main() {
    char continuar;

    do {
        processarVenda();
        printf("\nDeseja registrar outra venda? (s/n): ");
        // Limpa o buffer do teclado antes de ler o caractere
        while(getchar() != '\n'); 
        scanf("%c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("\n--- Resumo Geral das Vendas ---\n");
    printf("Total de vendas realizadas: %d\n", totalVendasRealizadas);
    printf("Valor total vendido (bruto): R$ %.2f\n", valorTotalVendido);
    printf("-------------------------------\n");

    return 0;
}

/**
 * @brief Função que encapsula a lógica de uma única venda.
 */
void processarVenda() {
    float valorCompra;

    printf("\n--- Sistema de Desconto Progressivo ---\n");
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra > 0) {
        // Atualiza as variáveis globais
        totalVendasRealizadas++;
        valorTotalVendido += valorCompra;
        
        // Calcula o valor final e exibe o resumo
        calcularValorFinal(valorCompra);
    } else {
        printf("O valor da compra deve ser positivo.\n");
    }
}


/**
 * @brief Calcula o percentual de desconto com base no valor da compra.
 * @param valorCompra O valor total da compra.
 * @return O percentual de desconto (ex: 5 para 5%, 10 para 10%).
 */
float calcularDesconto(float valorCompra) {
    if (valorCompra >= 1000.0) {
        return 15.0;
    } else if (valorCompra >= 500.0) {
        return 10.0;
    } else if (valorCompra >= 100.0) {
        return 5.0;
    } else {
        return 0.0;
    }
}

/**
 * @brief Aplica um percentual de desconto a um valor.
 * @param valor O valor original.
 * @param percentual O percentual de desconto a ser aplicado.
 * @return O valor com o desconto aplicado.
 */
float aplicarDesconto(float valor, float percentual) {
    float valorDesconto = valor * (percentual / 100.0);
    return valor - valorDesconto;
}

/**
 * @brief Orquestra o cálculo do valor final da compra.
 * @param valor O valor original da compra.
 * @return O valor final com o desconto.
 */
float calcularValorFinal(float valor) {
    float percentual = calcularDesconto(valor);
    float valorFinal = aplicarDesconto(valor, percentual);
    float valorDoDesconto = valor - valorFinal;

    exibirResumo(valor, percentual, valorDoDesconto, valorFinal);

    return valorFinal;
}

/**
 * @brief Exibe um resumo detalhado da transação.
 * @param valorOriginal O valor bruto da compra.
 * @param percentualDesconto O percentual de desconto aplicado.
 * @param valorDesconto O valor monetário do desconto.
 * @param valorFinal O valor a ser pago pelo cliente.
 */
void exibirResumo(float valorOriginal, float percentualDesconto, float valorDesconto, float valorFinal) {
    printf("\n--- Resumo da Compra ---\n");
    printf("Valor Original.......: R$ %8.2f\n", valorOriginal);
    printf("Desconto Aplicado....: %8.1f%%\n", percentualDesconto);
    printf("Valor do Desconto....: R$ %8.2f\n", valorDesconto);
    printf("---------------------------\n");
    printf("Valor Final a Pagar..: R$ %8.2f\n", valorFinal);
    printf("---------------------------\n");
}