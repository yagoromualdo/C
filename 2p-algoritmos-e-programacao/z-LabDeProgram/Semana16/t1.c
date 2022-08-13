#include <stdio.h>
#include <stdlib.h>
#define TAM 4

typedef struct {
    int num_conta;
    char nome[40];
    float saldo;
} Dados;

Dados Clientes[TAM];
int posConta = 0;

//Função para imprimir menu de opções
void Imprimir_Menu();

//Função para cadastrar clientes
void Cadastro(Dados *Clientes, int *pos);

int main(int argc, char** argv) {
    int opcao;


    do {
        Imprimir_Menu();

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                Cadastro(Clientes, &posConta);
                break;
        }
    } while (posConta != TAM);

    return (EXIT_SUCCESS);
}


//-----------------------------------------------------------------------------//

void Imprimir_Menu() {
    printf("MENU \n");
    printf("\t 1. Cadastrar contas; \n");
    printf("\t 2. Visualizar todas as contas de determinado cliente; \n");
    printf("\t 3. Excluir a conta com menor saldo; \n");
    printf("\t 4. Sair \n\n");
}

//-----------------------------------------------------------------------------//

void Cadastro(Dados *Clientes, int *pos) {
    int Num_temp, i, achou = 0;

    printf("\n--------------------CADASTRO DE CLIENTES--------------------\n");

    printf("%dº Cliente \n", *pos + 1);

    /* O programa iria prosseguir somente quando o usuario digitar um número de conta
     que ainda não existe */

    do {
        printf("\tDgite o número da conta: ");
        scanf("%d", &Num_temp);

        for (i = 0; i < *pos + 1; i++) {
            if (Clientes[i].num_conta == Num_temp) {
                printf("achou = %d \n", achou);
                achou = 1;
            }
        }
        if (achou == 1) {
            printf("Conta ja existente. Favor digitar um número diferente. \n");
        }
    } while (achou != 0);

    Clientes[*pos].num_conta = Num_temp;

    printf("\tDgite o nome do cliente: ");
    setbuf(stdin, NULL);
    gets(Clientes[*pos].nome);

    printf("\tDigite seu saldo: ");
    scanf("%f", &Clientes[*pos].saldo);

    *pos = *pos + 1;


    printf("---------------------------------------------------------------------\n");
}