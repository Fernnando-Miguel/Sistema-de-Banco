#include <stdio.h>

typedef struct {

    char nome[90];
    char senha[50];
    int cpf;
    int numero_conta;
    float saldo;

}Conta;

    void mostrar_conta(Conta usuario){
        printf("===DADOS DO USUARIO===\n");
        printf("Nome: %s", usuario.nome);
        printf("Cpf: %d\n", usuario.cpf);
        printf("Numero da conta: %d\n", usuario.numero_conta);
        printf("Saldo: %f\n", usuario.saldo);
    }

int main () {
    Conta usuario;

    printf("===CADASTRO===\n");
    printf("Digite seu nome: ");
    fgets(usuario.nome, 90, stdin);

    printf("Digite seu cpf: ");
    scanf("%d", &usuario.cpf);

    printf("Digite seu numero da conta: ");
    scanf("%d", &usuario.numero_conta);

    while(getchar() != '\n' );

    printf("Digite sua senha: ");
    fgets(usuario.senha, 50, stdin);

      mostrar_conta(usuario);

    return 0;
}