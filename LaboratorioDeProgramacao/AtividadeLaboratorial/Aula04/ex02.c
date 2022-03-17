// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
    int  i, primo, N, A;

    printf("Escreva um numero qualquer: ");
    scanf("%i", &N);

    for ( A = 1; A < 2; A++) {
	
	        primo = 1;
	 
	        for (i = 2; i <= N / 2; ++i) {
	            if (N % i == 0) {
	                primo = 0;
	                break;
	            }
	        }

	        if (primo == 1){
	        	printf("O numero %d e primo.\n", N);
			} else {
                printf("O numero %d nao e primo.", N);
            }
		}

	}
	
