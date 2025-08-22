#include <stdio.h>

int main() {
    float saldo = 1000.0;
    int opcao;
    float valor, taxa;

    do {
        // Menu
        printf("\n====== Caixa Eletronico ======\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Deposito\n");
        printf("3 - Saque\n");
        printf("4 - Transferencia\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Usando if/else no lugar de switch
        if (opcao == 1) {
            // Consultar saldo
            printf("Saldo atual: R$ %.2f\n", saldo);

        } else if (opcao == 2) {
            // Deposito
            printf("Digite o valor para deposito: R$ ");
            scanf("%f", &valor);
            if (valor < 0.01) {
                printf("Erro: valor minimo de deposito eh R$0.01\n");
            } else {
                saldo += valor;
                printf("Deposito realizado! Novo saldo: R$ %.2f\n", saldo);
            }

        } else if (opcao == 3) {
            // Saque
            printf("Digite o valor para saque: R$ ");
            scanf("%f", &valor);
            if (valor >= 500) {
                printf("Erro: saque maximo por operacao eh R$500.00\n");
            } else if (valor > saldo) {
                printf("Erro: saldo insuficiente.\n");
            } else if (valor <= 0) {
                printf("Erro: valor invalido.\n");
            } else {
                saldo -= valor;
                printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
            }

        } else if (opcao == 4) {
            // Transferencia
            printf("Digite o valor da transferencia: R$ ");
            scanf("%f", &valor);
            if (valor <= 0) {
                printf("Erro: valor invalido.\n");
            } else if (valor > saldo) {
                printf("Erro: saldo insuficiente.\n");
            } else {
                taxa = valor * 0.01;
                if (taxa < 2.0) taxa = 2.0; // taxa mínima
                saldo -= (valor + taxa);
                printf("Transferencia realizada com taxa de R$ %.2f.\n", taxa);
                printf("Novo saldo: R$ %.2f\n", saldo);
            }

        } else if (opcao == 5) {
            // Sair
            printf("Saindo do sistema. Obrigado!\n");

        } else {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}
