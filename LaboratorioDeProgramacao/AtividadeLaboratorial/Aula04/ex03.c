// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
    int  n1, n2, n3, n4, n5;

    printf("Escreva o 1 numero: ");
    scanf("%i", &n1);

    printf("Escreva o 2 numero: ");
    scanf("%i", &n2);

    printf("Escreva o 3 numero: ");
    scanf("%i", &n3);

     printf("Escreva o 4 numero: ");
    scanf("%i", &n4);

    printf("Escreva o 5 numero: ");
    scanf("%i", &n5);

    printf("\n");

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
        printf("O maior numero e %i\n", n1);
    } else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) {
        printf("O maior numero e %i\n", n2);
    } else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) {
        printf("O maior numero e %i\n", n3);
    } else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5) {
        printf("O maior numero e %i\n", n4);
    } else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4) {
        printf("O maior numero e %i\n", n5);
    }

    printf("\n");

    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        printf("O menor numero e %i\n", n1);
    } else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        printf("O menor numero e %i\n", n2);
    } else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        printf("O menor numero e %i\n", n3);
    } else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) {
        printf("O menor numero e %i\n", n4);
    } else if (n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4) {
        printf("O menor numero e %i\n", n5);
    }

    printf("\n");

    float soma, media;

    soma = n1 + n2 + n3 + n4 + n5;

    media = soma/2;

    printf("A media dos numeros digitados e: %0.2f", media);


}
	