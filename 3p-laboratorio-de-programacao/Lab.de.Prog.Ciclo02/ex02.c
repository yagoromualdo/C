// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	int num[7];
    int i;
	
    for (i=0; i < 7; i++) {
    printf("\nPosicao: %i", i);
	printf("\nEscreva um numero: ");
	scanf("%i",&num[i]);
    }

    for (i=0; i < 7; i++) {

        if(num[i]%2 == 0) {
            printf("\n\nNumero mutiplo de 2: ");
            printf("\nPosicao: %i | ", i);
            printf("Numero: %i   ", num[i]);
        } else if(num[i]%5 == 0) {
            printf("\n\nNumeros mutiplos de 5: ");
            printf("\nPosicao: %i | ", i);
            printf("Numero: %i   ", num[i]);
        }  
        if(num[i]%2 == 0 && num[i]%5 == 0) {
            printf("\n\nNumero mutiplo de 2 e de 5: ");
            printf("\nPosicao: %i | ", i);
            printf("Numero: %i   ", num[i]);
        }
    }

	
}