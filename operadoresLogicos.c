// Operadores Logicos (&&,||, !)

#include <stdio.h>

int main(){
    //sistema de login
    char usuario[20], senha[20];
    int tentativas =0;
    int max_tentativas =3;


    printf("\n === SISTEMA DE LOGIN ===\n");

    do{
        tentativas++;
        printf("\nTentativa %d/%d\n", tentativas, max_tentativas);
        printf("Usuario: ");
        scanf("%s", usuario);
        printf("Senha: ");
        scanf("%s", senha);

        //verificação usando operadores lógicos
        if (strcmp(usuario, "admin") == 0 & strcmp(senha, "123456") == 0){
            printf("Login com sucesso!\n");
            break;
            }else{
                printf("Usuário ou senha incorretos!\n");
            }
        }while (tentativas < max_tentativas && !(strcmp(usuario, "admin") == 0 & strcmp(senha, "123456") == 0));

    return 0;

 }

