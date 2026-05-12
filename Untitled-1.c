#include <stdio.h>

typedef struct {

    char nome[90];
    char senha[50];
    int cpf;
    int numero_conta;
    float saldo;

}Conta;

void criar_conta;
void login;
void depositar;
void sacar;
void transferir;
void ver_saldo


int main () {
    Conta usuario;
    printf("Digite seu nome: ");
    fgets(usuario.nome, 90, stdin);

    return 0;
}