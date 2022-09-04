// Dev: Yago Romualdo Vieira - 2012064

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

main() {

    int *ptr;
    int n, i;
    int countPar = 0;
    int countImpar = 0;

    printf(" \n Insira o tamanho do vetor: ");
    scanf("%i", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf(" Erro.\n");
        exit(0);
    }
    else {

        printf(" \n Insira %i numeros\n\n", n);

        for (i = 0; i < n; ++i) {
            printf(" Valor %i: ", i + 1);
            scanf("%i", &ptr[i]);
        }

        printf("\n Vetor completo: ");
        printf("\n [ ");
        for (i = 0; i < n; ++i) {
            printf("%i ", ptr[i]);
        }
        printf("]\n");

        printf("\n Pares: ");
        printf("\n [ ");
        for (i = 0; i < n; ++i) {
            if (ptr[i] % 2 == 0) {
                printf("%i ", ptr[i]);
                countPar++;
            }
        }
        printf("]\n");

        printf("\n Impares: ");
        printf("\n [ ");
        for (i = 0; i < n; ++i) {
            if (ptr[i] % 2 != 0) {
                printf("%i ", ptr[i]);
                countImpar++;
            }
        }
        printf("] \n\n");

        printf("\n Quantidade de numeros pares: %d\n", countPar);
        printf("\n Quantidade de numeros impares: %d", countImpar);
    }

    printf("\n\n_");
}