// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1, n2, n3, n4, n5, n6, n7,
    p1, p2, p3, p4, p5, p6, p7,
    soma, cont = 0;

    printf("Digite sua idade: ");
    scanf("%d", &n1);
    printf("Digite seu peso: ");
    scanf("%d", &p1);

    printf("\n");
    
    printf("Digite sua idade: ");
    scanf("%d", &n2);
    printf("Digite seu peso: ");
    scanf("%d", &p2);

    printf("\n");

    printf("Digite sua idade: ");
    scanf("%d", &n3);
    printf("Digite seu peso: ");
    scanf("%d", &p3);

    printf("\n");

    printf("Digite sua idade: ");
    scanf("%d", &n4);
    printf("Digite seu peso: ");
    scanf("%d", &p4);

    printf("\n");

    printf("Digite sua idade: ");
    scanf("%d", &n5);
    printf("Digite seu peso: ");
    scanf("%d", &p5);

    printf("\n");

    printf("Digite sua idade: ");
    scanf("%d", &n6);
    printf("Digite seu peso: ");
    scanf("%d", &p6);

    printf("\n");

    printf("Digite sua idade: ");
    scanf("%d", &n7);
    printf("Digite seu peso: ");
    scanf("%d", &p7);
	
    soma = n1 + n2 + n3 + n4 + n5 + n6 + n7;

    printf("\nA media de idade e: %i anos", soma/7);

    if (p1 > 90) {
        cont++;
    }
    if (p2 > 90) {
        cont++;
    }
    if (p3 > 90) {
        cont++;
    }
    if (p4 > 90) {
        cont++;
    }
    if (p5 > 90) {
        cont++;
    }
    if (p6 > 90) {
        cont++;
    }
    if (p7 > 90) {
        cont++;
    }

    printf("\n\nQuantidade de pessoas com mais de 90kg: %i", cont);

}