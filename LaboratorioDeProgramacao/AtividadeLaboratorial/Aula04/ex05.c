// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	float N, num, D, R;

    printf("Escreva um valor positivo: ");
	scanf("%f",  &N);
    
    for (num = 0; num <= N; num++) {
        
        if (num == 1)
        {
            printf("%0.0f", num);
            continue;
        }
        
        if(num > 1) {
        printf(" + 1/%0.0f", num);
        }

        D = num;

        R += D;

        if (num == N) {
        printf("\nO resultado da soma e: %0.0f", R+1);
        }
    }
 }


   
	