// Dev: Yago Romualdo Vieira - 2012064

#include <stdio.h>
#include <stdlib.h>

struct lista_linear {
    int num;
    struct lista_linear *novoItem;
}; 
typedef struct lista_linear node;
node *lista = NULL, *final = NULL;

void criar_lista_linear();
void mostrar_lista_linear();
void inserir_no_final(int value);
void deletar_item(int value);

int main() {

    int value;
  
    criar_lista_linear();

    printf("\nQual o item  que voce deseja deletar\n");
    scanf("%d", &value);
    deletar_item(value);
    mostrar_lista_linear();

    return 0;
}

void criar_lista_linear() {
    int val;

    while (1) {
        printf("Inserir um  numero. (Para sair digite -1)\n");

        scanf("%d", &val);

        if (val == -1)
            break;

        inserir_no_final(val);
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

void mostrar_lista_linear() {
    printf("\nSua lista completa\n");

    node *myList;
    myList = lista;

    while (myList != NULL) {
        printf("%d ", myList->num);

        myList = myList->novoItem;
    }
    puts("");
}
