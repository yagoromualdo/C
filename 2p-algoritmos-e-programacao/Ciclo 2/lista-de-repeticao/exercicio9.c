// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

void main(){
    int N;

    printf("Digite um numero: ");
    scanf("%i",&N);
	
    for (int I=1; I<= 10; I++) {
	printf("\n%i X %i = %i", N, I, N*I);
    }

}