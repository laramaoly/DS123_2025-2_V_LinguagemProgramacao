#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    float metros, quilometros;
    float quilos, libras;

    // 1. Converte temperatura (Celsius para Fahrenheit)
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius e igual a %.2f Fahrenheit.\n\n", celsius, fahrenheit);

    // 2. Converte distância (metros para quilômetros)
    printf("Digite a distancia em metros: ");
    scanf("%f", &metros);
    quilometros = metros / 1000;
    printf("%.2f metros e igual a %.2f quilometros.\n\n", metros, quilometros);

    // 3. Converte peso (quilos para libras)
    printf("Digite o peso em quilos: ");
    scanf("%f", &quilos);
    libras = quilos * 2.20462;
    printf("%.2f quilos e igual a %.2f libras.\n\n", quilos, libras);

    return 0;
}
