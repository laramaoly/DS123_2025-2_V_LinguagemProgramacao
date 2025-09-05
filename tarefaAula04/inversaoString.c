#include <stdio.h>

// Função para inverter uma string usando ponteiros
void inverter_string(char *str) {
    // 1. Encontrar o fim da string
    char *fim = str;
    while (*fim != '\0') {
        fim++;
    }
    fim--; // Ajusta para o último caractere válido

    // 2. Iniciar a troca
    char *inicio = str; // Ponteiro 'inicio' aponta para o começo
    char temp; // Variável temporária para ajudar na troca

    // 3. Trocar os caracteres até que os ponteiros se cruzem
    while (inicio < fim) {
        // Troca o caractere do início com o do fim
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        // Move os ponteiros em direção ao centro
        inicio++;
        fim--;
    }
}

int main() {
    char texto[] = "PONTEIROS";

    printf("String original: %s\n", texto);
    inverter_string(texto);
    printf("String invertida: %s\n", texto);

    return 0;
}