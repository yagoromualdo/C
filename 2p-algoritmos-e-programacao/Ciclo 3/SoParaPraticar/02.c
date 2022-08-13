// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

void main(){
	float idade[7] = {1,2,3,4,5,6};
    int i, cont, x;
	
    for (i=0; i< 7; i++) {
	printf("\nEscreva um numero qualquer: ");
	scanf("%f",&idade[i]);
    }

    printf("\n");

    for (i=0, cont=0; i< 7; i++) {
        x = idade[i];
        if(x % 2 == 0 || x % 3 == 0) {
            printf("%i   ", x);
            cont++;
        }
    }

    printf("\n\nQuantidade de numeros mutiplos de 2 ou 3: %0.0d numeros.", cont);

    printf("\n_");
}

