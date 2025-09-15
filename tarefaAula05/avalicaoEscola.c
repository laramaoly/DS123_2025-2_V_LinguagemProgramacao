#include <stdio.h>

int main() {
    // Matriz 5x4 (5 alunos, 4 bimestres)
    float notas_turma[5][4];

    printf("--- Entrada de Notas dos Alunos ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite as 4 notas do Aluno %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Nota do %dº bimestre: ", j + 1);
            scanf("%f", &notas_turma[i][j]);
        }
        printf("\n"); 
    }

    int aluno_maior_media = 0;
    int aluno_menor_media = 0;
    float maior_media = -1.0;
    float menor_media = 11.0;

    printf("\n--- Sistema de Avaliação Escolar ---\n");

    // Laço para calcular a média e o status de cada aluno 
    for (int i = 0; i < 5; i++) {
        float soma_notas = 0.0;
        for (int j = 0; j < 4; j++) {
            soma_notas += notas_turma[i][j];
        }
        float media = soma_notas / 4.0;

        // Uso de operadores ternários para determinar o status
        char* status = (media >= 7.0) ? "Aprovado" : ((media >= 5.0) ? "Recuperacao" : "Reprovado");

        printf("\nAluno %d: Notas [%.1f, %.1f, %.1f, %.1f]\n", i + 1, notas_turma[i][0], notas_turma[i][1], notas_turma[i][2], notas_turma[i][3]);
        printf("Média: %.2f - Status: %s\n", media, status);

        // Verifica a maior e menor média
        if (media > maior_media) {
            maior_media = media;
            aluno_maior_media = i + 1;
        }
        if (media < menor_media) {
            menor_media = media;
            aluno_menor_media = i + 1;
        }
    }

    // Exibe o resumo da turma com a maior e menor média 
    printf("\n--- Resumo da Turma ---\n");
    printf("Aluno com a maior média: Aluno %d (Média: %.2f)\n", aluno_maior_media, maior_media);
    printf("Aluno com a menor média: Aluno %d (Média: %.2f)\n", aluno_menor_media, menor_media);

    return 0;
}