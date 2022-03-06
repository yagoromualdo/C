// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	float N1, N2, N3;
	printf("Digite um numero: ");
	scanf ("%f", &N1);

    printf("Digite outro numero: ");
	scanf ("%f", &N2);

    printf("Digite outro numero: ");
	scanf ("%f", &N3);
	
	if (N1 < N2 && N1 < N3) {
		printf("O menor numero digitado e o: %0.0f\n", N1);
	} else if(N2 < N1 && N2 < N3) {
		printf("O menor numero digitado e o: %0.0f\n", N2);
	} else if (N3 < N1 && N3 < N2) {
        printf("O menor numero digitado e o: %0.0f\n", N3);
    } else {
        printf("Digite numeros distintos\n");
    }
}
