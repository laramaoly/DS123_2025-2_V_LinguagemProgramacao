
#include <stdio.h>
#include <stdlib.h>

#define MAX 20


//ESTRUTURA
typedef struct {
    int codigo;
    char nome[30];
    float preco;
    int estoque;
} Produto;

//PROTOTIPOS

void cadastrar(Produto p[], int *total);
void listar(Produto p[], int total);
void buscar(Produto p[], int total);

//IMPLEMENTAÇÕES DAS FUNÇÕES
void cadastrar(Produto p[], int *total){
    if(*total >= MAX){
        printf("Limite atingido!.\n");
        return;
    }
    printf("\n Codigo: "); scanf("%d", &p[*total].codigo);
    printf("\n Nome: "); scanf("%s", p[*total].nome);
    printf("\n Preço: "); scanf("%f", &p[*total].preco);
    printf("\n Estoque: "); scanf("%d", &p[*total].estoque);
    (*total)++;
    printf("cadastrado com sucesso!\n");
};
void listar(Produto p[], int total){
    printf("\n %-8s %-20s %-10s %-10s\n", "Codigo", "Nome", "Preço", "Estoque");
    printf("-----------------------------------------------------\n");
    for(int i = 0; i < total; i++){
        printf(" %-8d %-20s R$%-9.2f %-10d\n", 
            p[i].codigo, p[i].nome, p[i].preco, p[i].estoque);
    }
};
void buscar(Produto p[], int total){
    int cod;
    printf("Código: ");
    scanf("%d", &cod);
    for(int i = 0; i < total; i++){
        if(p[i].codigo == cod){
            printf("\n %s - R$%.2f  (Estoque: %d)\n", 
                p[i].nome, p[i].preco, p[i].estoque);
        
            return;
        }
    }
    printf("Produto não encontrado!\n");
};

//FUNÇÃO PRINCIPAL

int main(){
    Produto produtos[MAX];
    int total = 0;
    int op;

    do{
        printf("\n1-Cadastrar Produto 2-Listar 3-Buscar 0-Sair\n");
        scanf("%d", &op);

        switch(op){
            case 1: cadastrar(produtos, &total); break;
            case 2: listar(produtos, total); break;
            case 3: buscar(produtos, total); break;
            
            default: 
                break;
        }
    }while(op != 0);

    return 0;
}
