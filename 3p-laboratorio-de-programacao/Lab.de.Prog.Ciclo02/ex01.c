// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	int num[6];
    int i, cont_par, cont_impar;
	
    for (i=0; i < 6; i++) {
    printf("\nPosicao: %i", i);
	printf("\nEscreva um numero: ");
	scanf("%i",&num[i]);
    }

    for (i=0, cont_par=0, cont_impar=0; i < 6; i++) {

        if(num[i]%2 == 0) {
            printf("\n\nNumero par: ");
            printf("\nPosicao: %i | ", i);
            printf("Numero: %i   ", num[i]);
            cont_par++;
        } else {
            printf("\n\nNumero impar: ");
            printf("\nPosicao: %i | ", i);
            printf("Numero: %i   ", num[i]);
            cont_impar++;
        }
    }

    if (cont_par == 0) 
    {
         printf("\n\nQuantidade de numeros pares: 0");
    } else {
        printf("\n\nQuantidade de numeros pares: %0.0d.", cont_par);
    }

    if (cont_impar == 0) 
    {
         printf("\n\nQuantidade de numeros impares: 0");
    } else {
        printf("\n\nQuantidade de numeros impares: %0.0d.", cont_impar);
    }
	
}