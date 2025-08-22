#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media, frequencia;
    char conceito;

    // Entrada
    printf("Digite a primeira nota (0 a 10): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota (0 a 10): ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota (0 a 10): ");
    scanf("%f", &nota3);
    printf("Digite a frequencia do aluno (0 a 100): ");
    scanf("%f", &frequencia);

    // Validação
    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
        printf("Erro: todas as notas devem estar entre 0 e 10.\n");
        return 1;
    }
    if (frequencia < 0 || frequencia > 100) {
        printf("Erro: frequencia deve estar entre 0 e 100.\n");
        return 1;
    }

    // Processamento
    media = (nota1 + nota2 + nota3) / 3.0;

    // Determina conceito
    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.0) {
        conceito = 'B';
    } else if (media >= 5.0) {
        conceito = 'C';
    } else {
        conceito = 'D';
    }

    // Saída
    printf("\nMedia: %.2f\n", media);
    printf("Conceito: %c\n", conceito);

    if (media >= 5.0 && frequencia >= 75.0) {
        printf("Status: Aprovado\n");
    } else if (media < 5.0 && frequencia >= 75.0) {
        printf("Status: Reprovado por nota\n");
    } else if (media >= 5.0 && frequencia < 75.0) {
        printf("Status: Reprovado por frequencia\n");
    } else {
        printf("Status: Reprovado por nota e frequencia\n");
    }

    return 0;
}
