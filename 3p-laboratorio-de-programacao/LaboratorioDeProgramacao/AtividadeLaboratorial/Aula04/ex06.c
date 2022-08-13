// Dev: Yago Romualdo Vieira
// Matricula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float main(void) {
	float NumDigitado, num, Soma, Resultado;

    printf("Escreva um valor positivo: ");
	scanf("%f",  &NumDigitado);
    
    for (num = 0; num <= NumDigitado; num++) {
        
        if (num == 1) {
            printf("%0.0f", num);
            continue;
        }
        
        if(num > 1) {
        printf(" + 1/%0.0f", num);
        }

    }

    for (num = 1; num <= NumDigitado; num++) {

    Soma += 1 / num;

    }

    printf("\n%0.2f", Soma);

}


   
	
