#include <stdio.h>

int main() {
    char nome[50], curso[50];
    int idade, ano_atual = 2025, ano_nascimento;

    // 1. Solicita nome, idade e curso
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu curso: ");
    scanf("%s", curso);

    // 2. Exibe mensagem de boas-vindas
    printf("\nBem-vindo(a), %s!\n", nome);
    printf("Sua idade e de %d anos e voce esta cursando %s.\n", idade, curso);

    // 3. Calcula e exibe o ano de nascimento
    ano_nascimento = ano_atual - idade;
    printf("Voce nasceu por volta do ano de %d.\n", ano_nascimento);

    return 0;
}

