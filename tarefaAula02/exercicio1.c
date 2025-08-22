#include <stdio.h>

int main() {
    int pontuacaoInicial, pontuacaoFinal;

    // Entrada: pontuação inicial
    printf("Digite a pontuacao inicial do jogador: ");
    scanf("%d", &pontuacaoInicial);

    // Validação: pontuação inicial deve ser positiva
    if (pontuacaoInicial <= 0) {
        printf("Erro: a pontuacao inicial deve ser positiva.\n");
        return 1; // encerra o programa com erro
    }

    printf("\nPontuacao inicial: %d\n", pontuacaoInicial);

    // Processamento com operadores de atribuição composta
    pontuacaoFinal = pontuacaoInicial;

    pontuacaoFinal += 50; // Ganhou uma fase
    printf("Depois de ganhar uma fase (+50): %d\n", pontuacaoFinal);

    pontuacaoFinal *= 2; // Coletou item especial
    printf("Depois de coletar item especial (*2): %d\n", pontuacaoFinal);

    pontuacaoFinal -= 30; // Perdeu uma vida
    printf("Depois de perder uma vida (-30): %d\n", pontuacaoFinal);

    pontuacaoFinal += 15; // Bonus de tempo
    printf("Depois do bonus de tempo (+15): %d\n", pontuacaoFinal);

    pontuacaoFinal /= 3; // Penalidade por dificuldade
    printf("Depois da penalidade (/3): %d\n", pontuacaoFinal);

    pontuacaoFinal += 100; // Bonus final
    printf("Depois do bonus final (+100): %d\n", pontuacaoFinal);

    // Saída final
    printf("\nPontuacao final: %d\n", pontuacaoFinal);
    printf("Diferenca entre pontuacao inicial e final: %d\n", pontuacaoFinal - pontuacaoInicial);

    return 0;
}
