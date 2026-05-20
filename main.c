#include <stdio.h>

typedef struct {

    char nome[90];
    char senha[50];
    char cpf[11];
    int numero_conta;
    float saldo;

}Conta;

    void mostrar_conta(Conta usuario){
        printf("===DADOS DO USUARIO===\n");
        printf("Nome: %s", usuario.nome);
        printf("Cpf: %s\n", usuario.cpf);
        printf("Numero da conta: %d\n", usuario.numero_conta);
        printf("Saldo: %f\n", usuario.saldo);
    }

    void criar_conta(Conta *usuario){

        printf("===CADASTRO===\n");
    printf("Digite seu nome: ");
    fgets(usuario->nome, 90, stdin);

    printf("Digite seu cpf: ");
    fgets(usuario->cpf, 11, stdin);

    while(getchar() != '\n' );

    printf("Digite seu numero da conta: ");
    scanf("%d", &usuario->numero_conta);

    while(getchar() != '\n' );

    printf("Digite sua senha: ");
    fgets(usuario->senha, 50, stdin);


    }

int main () {

    Conta usuario; 
    int opcao;
    int conta_criada = 0;

    do {

    printf("\n ===MENU===\n");
    printf("1 - Cadastrar\n");
    printf("2 - Mostrar usuario cadastrado\n");
    printf("0 - Sair\n");
    
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    while(getchar() != '\n');
    
    switch(opcao){

        case 1:

        criar_conta(&usuario);

        conta_criada = 1;

        break;

        case 2: 

        if(conta_criada) {
            mostrar_conta(usuario);
        }else {
            printf("Nenhuma conta cadastrada!\n");
        }


        break;

        case 0:

        printf("Saindo...");

        break;

        default:

        printf("Opcao invalida!");

        break;

    }

    }while (opcao != 0);

    return 0;
}