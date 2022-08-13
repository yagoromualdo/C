// Devs: Yago Romualdo Vieira e Everton Vitor

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Matriz() {
    
    int tam;

    printf("\nDigite o numero de linhas e colunas que a matriz devera ter: ");
    scanf("%i", &tam);

    int  mat[tam][tam], i, j, Soma = 0;

    printf("\nPreencha os valores da Matriz %i X %i\n", tam, tam);

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("\nDigite os valores para Posicao[%i][%i]\n", i, j);
            scanf("%i", &mat[i][j]);
        }
    }


    printf("\n\n  Matriz \n\n");
    for (i = 0; i < tam; i++) {
        printf("  %i\t[ ", i);
        for (j = 0; j < tam; j++) {
            printf("%i ", mat[i][j]);
        }
        printf("]\n");
    }

    printf("\nNumeros que serao somados:\n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (j >= tam - i) {
                Soma = Soma + mat[i][j];
                printf("%i ", mat[i][j]);
            }
        }
    }

    return Soma;
}


int main() {
    int resultado;

    resultado = Matriz();

    printf("\n\nResultado da soma: %d", resultado);

    return 0;
}