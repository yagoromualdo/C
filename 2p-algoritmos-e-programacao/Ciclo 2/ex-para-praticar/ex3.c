// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	float N;
	printf("Escreva um numero:");
	scanf ("%f", &N);
	
	if (N > 10) {
		printf("E maior que 10\n");
	} else if(N < 10){
		printf("Nao e maior que 10\n");
	}
}
