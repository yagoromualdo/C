// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

void main(){
	float num[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i, cont;
	
    for (i=0; i<= 14; i++) {
    printf("\nPosicao: %i", i);
	printf("\nEscreva um numero: ");
	scanf("%f",&num[i]);
    }

    printf("\nElementos iguais a 30: ");

    for (i=0, cont=0; i<= 14; i++) {
        if(num[i] == 30) {
            printf("\nPosicao: %i | ", i);
            printf("Numero: %0.0f   ", num[i]);
            cont++;
        }
    }

    if (cont == 0) 
    {
         printf("\n\nQuantidade de elementos igual a 30: 0");
    } else {
        printf("\n\nQuantidade de elementos igual a 30: %0.0d elementos.", cont);
    }
	
}