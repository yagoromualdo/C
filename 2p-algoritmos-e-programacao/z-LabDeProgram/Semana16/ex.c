#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#define tam 15

main() {

    struct banco {

        int num_conta;

        char cliente[50];

        float saldo;
    };

    struct banco contas[3];

    int i, j, menu, ver_conta, conta_cliente = 0, cont = 0, numero;

    char vnome[50];

    while (menu != 4) {

        printf("\t Contas bancarias \n\n");

        printf("\t Menu de Opcoes \n\n");

        printf("\t [1] Cadastrar as Contas \n");

        printf("\t [2] Visualizar todas as contas \n");

        printf("\t [3] Visualizar conta \n");

        printf("\t [4] Sair \n");

        menu = 0;

        printf("\n\n\t Digite a opcao que voce deseja: ");
        scanf("\t%d", &menu);

        switch (menu) {

        case 1:

            printf("\n\n");

            do {

                printf("\t Digite o Numero da Conta: ");
                scanf("\t%d", &ver_conta);

                for (i = 0; i < tam; i++) {

                    if (ver_conta != contas[i].num_conta)
                    {

                        conta_cliente++;
                    }
                }

                if (conta_cliente == 3) {

                    contas[cont].num_conta = ver_conta;

                    printf("\t Digite o Nome do Cliente:");
                    scanf("\t%s", &contas[cont].cliente);

                    printf("\t Digite o saldo: ");
                    scanf("\t%f&quot;", &contas[cont].saldo);

                    printf("\n");

                    conta_cliente = 0;
                }

                else {

                    cont = cont - 1;

                    printf("Conta existe \n");

                    conta_cliente = 0;
                }

                cont++;

            }

            while (cont < 3);

            break;

        case 2:

            printf("\n\n");

            printf("\tDigite o nome do cliente:");
            scanf("\t%s", &vnome);

            for (i = 0; i < tam; i++) {
                numero = (strcmp(vnome, contas[i].cliente));

                if (numero == 0)

                    printf("\n \n \tNumero Conta: %d - Nome: %s - Saldo:%f\n", contas[i].num_conta, contas[i].cliente, contas[i].saldo);
            }

            system("pause");

            break;

        case 3:

            printf("\n\n");

            printf("\t Digite o Numero da Conta: ");
            scanf("\t%d", &ver_conta);

            for (i = 0; i < tam; i++) {
                if (ver_conta == contas[i].num_conta)
                {

                    printf("\n \n \tNumero Conta: %d - Nome: %s - Saldo:%f\n", contas[i].num_conta, contas[i].cliente, contas[i].saldo);
                }
            }

            system("pause");

            break;

        case 4:

            break;

        default:

            printf("OPCAO INVALIDA");
        }
    }

    getch();
}
