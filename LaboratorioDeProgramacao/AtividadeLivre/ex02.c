// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float segundosCorrespondentes (float HORA, float MIN, float SEG) {

		float min,resultado,ho;

		resultado = (SEG + (MIN * 60) + (HORA * 60 * 60));

		return resultado;

}

int main () {
	
	float hora, min, seg;
	
	printf("\nDigite a hora, o minuto e o segundo em ordem");
    printf ("\n\n Hora: ");
    scanf("%f",&hora);
    printf ("\n Minuto: ");
    scanf("%f",&min);
    printf ("\n Segundo: ");
    scanf("%f",&seg);
	
	
	printf("\nO total de segundos e igual a: %.2f",segundosCorrespondentes(hora, min, seg));

    printf ("\n_");

}