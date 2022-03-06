// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

void main(){
	float num[10] = {1,2,3,4,5,6,7,8,9,10};
    int i, cont;
	
    for (i=0; i<= 9; i++) {
	printf("\nEscreva um numero: ");
	scanf("%f",&num[i]);
    }

    printf("\n");

    for (i=0, cont=0; i<= 9; i++) {
        if(num[i] >= 30 && num[i] <= 90) {
            printf("%0.0f   ", num[i]);
            cont++;
        }
    }

    printf("\n\nQuantidade de numeros entre 30 e 90: %0.0d", cont);
	
}