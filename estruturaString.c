//Estrutura
//Definição

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

//Uso
Pessoa p1= {"Maria", 30, 1.65};
printf("%s tem %d idade e altura de %.2f metros.\n", p1.nome, p1.idade, p1.altura);
