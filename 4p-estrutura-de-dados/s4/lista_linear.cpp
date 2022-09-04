// Dev: Yago Romualdo Vieira - 2012064

#include <stdio.h>
#include <stdlib.h>

struct lista_linear {
    int num;
    struct lista_linear *novoItem;
};

typedef struct lista_linear node;
node *inicio = NULL, *final = NULL;

void criar_lista_linear();
void mostrar_lista_linear();
void inserir_no_final(int value);
void inserir_no_final(int value);
void inserir(int id, int value);
void deletar_item(int value);

int main() {

    int id, value;

    printf("Criar lista\n");
    criar_lista_linear();
    mostrar_lista_linear();

    printf("\nQual o item  que voce deseja deletar (tem que ser identico ao inserido)\n");
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

    if (inicio == NULL) {
        inicio = temp_node;
        final = temp_node;
    }
    else {
        final->novoItem = temp_node;
        final = temp_node;
    }
}

void inserir(int id, int value) {
    node *myNode = inicio;
    int flag = 0;

    while (myNode != NULL) {
        if (myNode->num == id) {
            node *newNode = (node *)malloc(sizeof(node));
            newNode->num = value;
            newNode->novoItem = myNode->novoItem;
            myNode->novoItem = newNode;

            printf("%d foi inserido no comeco %d\n", value, id);

            flag = 1;

            break;
        }
        else
            myNode = myNode->novoItem;
    }

    if (flag == 0)
        printf("O item nao existe!\n");
}

void deletar_item(int value) {
    node *myNode = inicio, *previous = NULL;
    int flag = 0;

    while (myNode != NULL) {
        if (myNode->num == value) {
            if (previous == NULL)
                inicio = myNode->novoItem;
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
    myList = inicio;

    while (myList != NULL) {
        printf("%d ", myList->num);

        myList = myList->novoItem;
    }
    puts("");
}
