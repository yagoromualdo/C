// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	float N1, N2;
	printf("Escreva um numero: ");
	scanf ("%f", &N1);

    printf("Escreva outro numero: ");
	scanf ("%f", &N2);
	
	if (N1 > N2) {
		printf("%0.0f e maior que %0.0f\n",N1, N2);
	} else if(N1 < N2){
		printf("%0.0f e maior que %0.0f\n",N2, N1);
	} else if (N1 == N2) {
        printf("Os numeros sao iguais\n");
    }
}
