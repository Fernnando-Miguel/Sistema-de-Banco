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

    return 0;
}