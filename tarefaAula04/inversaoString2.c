#include <stdio.h>
#include <string.h>

// Função para inverter uma string usando ponteiros
void inverter_string(char *str) {
    // Ponteiro 'inicio' aponta para o primeiro caractere
    char *inicio = str;
    // Ponteiro 'fim' aponta para o último caractere (antes do '\0')
    char *fim = str + strlen(str) - 1;
    char temp; // Variável temporária para a troca

    // O laço continua enquanto o ponteiro 'inicio' estiver antes do 'fim'
    while (inicio < fim) {
        // Troca os caracteres
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        // Move os ponteiros em direção ao centro da string
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