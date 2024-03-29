// Dev: Yago Romualdo Vieira - 2012064

#include <stdio.h>
#include <stdlib.h>

struct lista_linear
{
    int num;
    struct lista_linear *novoItem;
};
typedef struct lista_linear node;
node *lista = NULL, *final = NULL;

void criar_lista_linear();
void inserir_no_final(int value);
void mostrar_lista_linear();
void deletar_item(int value);

int main() {

    int value, i;

    while (1) {
        if (i == 4)
            break;

        printf("\n-- MENU --\n");
        printf("\n[1] Adicionar um numero na lista\n");
        printf("\n[2] Visualizar lista \n");
        printf("\n[3] Remover um numero da lista\n");
        printf("\n[4] Sair \n");

        printf("\nQual opcao voce deseja? ");
        scanf("%d", &i);
        switch (i) {
            case 1: {
                criar_lista_linear();
                break;
            }
            case 2: {
                mostrar_lista_linear();
                break;
            }
            case 3: {
                printf("\nQual o item  que voce deseja deletar\n");
                scanf("%d", &value);
                deletar_item(value);
                break;
            }
            case 4: {
                break;
            }
        }
    }

    return 0;
}

void criar_lista_linear() {
    int val;

    while (1) {
        printf("\nInsira um  numero: ");

        scanf("%d", &val);

        if (val == -1)
            break;

        inserir_no_final(val);

        break;
    }
}

void inserir_no_final(int value) {
    node *temp_node;
    temp_node = (node *)malloc(sizeof(node));

    temp_node->num = value;
    temp_node->novoItem = NULL;

    if (lista == NULL) {
        lista = temp_node;
        final = temp_node;
    }
    else {
        final->novoItem = temp_node;
        final = temp_node;
    }
}

void mostrar_lista_linear() {
    printf("\nSua lista completa:\n");

    node *myList;
    myList = lista;

    while (myList != NULL) {
        printf("%d ", myList->num);

        myList = myList->novoItem;
    }
    puts("");
}

void deletar_item(int value) {
    node *myNode = lista, *previous = NULL;
    int flag = 0;

    while (myNode != NULL) {
        if (myNode->num == value) {
            if (previous == NULL)
                lista = myNode->novoItem;
            else
                previous->novoItem = myNode->novoItem;

            printf("[%d] foi deletado da lista\n", value);

            flag = 1;
            free(myNode);
            break;
        }

        previous = myNode;
        myNode = myNode->novoItem;
    }

    if (flag == 0)
        printf("O item nao existe!\n");
}


