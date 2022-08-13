// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

void main(){
	float idade[10] = {1,2,3,4,5,6,7,8,9,10};
    int i, cont;
	
    for (i=0; i<= 9; i++) {
    printf("\nPosicao: %i", i);
	printf("\nEscreva sua idade: ");
	scanf("%f",&idade[i]);
    }

    printf("\nIdades iguais ou maiores que 18: ");

    for (i=0, cont=0; i<= 9; i++) {
        if(idade[i] >= 18) {
            printf("%0.0f   ", idade[i]);
            cont++;
        }
    }

    printf("\n\nQuantidade de pessoas com 18 anos ou mais: %0.0d pessoas.", cont);
	
}