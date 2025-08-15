#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    // 1. Lê 4 notas de um aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // 2. Calcula a média
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // 3. Determina se foi aprovado e exibe o resultado
    printf("\nA media do aluno e: %.2f\n", media);

    if (media >= 70){
        printf("Parabens! O aluno foi APROVADO.\n");
    } else {
        printf("Que pena! O aluno foi REPROVADO.\n");
    }

    return 0;
}