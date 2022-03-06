// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int A, B, C, D;
	printf("Escreva o valor de A:");
	scanf ("%f", &A);
	printf("Escreva o valor de B:");
	scanf ("%f", &B);
	printf("Escreva o valor de C:");
	scanf ("%f", &C);
	printf("Escreva o valor de D:");
	scanf ("%f", &D);
	
	if (B>C && D>A && C+D > A+B && C>0 && D>0 && A%2 == 0) {
		printf("Valores aceitos\n");
	} else {
		printf("Valores nao aceitos\n");
	}
}
