#include <stdio.h>

// Implementação da função que recebe ponteiros para área e perímetro
void calcular_retangulo(float largura, float altura, float *area, float *perimetro) {
    // Calcula a área e armazena o resultado no endereço de memória apontado por 'area'
    *area = largura * altura;

    // Calcula o perímetro e armazena o resultado no endereço de memória apontado por 'perimetro'
    *perimetro = 2 * (largura + altura);
}

int main() {
    float l = 5.0, h = 3.0;
    float area, perimetro;

    // Passa os endereços das variáveis 'area' e 'perimetro' para a função
    calcular_retangulo(l, h, &area, &perimetro);

    printf("Retângulo %.1f x %.1f\n", l, h);
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);

    return 0;
}