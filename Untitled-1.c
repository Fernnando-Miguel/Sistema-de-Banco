#include <stdio.h>

typedef struct {

    char nome[90];
    char senha[50];
    int cpf;
    int numero_conta;
    float saldo;

}Conta;

int main () {
    Conta usuario;

    printf("Digite seu nome: ");
    fgets(usuario.nome, 90, stdin);

    printf("Digite seu cpf: ");
    scanf("%d", &usuario.cpf);

    printf("Digite seu numero da conta: ");
    scanf("%d", &usuario.numero_conta);

    while(getchar() != '\n' );

    printf("Digite sua senha: ");
    fgets(usuario.senha, 50, stdin);

    return 0;
}