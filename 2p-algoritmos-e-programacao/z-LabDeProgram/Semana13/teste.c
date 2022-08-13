// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int tam;

    printf("Digite o numero de linhas e colunas que a matriz devera ter: ");
    scanf("%i", &tam);

    int  mat[tam][tam], i, j, Soma = 0;

    printf("\nPreencha os valores da Matriz %i X %i\n", tam, tam);

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("\nDigite os valores para Posicao[%i][%i]\n", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (j >= tam - i) {
                Soma = Soma + mat[i][j];
            }
             printf("%i a", Soma);
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

    printf("\n\nResultado da soma: %i", Soma);

    return 0;
}

// Ex 2 antes

// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main() {

//     int tam;
   

//     printf("Digite o numero de linhas e colunas que a matriz devera ter: ");
//     scanf("%i", &tam);

//      int l, c, mat[tam][tam], num;

//     srand(time(NULL));

//     for(l = 0; l < tam; l++){
//         for(c = 0;  c< tam; c++){
//             printf("Digite um numero: ");
//             scanf("%i", &num);
//             mat[l][c] = num;
//         }
//     }

//     for(l = 0; l < tam; l++){
//         for(c = 0;  c< tam; c++){
//             printf("%2d ", mat[l][c]);
//         }
//         printf("\n");
//     }

//     printf("\n\nDiagonal principal: ");
//     for(l = 0; l < tam; l++){
//         printf("%d ", mat[l][l]);
//     }

//     printf("\n\nDiagonal secundaria: ");
//     for(l = 0; l < tam; l++){
//         printf("%d ", mat[l][tam - 1 - l]);
//     }
//     printf("\n\n");

//     return 0;
// }