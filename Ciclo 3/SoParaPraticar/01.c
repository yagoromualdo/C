// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

void main(){
	float idade[6] = {1,2,3,4,5,6};
    int i, cont, x;
	
    for (i=0; i< 6; i++) {
	printf("\nEscreva um numero qualquer: ");
	scanf("%f",&idade[i]);
    }

    printf("\n\n");

    for (i=0, cont=0; i< 6; i++) {
        x = idade[i];
        if(x % 2 == 0) {
            printf("%i   ", x);
            cont++;
        }
    }

    printf("\n\nQuantidade de numeros pares: %0.0d", cont);

    printf("\n\n\n");

    for (i=0, cont=0; i< 6; i++) {
        x = idade[i];
        if(x % 2 != 0) {
            printf("%i   ", x);
            cont++;
        }
    }

    printf("\n\nQuantidade de numeros impares: %0.0d", cont);

    printf("\n_");
}