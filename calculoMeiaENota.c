/*
* Programa: sistema_notas.c
* Descrição: Gerencia notas de alunos
* Calcula a média, maior e menor nota da turma
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 50

// Protótipos das funções
float calcularMedia(float notas[], int n);
float encotrarMaior (float notas[], int n);
float enconrarMenor (float notas[], int n);
int contarAprovados (float notas[], int n, float media_minima);
void exibirEstatisticas (float notas[], int n);

// Implementação das funções 

float calcularMedia(float notas[], int n){
    float soma = 0.0;
    for(int i = 0; i < n; i++){
        soma += notas[i];
    }
    return soma / n;
};
float encotrarMaior (float notas[], int n){
    float maior = notas[0];
    for(int i = 1; i < n; i++){
        if(notas[i] > maior){
            maior = notas[i];
        }
    }
    return maior;
};
float enconrarMenor (float notas[], int n){
    float menor = notas[0];
    for(int i = 1; i < n; i++){
        if(notas[i] < menor){
            menor = notas[i];
        }
    }
    return menor;
};
int contarAprovados (float notas[], int n, float media_minima){
    int aprovados = 0;
    for(int i = 0; i < n; i++){
        if(notas[i] >= media_minima){
            aprovados ++;
        }
    }
    return aprovados;
};
void exibirEstatisticas (float notas[], int n){
    printf("\nEstatísticas da Turma:\n");
    printf("Total de Alunos: %d\n", n);
    printf("Média da Turma: %.2f\n", calcularMedia(notas, n));
    printf("Maior Nota: %.2f\n", encotrarMaior(notas, n));
    printf("Menor Nota: %.2f\n", enconrarMenor(notas, n));
    printf("Número de Aprovados: %d\n", contarAprovados(notas, n, 6.0));
    printf("Número de Reprovados: %d\n", n - contarAprovados(notas, n, 6.0));
};

// Função Principal
int main() {
    float notas[MAX_ALUNOS];
    int num_alunos;
    int i;

    printf("=== Sistema de Gerenciamento de Notas ===\n");
    printf("Quantos alunos na turma? ");
    scanf("%d", &num_alunos);

    if (num_alunos <= 0 || num_alunos > MAX_ALUNOS) {
        printf("Número inválido de alunos. O máximo é %d.\n", MAX_ALUNOS);
        return 1;
    }

    printf("Digite as notas (0 a 10) dos %d alunos:\n");
    for (i = 0; i < num_alunos; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        if (notas[i] < 0.0 || notas[i] > 10.0) {
            printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
            i--; // repetir a entrada para este aluno
        }
    }

    exibirEstatisticas(notas, num_alunos);

    return 0;

}